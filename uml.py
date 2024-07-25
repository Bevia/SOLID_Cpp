#!/usr/bin/env python3
from graphviz import Digraph

# Add Graphviz to the PATH
import os
os.environ["PATH"] += os.pathsep + '/usr/local/bin'  # Adjust path as necessary

# Create a new directed graph
dot = Digraph(comment='Payment App UML Diagram')

# Define the nodes
dot.node('A', 'PaymentProcessor')
dot.node('B', 'PaymentValidator')
dot.node('C', 'TransactionLogger')
dot.node('D', 'ConcretePaymentValidator')
dot.node('E', 'ConsoleTransactionLogger')

# Define the edges
dot.edge('A', 'B', 'validates')
dot.edge('A', 'C', 'logs')
dot.edge('D', 'B', 'implements')
dot.edge('E', 'C', 'implements')

# Render the diagram
dot.render('payment_app_uml', view=True)

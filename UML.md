### Install Graph Viz

brew install graphviz

#### install verification:
dot -V

#### Running uml python file:
python3 uml.py

### What's going on here:

Here's what each part of the code does:

    Create the Graph: Digraph is used to create a new directed graph.
    Define the Nodes: Nodes represent the classes. The labels on the nodes are the class names.
        A is PaymentProcessor
        B is PaymentValidator
        C is TransactionLogger
        D is ConcretePaymentValidator
        E is ConsoleTransactionLogger
    Define the Edges: Edges represent the relationships between the classes. The labels on the edges describe the nature of the relationship.
        A to B with label validates: PaymentProcessor uses PaymentValidator for validation.
        A to C with label logs: PaymentProcessor uses TransactionLogger for logging.
        D to B with label implements: ConcretePaymentValidator implements PaymentValidator.
        E to C with label implements: ConsoleTransactionLogger implements TransactionLogger.
    Render the Diagram: dot.render generates the diagram and saves it as payment_app_uml. If view=True is set, it will also open the diagram using the default viewer.

By running this script, you will generate a UML diagram representing the relationships between the classes in your payment application, adhering to the SOLID principles.

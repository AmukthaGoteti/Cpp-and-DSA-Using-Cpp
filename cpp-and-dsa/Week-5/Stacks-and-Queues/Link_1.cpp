/*
    Stack involves LIFO(Last In First Out) concept.
    The last element inserted is the first to be popped out. 
    It means both insertion and deletion 
    operations happen at one end only.

    LIFO (Last In First Out) Principle:
        The LIFO principle means that the last element 
        added to a stack is the first one to be removed.
            New elements are always pushed on top.
            Removal (pop) also happens only from the top.
            This ensures a strict order: last in → first out.
    
    Basic Terminologies of stack:
        Top: 
            The position of the most recently inserted element. 
            Insertions (push) and deletions (pop) are 
            always performed at the top.
        Size: 
            Refers to the current number of 
            elements present in the stack.

    Types of Stack:
        Fixed Size Stack
            A fixed size stack has a predefined capacity.
            Once it becomes full, 
            no more elements can be added (this causes overflow).
            If the stack is empty and we try to 
            remove an element, it causes underflow.
            Typically implemented using a static array.
        
        Dynamic Size Stack
            A dynamic size stack can grow and shrink automatically as needed.
            If the stack is full, its capacity expands to allow more elements.
            As elements are removed, memory usage can shrink as well.
            Can be implemented using:
            -> Linked List
                grows/shrinks naturally.
            -> Dynamic Array (like vector in C++)
                resizes automatically.
        
    Note:
        We generally use dynamic stacks in practice,
        as they can grow or
        shrink as needed without overflow issues.
    
    Common Operations on Stack:
        push() to insert an element into the stack.
        pop() to remove an element from the stack.
        top() Returns the top element of the stack.
        isEmpty() returns true if stack is empty else false.
        size() returns the size of the stack.
*/
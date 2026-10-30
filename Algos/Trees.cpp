>> if we need to go till leaf of a tree ---->

	 if(!r)
        {
            if(s==t)
            return true;
            return false;
        }
        if(!r->left)
        {
            return solve(r->right, t,s+r->val);
        }
        if(!r->right)
        {
            return solve(r->left, t,s+r->val);
        }
	function



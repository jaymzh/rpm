struct rpmpsm_s {
    rpmts ts;			/*!< transaction set */
    rpmte te;			/*!< current transaction element */
    rpmfiles files;		/*!< transaction element file info */
    int scriptArg;		/*!< Scriptlet package arg. */
    int countCorrection;	/*!< 0 if installing, -1 if removing. */
    rpmCallbackType what;	/*!< Callback type. */
    rpm_loff_t amount;		/*!< Callback amount. */
    rpm_loff_t total;		/*!< Callback total. */

    int nrefs;			/*!< Reference count. */
};



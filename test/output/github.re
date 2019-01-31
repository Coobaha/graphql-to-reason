module type SchemaConfig = {
  module Scalars: {
    type id;
    type gitSSHRemote;
    type gitTimestamp;
    type hTML;
    type x509Certificate;
    type gitObjectID;
    type date;
    type dateTime;
    type uRI;
  };
  type resolver('parent, 'payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type rootResolver('payload, 'fieldType, 'result) =
    Config.resolver(unit, 'payload, 'fieldType, 'result);
  type directiveResolver('payload) = Config.directiveResolver('payload);
  [@bs.deriving {jsConverter: newType}]
  type pullRequestTimelineItemsItemType = [
    | [@bs.as "ADDED_TO_PROJECT_EVENT"] `ADDED_TO_PROJECT_EVENT
    | [@bs.as "ASSIGNED_EVENT"] `ASSIGNED_EVENT
    | [@bs.as "BASE_REF_CHANGED_EVENT"] `BASE_REF_CHANGED_EVENT
    | [@bs.as "BASE_REF_FORCE_PUSHED_EVENT"] `BASE_REF_FORCE_PUSHED_EVENT
    | [@bs.as "CLOSED_EVENT"] `CLOSED_EVENT
    | [@bs.as "COMMENT_DELETED_EVENT"] `COMMENT_DELETED_EVENT
    | [@bs.as "CONVERTED_NOTE_TO_ISSUE_EVENT"] `CONVERTED_NOTE_TO_ISSUE_EVENT
    | [@bs.as "CROSS_REFERENCED_EVENT"] `CROSS_REFERENCED_EVENT
    | [@bs.as "DEMILESTONED_EVENT"] `DEMILESTONED_EVENT
    | [@bs.as "DEPLOYED_EVENT"] `DEPLOYED_EVENT
    | [@bs.as "DEPLOYMENT_ENVIRONMENT_CHANGED_EVENT"]
      `DEPLOYMENT_ENVIRONMENT_CHANGED_EVENT
    | [@bs.as "HEAD_REF_DELETED_EVENT"] `HEAD_REF_DELETED_EVENT
    | [@bs.as "HEAD_REF_FORCE_PUSHED_EVENT"] `HEAD_REF_FORCE_PUSHED_EVENT
    | [@bs.as "HEAD_REF_RESTORED_EVENT"] `HEAD_REF_RESTORED_EVENT
    | [@bs.as "ISSUE_COMMENT"] `ISSUE_COMMENT
    | [@bs.as "LABELED_EVENT"] `LABELED_EVENT
    | [@bs.as "LOCKED_EVENT"] `LOCKED_EVENT
    | [@bs.as "MENTIONED_EVENT"] `MENTIONED_EVENT
    | [@bs.as "MERGED_EVENT"] `MERGED_EVENT
    | [@bs.as "MILESTONED_EVENT"] `MILESTONED_EVENT
    | [@bs.as "MOVED_COLUMNS_IN_PROJECT_EVENT"] `MOVED_COLUMNS_IN_PROJECT_EVENT
    | [@bs.as "PULL_REQUEST_COMMIT"] `PULL_REQUEST_COMMIT
    | [@bs.as "PULL_REQUEST_COMMIT_COMMENT_THREAD"]
      `PULL_REQUEST_COMMIT_COMMENT_THREAD
    | [@bs.as "PULL_REQUEST_REVIEW"] `PULL_REQUEST_REVIEW
    | [@bs.as "PULL_REQUEST_REVIEW_THREAD"] `PULL_REQUEST_REVIEW_THREAD
    | [@bs.as "PULL_REQUEST_REVISION_MARKER"] `PULL_REQUEST_REVISION_MARKER
    | [@bs.as "REFERENCED_EVENT"] `REFERENCED_EVENT
    | [@bs.as "REMOVED_FROM_PROJECT_EVENT"] `REMOVED_FROM_PROJECT_EVENT
    | [@bs.as "RENAMED_TITLE_EVENT"] `RENAMED_TITLE_EVENT
    | [@bs.as "REOPENED_EVENT"] `REOPENED_EVENT
    | [@bs.as "REVIEW_DISMISSED_EVENT"] `REVIEW_DISMISSED_EVENT
    | [@bs.as "REVIEW_REQUESTED_EVENT"] `REVIEW_REQUESTED_EVENT
    | [@bs.as "REVIEW_REQUEST_REMOVED_EVENT"] `REVIEW_REQUEST_REMOVED_EVENT
    | [@bs.as "SUBSCRIBED_EVENT"] `SUBSCRIBED_EVENT
    | [@bs.as "UNASSIGNED_EVENT"] `UNASSIGNED_EVENT
    | [@bs.as "UNLABELED_EVENT"] `UNLABELED_EVENT
    | [@bs.as "UNLOCKED_EVENT"] `UNLOCKED_EVENT
    | [@bs.as "UNSUBSCRIBED_EVENT"] `UNSUBSCRIBED_EVENT
  ];
  [@bs.deriving {jsConverter: newType}]
  type projectCardArchivedState = [
    | [@bs.as "ARCHIVED"] `ARCHIVED
    | [@bs.as "NOT_ARCHIVED"] `NOT_ARCHIVED
  ];
  [@bs.deriving {jsConverter: newType}]
  type pullRequestReviewEvent = [
    | [@bs.as "APPROVE"] `APPROVE
    | [@bs.as "COMMENT"] `COMMENT
    | [@bs.as "DISMISS"] `DISMISS
    | [@bs.as "REQUEST_CHANGES"] `REQUEST_CHANGES
  ];
  [@bs.deriving {jsConverter: newType}]
  type issueOrderField = [
    | [@bs.as "COMMENTS"] `COMMENTS
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  [@bs.deriving {jsConverter: newType}]
  type repositoryContributionType = [
    | [@bs.as "COMMIT"] `COMMIT
    | [@bs.as "ISSUE"] `ISSUE
    | [@bs.as "PULL_REQUEST"] `PULL_REQUEST
    | [@bs.as "PULL_REQUEST_REVIEW"] `PULL_REQUEST_REVIEW
    | [@bs.as "REPOSITORY"] `REPOSITORY
  ];
  [@bs.deriving {jsConverter: newType}]
  type projectColumnPurpose = [
    | [@bs.as "DONE"] `DONE
    | [@bs.as "IN_PROGRESS"] `IN_PROGRESS
    | [@bs.as "TODO"] `TODO
  ];
  [@bs.deriving {jsConverter: newType}]
  type collaboratorAffiliation = [
    | [@bs.as "ALL"] `ALL
    | [@bs.as "DIRECT"] `DIRECT
    | [@bs.as "OUTSIDE"] `OUTSIDE
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamMemberOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "LOGIN"] `LOGIN
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamOrderField = [ | [@bs.as "NAME"] `NAME];
  [@bs.deriving {jsConverter: newType}]
  type gistPrivacy = [
    | [@bs.as "ALL"] `ALL
    | [@bs.as "PUBLIC"] `PUBLIC
    | [@bs.as "SECRET"] `SECRET
  ];
  [@bs.deriving {jsConverter: newType}]
  type issueState = [ | [@bs.as "CLOSED"] `CLOSED | [@bs.as "OPEN"] `OPEN];
  [@bs.deriving {jsConverter: newType}]
  type pullRequestReviewCommentState = [
    | [@bs.as "PENDING"] `PENDING
    | [@bs.as "SUBMITTED"] `SUBMITTED
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamRole = [ | [@bs.as "ADMIN"] `ADMIN | [@bs.as "MEMBER"] `MEMBER];
  [@bs.deriving {jsConverter: newType}]
  type reactionOrderField = [ | [@bs.as "CREATED_AT"] `CREATED_AT];
  [@bs.deriving {jsConverter: newType}]
  type pullRequestReviewState = [
    | [@bs.as "APPROVED"] `APPROVED
    | [@bs.as "CHANGES_REQUESTED"] `CHANGES_REQUESTED
    | [@bs.as "COMMENTED"] `COMMENTED
    | [@bs.as "DISMISSED"] `DISMISSED
    | [@bs.as "PENDING"] `PENDING
  ];
  [@bs.deriving {jsConverter: newType}]
  type topicSuggestionDeclineReason = [
    | [@bs.as "NOT_RELEVANT"] `NOT_RELEVANT
    | [@bs.as "PERSONAL_PREFERENCE"] `PERSONAL_PREFERENCE
    | [@bs.as "TOO_GENERAL"] `TOO_GENERAL
    | [@bs.as "TOO_SPECIFIC"] `TOO_SPECIFIC
  ];
  [@bs.deriving {jsConverter: newType}]
  type milestoneState = [ | [@bs.as "CLOSED"] `CLOSED | [@bs.as "OPEN"] `OPEN];
  [@bs.deriving {jsConverter: newType}]
  type reactionContent = [
    | [@bs.as "CONFUSED"] `CONFUSED
    | [@bs.as "HEART"] `HEART
    | [@bs.as "HOORAY"] `HOORAY
    | [@bs.as "LAUGH"] `LAUGH
    | [@bs.as "THUMBS_DOWN"] `THUMBS_DOWN
    | [@bs.as "THUMBS_UP"] `THUMBS_UP
  ];
  [@bs.deriving {jsConverter: newType}]
  type gitSignatureState = [
    | [@bs.as "BAD_CERT"] `BAD_CERT
    | [@bs.as "BAD_EMAIL"] `BAD_EMAIL
    | [@bs.as "EXPIRED_KEY"] `EXPIRED_KEY
    | [@bs.as "GPGVERIFY_ERROR"] `GPGVERIFY_ERROR
    | [@bs.as "GPGVERIFY_UNAVAILABLE"] `GPGVERIFY_UNAVAILABLE
    | [@bs.as "INVALID"] `INVALID
    | [@bs.as "MALFORMED_SIG"] `MALFORMED_SIG
    | [@bs.as "NOT_SIGNING_KEY"] `NOT_SIGNING_KEY
    | [@bs.as "NO_USER"] `NO_USER
    | [@bs.as "OCSP_ERROR"] `OCSP_ERROR
    | [@bs.as "OCSP_PENDING"] `OCSP_PENDING
    | [@bs.as "OCSP_REVOKED"] `OCSP_REVOKED
    | [@bs.as "UNKNOWN_KEY"] `UNKNOWN_KEY
    | [@bs.as "UNKNOWN_SIG_TYPE"] `UNKNOWN_SIG_TYPE
    | [@bs.as "UNSIGNED"] `UNSIGNED
    | [@bs.as "UNVERIFIED_EMAIL"] `UNVERIFIED_EMAIL
    | [@bs.as "VALID"] `VALID
  ];
  [@bs.deriving {jsConverter: newType}]
  type orderDirection = [ | [@bs.as "ASC"] `ASC | [@bs.as "DESC"] `DESC];
  [@bs.deriving {jsConverter: newType}]
  type repositoryAffiliation = [
    | [@bs.as "COLLABORATOR"] `COLLABORATOR
    | [@bs.as "ORGANIZATION_MEMBER"] `ORGANIZATION_MEMBER
    | [@bs.as "OWNER"] `OWNER
  ];
  [@bs.deriving {jsConverter: newType}]
  type refOrderField = [
    | [@bs.as "ALPHABETICAL"] `ALPHABETICAL
    | [@bs.as "TAG_COMMIT_DATE"] `TAG_COMMIT_DATE
  ];
  [@bs.deriving {jsConverter: newType}]
  type repositoryCollaboratorAffiliation = [
    | [@bs.as "ALL"] `ALL
    | [@bs.as "OUTSIDE"] `OUTSIDE
  ];
  [@bs.deriving {jsConverter: newType}]
  type repositoryPermission = [
    | [@bs.as "ADMIN"] `ADMIN
    | [@bs.as "READ"] `READ
    | [@bs.as "WRITE"] `WRITE
  ];
  [@bs.deriving {jsConverter: newType}]
  type repositoryOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "NAME"] `NAME
    | [@bs.as "PUSHED_AT"] `PUSHED_AT
    | [@bs.as "STARGAZERS"] `STARGAZERS
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  [@bs.deriving {jsConverter: newType}]
  type pullRequestPubSubTopic = [
    | [@bs.as "HEAD_REF"] `HEAD_REF
    | [@bs.as "MARKASREAD"] `MARKASREAD
    | [@bs.as "STATE"] `STATE
    | [@bs.as "TIMELINE"] `TIMELINE
    | [@bs.as "UPDATED"] `UPDATED
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamPrivacy = [
    | [@bs.as "SECRET"] `SECRET
    | [@bs.as "VISIBLE"] `VISIBLE
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamMemberRole = [
    | [@bs.as "MAINTAINER"] `MAINTAINER
    | [@bs.as "MEMBER"] `MEMBER
  ];
  [@bs.deriving {jsConverter: newType}]
  type releaseOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "NAME"] `NAME
  ];
  [@bs.deriving {jsConverter: newType}]
  type issuePubSubTopic = [
    | [@bs.as "MARKASREAD"] `MARKASREAD
    | [@bs.as "STATE"] `STATE
    | [@bs.as "TIMELINE"] `TIMELINE
    | [@bs.as "UPDATED"] `UPDATED
  ];
  [@bs.deriving {jsConverter: newType}]
  type mergeableState = [
    | [@bs.as "CONFLICTING"] `CONFLICTING
    | [@bs.as "MERGEABLE"] `MERGEABLE
    | [@bs.as "UNKNOWN"] `UNKNOWN
  ];
  [@bs.deriving {jsConverter: newType}]
  type organizationInvitationType = [
    | [@bs.as "EMAIL"] `EMAIL
    | [@bs.as "USER"] `USER
  ];
  [@bs.deriving {jsConverter: newType}]
  type repositoryPrivacy = [
    | [@bs.as "PRIVATE"] `PRIVATE
    | [@bs.as "PUBLIC"] `PUBLIC
  ];
  [@bs.deriving {jsConverter: newType}]
  type starOrderField = [ | [@bs.as "STARRED_AT"] `STARRED_AT];
  [@bs.deriving {jsConverter: newType}]
  type pullRequestOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  [@bs.deriving {jsConverter: newType}]
  type projectOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "NAME"] `NAME
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  [@bs.deriving {jsConverter: newType}]
  type projectState = [ | [@bs.as "CLOSED"] `CLOSED | [@bs.as "OPEN"] `OPEN];
  [@bs.deriving {jsConverter: newType}]
  type defaultRepositoryPermissionField = [
    | [@bs.as "ADMIN"] `ADMIN
    | [@bs.as "NONE"] `NONE
    | [@bs.as "READ"] `READ
    | [@bs.as "WRITE"] `WRITE
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamRepositoryOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "NAME"] `NAME
    | [@bs.as "PERMISSION"] `PERMISSION
    | [@bs.as "PUSHED_AT"] `PUSHED_AT
    | [@bs.as "STARGAZERS"] `STARGAZERS
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  [@bs.deriving {jsConverter: newType}]
  type deploymentStatusState = [
    | [@bs.as "ERROR"] `ERROR
    | [@bs.as "FAILURE"] `FAILURE
    | [@bs.as "INACTIVE"] `INACTIVE
    | [@bs.as "PENDING"] `PENDING
    | [@bs.as "SUCCESS"] `SUCCESS
  ];
  [@bs.deriving {jsConverter: newType}]
  type repositoryLockReason = [
    | [@bs.as "BILLING"] `BILLING
    | [@bs.as "MIGRATING"] `MIGRATING
    | [@bs.as "MOVING"] `MOVING
    | [@bs.as "RENAME"] `RENAME
  ];
  [@bs.deriving {jsConverter: newType}]
  type issueTimelineItemsItemType = [
    | [@bs.as "ADDED_TO_PROJECT_EVENT"] `ADDED_TO_PROJECT_EVENT
    | [@bs.as "ASSIGNED_EVENT"] `ASSIGNED_EVENT
    | [@bs.as "CLOSED_EVENT"] `CLOSED_EVENT
    | [@bs.as "COMMENT_DELETED_EVENT"] `COMMENT_DELETED_EVENT
    | [@bs.as "CONVERTED_NOTE_TO_ISSUE_EVENT"] `CONVERTED_NOTE_TO_ISSUE_EVENT
    | [@bs.as "CROSS_REFERENCED_EVENT"] `CROSS_REFERENCED_EVENT
    | [@bs.as "DEMILESTONED_EVENT"] `DEMILESTONED_EVENT
    | [@bs.as "ISSUE_COMMENT"] `ISSUE_COMMENT
    | [@bs.as "LABELED_EVENT"] `LABELED_EVENT
    | [@bs.as "LOCKED_EVENT"] `LOCKED_EVENT
    | [@bs.as "MENTIONED_EVENT"] `MENTIONED_EVENT
    | [@bs.as "MILESTONED_EVENT"] `MILESTONED_EVENT
    | [@bs.as "MOVED_COLUMNS_IN_PROJECT_EVENT"] `MOVED_COLUMNS_IN_PROJECT_EVENT
    | [@bs.as "REFERENCED_EVENT"] `REFERENCED_EVENT
    | [@bs.as "REMOVED_FROM_PROJECT_EVENT"] `REMOVED_FROM_PROJECT_EVENT
    | [@bs.as "RENAMED_TITLE_EVENT"] `RENAMED_TITLE_EVENT
    | [@bs.as "REOPENED_EVENT"] `REOPENED_EVENT
    | [@bs.as "SUBSCRIBED_EVENT"] `SUBSCRIBED_EVENT
    | [@bs.as "UNASSIGNED_EVENT"] `UNASSIGNED_EVENT
    | [@bs.as "UNLABELED_EVENT"] `UNLABELED_EVENT
    | [@bs.as "UNLOCKED_EVENT"] `UNLOCKED_EVENT
    | [@bs.as "UNSUBSCRIBED_EVENT"] `UNSUBSCRIBED_EVENT
  ];
  [@bs.deriving {jsConverter: newType}]
  type gistOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "PUSHED_AT"] `PUSHED_AT
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  [@bs.deriving {jsConverter: newType}]
  type projectCardState = [
    | [@bs.as "CONTENT_ONLY"] `CONTENT_ONLY
    | [@bs.as "NOTE_ONLY"] `NOTE_ONLY
    | [@bs.as "REDACTED"] `REDACTED
  ];
  [@bs.deriving {jsConverter: newType}]
  type organizationInvitationRole = [
    | [@bs.as "ADMIN"] `ADMIN
    | [@bs.as "BILLING_MANAGER"] `BILLING_MANAGER
    | [@bs.as "DIRECT_MEMBER"] `DIRECT_MEMBER
    | [@bs.as "REINSTATE"] `REINSTATE
  ];
  [@bs.deriving {jsConverter: newType}]
  type commentCannotUpdateReason = [
    | [@bs.as "INSUFFICIENT_ACCESS"] `INSUFFICIENT_ACCESS
    | [@bs.as "LOCKED"] `LOCKED
    | [@bs.as "LOGIN_REQUIRED"] `LOGIN_REQUIRED
    | [@bs.as "MAINTENANCE"] `MAINTENANCE
    | [@bs.as "VERIFIED_EMAIL_REQUIRED"] `VERIFIED_EMAIL_REQUIRED
  ];
  [@bs.deriving {jsConverter: newType}]
  type searchType = [
    | [@bs.as "ISSUE"] `ISSUE
    | [@bs.as "REPOSITORY"] `REPOSITORY
    | [@bs.as "USER"] `USER
  ];
  [@bs.deriving {jsConverter: newType}]
  type teamMembershipType = [
    | [@bs.as "ALL"] `ALL
    | [@bs.as "CHILD_TEAM"] `CHILD_TEAM
    | [@bs.as "IMMEDIATE"] `IMMEDIATE
  ];
  [@bs.deriving {jsConverter: newType}]
  type statusState = [
    | [@bs.as "ERROR"] `ERROR
    | [@bs.as "EXPECTED"] `EXPECTED
    | [@bs.as "FAILURE"] `FAILURE
    | [@bs.as "PENDING"] `PENDING
    | [@bs.as "SUCCESS"] `SUCCESS
  ];
  [@bs.deriving {jsConverter: newType}]
  type subscriptionState = [
    | [@bs.as "IGNORED"] `IGNORED
    | [@bs.as "SUBSCRIBED"] `SUBSCRIBED
    | [@bs.as "UNSUBSCRIBED"] `UNSUBSCRIBED
  ];
  [@bs.deriving {jsConverter: newType}]
  type languageOrderField = [ | [@bs.as "SIZE"] `SIZE];
  [@bs.deriving {jsConverter: newType}]
  type deploymentState = [
    | [@bs.as "ABANDONED"] `ABANDONED
    | [@bs.as "ACTIVE"] `ACTIVE
    | [@bs.as "DESTROYED"] `DESTROYED
    | [@bs.as "ERROR"] `ERROR
    | [@bs.as "FAILURE"] `FAILURE
    | [@bs.as "INACTIVE"] `INACTIVE
    | [@bs.as "PENDING"] `PENDING
  ];
  [@bs.deriving {jsConverter: newType}]
  type pullRequestState = [
    | [@bs.as "CLOSED"] `CLOSED
    | [@bs.as "MERGED"] `MERGED
    | [@bs.as "OPEN"] `OPEN
  ];
  [@bs.deriving {jsConverter: newType}]
  type lockReason = [
    | [@bs.as "OFF_TOPIC"] `OFF_TOPIC
    | [@bs.as "RESOLVED"] `RESOLVED
    | [@bs.as "SPAM"] `SPAM
    | [@bs.as "TOO_HEATED"] `TOO_HEATED
  ];
  [@bs.deriving {jsConverter: newType}]
  type commentAuthorAssociation = [
    | [@bs.as "COLLABORATOR"] `COLLABORATOR
    | [@bs.as "CONTRIBUTOR"] `CONTRIBUTOR
    | [@bs.as "FIRST_TIMER"] `FIRST_TIMER
    | [@bs.as "FIRST_TIME_CONTRIBUTOR"] `FIRST_TIME_CONTRIBUTOR
    | [@bs.as "MEMBER"] `MEMBER
    | [@bs.as "NONE"] `NONE
    | [@bs.as "OWNER"] `OWNER
  ];
  [@bs.deriving {jsConverter: newType}]
  type milestoneOrderField = [
    | [@bs.as "CREATED_AT"] `CREATED_AT
    | [@bs.as "DUE_DATE"] `DUE_DATE
    | [@bs.as "NUMBER"] `NUMBER
    | [@bs.as "UPDATED_AT"] `UPDATED_AT
  ];
  type lockLockableInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "lockReason": Js.Nullable.t(abs_lockReason),
    "lockableId": string,
  }
  and addReactionInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "content": abs_reactionContent,
    "subjectId": string,
  }
  and deletePullRequestReviewInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReviewId": string,
  }
  and declineTopicSuggestionInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "name": string,
    "reason": abs_topicSuggestionDeclineReason,
    "repositoryId": string,
  }
  and reactionOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_reactionOrderField,
  }
  and deleteBranchProtectionRuleInput = {
    .
    "branchProtectionRuleId": string,
    "clientMutationId": Js.Nullable.t(string),
  }
  and pullRequestOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_pullRequestOrderField,
  }
  and addProjectColumnInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "name": string,
    "projectId": string,
  }
  and createBranchProtectionRuleInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "dismissesStaleReviews": Js.Nullable.t(bool),
    "isAdminEnforced": Js.Nullable.t(bool),
    "pattern": string,
    "pushActorIds": Js.Nullable.t(array(string)),
    "repositoryId": string,
    "requiredApprovingReviewCount": Js.Nullable.t(int),
    "requiredStatusCheckContexts": Js.Nullable.t(array(string)),
    "requiresApprovingReviews": Js.Nullable.t(bool),
    "requiresCodeOwnerReviews": Js.Nullable.t(bool),
    "requiresCommitSignatures": Js.Nullable.t(bool),
    "requiresStatusChecks": Js.Nullable.t(bool),
    "requiresStrictStatusChecks": Js.Nullable.t(bool),
    "restrictsPushes": Js.Nullable.t(bool),
    "restrictsReviewDismissals": Js.Nullable.t(bool),
    "reviewDismissalActorIds": Js.Nullable.t(array(string)),
  }
  and updatePullRequestReviewInput = {
    .
    "body": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReviewId": string,
  }
  and addPullRequestReviewInput = {
    .
    "body": Js.Nullable.t(string),
    "clientMutationId": Js.Nullable.t(string),
    "comments":
      Js.Nullable.t(array(Js.Nullable.t(draftPullRequestReviewComment))),
    "commitOID": Js.Nullable.t(gitObjectID),
    "event": Js.Nullable.t(abs_pullRequestReviewEvent),
    "pullRequestId": string,
  }
  and updateProjectInput = {
    .
    "body": Js.Nullable.t(string),
    "clientMutationId": Js.Nullable.t(string),
    "name": Js.Nullable.t(string),
    "projectId": string,
    "public": Js.Nullable.t(bool),
    "state": Js.Nullable.t(abs_projectState),
  }
  and deleteProjectCardInput = {
    .
    "cardId": string,
    "clientMutationId": Js.Nullable.t(string),
  }
  and moveProjectColumnInput = {
    .
    "afterColumnId": Js.Nullable.t(string),
    "clientMutationId": Js.Nullable.t(string),
    "columnId": string,
  }
  and updatePullRequestReviewCommentInput = {
    .
    "body": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReviewCommentId": string,
  }
  and submitPullRequestReviewInput = {
    .
    "body": Js.Nullable.t(string),
    "clientMutationId": Js.Nullable.t(string),
    "event": abs_pullRequestReviewEvent,
    "pullRequestReviewId": string,
  }
  and removeStarInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "starrableId": string,
  }
  and acceptTopicSuggestionInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "name": string,
    "repositoryId": string,
  }
  and addPullRequestReviewCommentInput = {
    .
    "body": string,
    "clientMutationId": Js.Nullable.t(string),
    "commitOID": Js.Nullable.t(gitObjectID),
    "inReplyTo": Js.Nullable.t(string),
    "path": Js.Nullable.t(string),
    "position": Js.Nullable.t(int),
    "pullRequestReviewId": string,
  }
  and issueOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_issueOrderField,
  }
  and updateSubscriptionInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "state": abs_subscriptionState,
    "subscribableId": string,
  }
  and projectOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_projectOrderField,
  }
  and releaseOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_releaseOrderField,
  }
  and unlockLockableInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "lockableId": string,
  }
  and addProjectCardInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "contentId": Js.Nullable.t(string),
    "note": Js.Nullable.t(string),
    "projectColumnId": string,
  }
  and draftPullRequestReviewComment = {
    .
    "body": string,
    "path": string,
    "position": int,
  }
  and createProjectInput = {
    .
    "body": Js.Nullable.t(string),
    "clientMutationId": Js.Nullable.t(string),
    "name": string,
    "ownerId": string,
  }
  and repositoryOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_repositoryOrderField,
  }
  and addStarInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "starrableId": string,
  }
  and teamMemberOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_teamMemberOrderField,
  }
  and requestReviewsInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestId": string,
    "teamIds": Js.Nullable.t(array(string)),
    "union": Js.Nullable.t(bool),
    "userIds": Js.Nullable.t(array(string)),
  }
  and moveProjectCardInput = {
    .
    "afterCardId": Js.Nullable.t(string),
    "cardId": string,
    "clientMutationId": Js.Nullable.t(string),
    "columnId": string,
  }
  and milestoneOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_milestoneOrderField,
  }
  and updateBranchProtectionRuleInput = {
    .
    "branchProtectionRuleId": string,
    "clientMutationId": Js.Nullable.t(string),
    "dismissesStaleReviews": Js.Nullable.t(bool),
    "isAdminEnforced": Js.Nullable.t(bool),
    "pattern": Js.Nullable.t(string),
    "pushActorIds": Js.Nullable.t(array(string)),
    "requiredApprovingReviewCount": Js.Nullable.t(int),
    "requiredStatusCheckContexts": Js.Nullable.t(array(string)),
    "requiresApprovingReviews": Js.Nullable.t(bool),
    "requiresCodeOwnerReviews": Js.Nullable.t(bool),
    "requiresCommitSignatures": Js.Nullable.t(bool),
    "requiresStatusChecks": Js.Nullable.t(bool),
    "requiresStrictStatusChecks": Js.Nullable.t(bool),
    "restrictsPushes": Js.Nullable.t(bool),
    "restrictsReviewDismissals": Js.Nullable.t(bool),
    "reviewDismissalActorIds": Js.Nullable.t(array(string)),
  }
  and teamRepositoryOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_teamRepositoryOrderField,
  }
  and removeOutsideCollaboratorInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "organizationId": string,
    "userId": string,
  }
  and updateProjectColumnInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "name": string,
    "projectColumnId": string,
  }
  and removeReactionInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "content": abs_reactionContent,
    "subjectId": string,
  }
  and updateProjectCardInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "isArchived": Js.Nullable.t(bool),
    "note": Js.Nullable.t(string),
    "projectCardId": string,
  }
  and updateTopicsInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "repositoryId": string,
    "topicNames": array(string),
  }
  and commitAuthor = {
    .
    "emails": Js.Nullable.t(array(string)),
    "id": Js.Nullable.t(string),
  }
  and deleteProjectInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "projectId": string,
  }
  and refOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_refOrderField,
  }
  and teamOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_teamOrderField,
  }
  and gistOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_gistOrderField,
  }
  and dismissPullRequestReviewInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "message": string,
    "pullRequestReviewId": string,
  }
  and addCommentInput = {
    .
    "body": string,
    "clientMutationId": Js.Nullable.t(string),
    "subjectId": string,
  }
  and deleteProjectColumnInput = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "columnId": string,
  }
  and languageOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_languageOrderField,
  }
  and starOrder = {
    .
    "direction": abs_orderDirection,
    "field": abs_starOrderField,
  };
  type milestoneItem
  and reviewDismissalAllowanceActor
  and requestedReviewer
  and projectCardItem
  and referencedSubject
  and issueTimelineItems
  and pullRequestTimelineItem
  and issueTimelineItem
  and renamedTitleSubject
  and closer
  and pushAllowanceActor
  and issueOrPullRequest
  and pullRequestTimelineItems
  and collectionItemContent
  and searchResultItem
  and actor = {
    .
    "avatarUrl": uRI,
    "login": string,
    "resourcePath": uRI,
    "url": uRI,
  }
  and subscribable = {
    .
    "id": string,
    "viewerCanSubscribe": bool,
    "viewerSubscription": Js.Nullable.t(subscriptionState),
  }
  and gitObject = {
    .
    "abbreviatedOid": string,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "id": string,
    "oid": gitObjectID,
    "repository": repository,
  }
  and closable = {
    .
    "closed": bool,
    "closedAt": Js.Nullable.t(dateTime),
  }
  and lockable = {
    .
    "activeLockReason": Js.Nullable.t(lockReason),
    "locked": bool,
  }
  and assignable = {. "assignees": userConnection}
  and deletable = {. "viewerCanDelete": bool}
  and reactable = {
    .
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "reactionGroups": Js.Nullable.t(array(reactionGroup)),
    "reactions": reactionConnection,
    "viewerCanReact": bool,
  }
  and registryPackageOwner = {. "id": string}
  and registryPackageSearch = {. "id": string}
  and uniformResourceLocatable = {
    .
    "resourcePath": uRI,
    "url": uRI,
  }
  and repositoryNode = {. "repository": repository}
  and node = {. "id": string}
  and projectOwner = {
    .
    "id": string,
    "project": Js.Nullable.t(project),
    "projects": projectConnection,
    "projectsResourcePath": uRI,
    "projectsUrl": uRI,
    "viewerCanCreateProjects": bool,
  }
  and repositoryOwner = {
    .
    "avatarUrl": uRI,
    "id": string,
    "login": string,
    "pinnedRepositories": repositoryConnection,
    "repositories": repositoryConnection,
    "repository": Js.Nullable.t(repository),
    "resourcePath": uRI,
    "url": uRI,
  }
  and starrable = {
    .
    "id": string,
    "stargazers": stargazerConnection,
    "viewerHasStarred": bool,
  }
  and gitSignature = {
    .
    "email": string,
    "isValid": bool,
    "payload": string,
    "signature": string,
    "signer": Js.Nullable.t(user),
    "state": gitSignatureState,
    "wasSignedByGitHub": bool,
  }
  and updatableComment = {
    .
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
  }
  and comment = {
    .
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "editor": Js.Nullable.t(actor),
    "id": string,
    "includesCreatedEdit": bool,
    "lastEditedAt": Js.Nullable.t(dateTime),
    "publishedAt": Js.Nullable.t(dateTime),
    "updatedAt": dateTime,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerDidAuthor": bool,
  }
  and labelable = {. "labels": Js.Nullable.t(labelConnection)}
  and repositoryInfo = {
    .
    "createdAt": dateTime,
    "description": Js.Nullable.t(string),
    "descriptionHTML": hTML,
    "forkCount": int,
    "hasIssuesEnabled": bool,
    "hasWikiEnabled": bool,
    "homepageUrl": Js.Nullable.t(uRI),
    "isArchived": bool,
    "isFork": bool,
    "isLocked": bool,
    "isMirror": bool,
    "isPrivate": bool,
    "licenseInfo": Js.Nullable.t(license),
    "lockReason": Js.Nullable.t(repositoryLockReason),
    "mirrorUrl": Js.Nullable.t(uRI),
    "name": string,
    "nameWithOwner": string,
    "owner": repositoryOwner,
    "pushedAt": Js.Nullable.t(dateTime),
    "resourcePath": uRI,
    "shortDescriptionHTML": hTML,
    "updatedAt": dateTime,
    "url": uRI,
  }
  and updatable = {. "viewerCanUpdate": bool}
  and reactingUserConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(reactingUserEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and gitActor = {
    .
    "avatarUrl": uRI,
    "date": Js.Nullable.t(gitTimestamp),
    "email": Js.Nullable.t(string),
    "name": Js.Nullable.t(string),
    "user": Js.Nullable.t(user),
  }
  and pushAllowance = {
    .
    "actor": Js.Nullable.t(pushAllowanceActor),
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "id": string,
    "protectedBranch": protectedBranch,
  }
  and projectEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(project),
  }
  and reviewDismissalAllowance = {
    .
    "actor": Js.Nullable.t(reviewDismissalAllowanceActor),
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "id": string,
    "protectedBranch": protectedBranch,
  }
  and convertedNoteToIssueEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and labeledEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "label": label,
    "labelable": labelable,
  }
  and app = {
    .
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "description": Js.Nullable.t(string),
    "id": string,
    "logoBackgroundColor": string,
    "logoUrl": uRI,
    "name": string,
    "slug": string,
    "updatedAt": dateTime,
    "url": uRI,
  }
  and status = {
    .
    "commit": Js.Nullable.t(commit),
    "context": Js.Nullable.t(statusContext),
    "contexts": array(statusContext),
    "id": string,
    "state": statusState,
  }
  and pageInfo = {
    .
    "endCursor": Js.Nullable.t(string),
    "hasNextPage": bool,
    "hasPreviousPage": bool,
    "startCursor": Js.Nullable.t(string),
  }
  and issueCommentEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(issueComment),
  }
  and userContentEditEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(userContentEdit),
  }
  and organizationConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(organizationEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(organization))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and releaseConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(releaseEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(release))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and reviewRequestConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(reviewRequestEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(reviewRequest))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestCommit = {
    .
    "commit": commit,
    "id": string,
    "pullRequest": pullRequest,
    "resourcePath": uRI,
    "url": uRI,
  }
  and addPullRequestReviewCommentPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "comment": pullRequestReviewComment,
    "commentEdge": pullRequestReviewCommentEdge,
  }
  and pullRequestReviewConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(pullRequestReview))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and externalIdentityConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(externalIdentityEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(externalIdentity))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and commitCommentEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(commitComment),
  }
  and assignedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "assignable": assignable,
    "createdAt": dateTime,
    "id": string,
    "user": Js.Nullable.t(user),
  }
  and projectColumnConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(projectColumnEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(projectColumn))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and statusContext = {
    .
    "commit": Js.Nullable.t(commit),
    "context": string,
    "createdAt": dateTime,
    "creator": Js.Nullable.t(actor),
    "description": Js.Nullable.t(string),
    "id": string,
    "state": statusState,
    "targetUrl": Js.Nullable.t(uRI),
  }
  and gpgSignature = {
    .
    "email": string,
    "isValid": bool,
    "keyId": Js.Nullable.t(string),
    "payload": string,
    "signature": string,
    "signer": Js.Nullable.t(user),
    "state": gitSignatureState,
    "wasSignedByGitHub": bool,
  }
  and commitConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(commitEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(commit))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and bot = {
    .
    "avatarUrl": uRI,
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "login": string,
    "resourcePath": uRI,
    "updatedAt": dateTime,
    "url": uRI,
  }
  and externalIdentityEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(externalIdentity),
  }
  and protectedBranchConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(protectedBranchEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(protectedBranch))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestTimelineItemEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pullRequestTimelineItem),
  }
  and projectColumnEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(projectColumn),
  }
  and publicKey = {
    .
    "id": string,
    "key": string,
  }
  and pullRequestReview = {
    .
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "comments": pullRequestReviewCommentConnection,
    "commit": Js.Nullable.t(commit),
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "editor": Js.Nullable.t(actor),
    "id": string,
    "includesCreatedEdit": bool,
    "lastEditedAt": Js.Nullable.t(dateTime),
    "onBehalfOf": teamConnection,
    "publishedAt": Js.Nullable.t(dateTime),
    "pullRequest": pullRequest,
    "repository": repository,
    "resourcePath": uRI,
    "state": pullRequestReviewState,
    "submittedAt": Js.Nullable.t(dateTime),
    "updatedAt": dateTime,
    "url": uRI,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanDelete": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
  }
  and releaseAssetConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(releaseAssetEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(releaseAsset))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and branchProtectionRuleConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(branchProtectionRuleEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(branchProtectionRule))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and releaseAsset = {
    .
    "contentType": string,
    "createdAt": dateTime,
    "downloadCount": int,
    "downloadUrl": uRI,
    "id": string,
    "name": string,
    "release": Js.Nullable.t(release),
    "size": int,
    "updatedAt": dateTime,
    "uploadedBy": user,
    "url": uRI,
  }
  and deployKeyConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(deployKeyEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(deployKey))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestCommitEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pullRequestCommit),
  }
  and removeStarPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "starrable": starrable,
  }
  and suggestedReviewer = {
    .
    "isAuthor": bool,
    "isCommenter": bool,
    "reviewer": user,
  }
  and reviewRequest = {
    .
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "pullRequest": pullRequest,
    "requestedReviewer": Js.Nullable.t(requestedReviewer),
  }
  and tree = {
    .
    "abbreviatedOid": string,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "entries": Js.Nullable.t(array(treeEntry)),
    "id": string,
    "oid": gitObjectID,
    "repository": repository,
  }
  and searchResultItemConnection = {
    .
    "codeCount": int,
    "edges": Js.Nullable.t(array(Js.Nullable.t(searchResultItemEdge))),
    "issueCount": int,
    "nodes": Js.Nullable.t(array(Js.Nullable.t(searchResultItem))),
    "pageInfo": pageInfo,
    "repositoryCount": int,
    "userCount": int,
    "wikiCount": int,
  }
  and stargazerConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(stargazerEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and languageEdge = {
    .
    "cursor": string,
    "node": language,
    "size": int,
  }
  and issueCommentConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(issueCommentEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(issueComment))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and tag = {
    .
    "abbreviatedOid": string,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "id": string,
    "message": Js.Nullable.t(string),
    "name": string,
    "oid": gitObjectID,
    "repository": repository,
    "tagger": Js.Nullable.t(gitActor),
    "target": gitObject,
  }
  and addPullRequestReviewPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
    "reviewEdge": pullRequestReviewEdge,
  }
  and updateProjectColumnPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "projectColumn": projectColumn,
  }
  and refConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(refEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(ref))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and issueTimelineItemEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(issueTimelineItem),
  }
  and crossReferencedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "isCrossRepository": bool,
    "referencedAt": dateTime,
    "resourcePath": uRI,
    "source": referencedSubject,
    "target": referencedSubject,
    "url": uRI,
    "willCloseTarget": bool,
  }
  and reaction = {
    .
    "content": reactionContent,
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "reactable": reactable,
    "user": Js.Nullable.t(user),
  }
  and addProjectCardPayload = {
    .
    "cardEdge": projectCardEdge,
    "clientMutationId": Js.Nullable.t(string),
    "projectColumn": project,
  }
  and gistComment = {
    .
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "editor": Js.Nullable.t(actor),
    "gist": gist,
    "id": string,
    "includesCreatedEdit": bool,
    "lastEditedAt": Js.Nullable.t(dateTime),
    "publishedAt": Js.Nullable.t(dateTime),
    "updatedAt": dateTime,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanDelete": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
  }
  and organizationInvitationEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(organizationInvitation),
  }
  and repositoryInvitationEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(repositoryInvitation),
  }
  and textMatchHighlight = {
    .
    "beginIndice": int,
    "endIndice": int,
    "text": string,
  }
  and projectCard = {
    .
    "column": Js.Nullable.t(projectColumn),
    "content": Js.Nullable.t(projectCardItem),
    "createdAt": dateTime,
    "creator": Js.Nullable.t(actor),
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "isArchived": bool,
    "note": Js.Nullable.t(string),
    "project": project,
    "resourcePath": uRI,
    "state": Js.Nullable.t(projectCardState),
    "updatedAt": dateTime,
    "url": uRI,
  }
  and languageConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(languageEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(language))),
    "pageInfo": pageInfo,
    "totalCount": int,
    "totalSize": int,
  }
  and topicEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(topic),
  }
  and refEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(ref),
  }
  and marketplaceListing = {
    .
    "app": Js.Nullable.t(app),
    "companyUrl": Js.Nullable.t(uRI),
    "configurationResourcePath": uRI,
    "configurationUrl": uRI,
    "documentationUrl": Js.Nullable.t(uRI),
    "extendedDescription": Js.Nullable.t(string),
    "extendedDescriptionHTML": hTML,
    "fullDescription": string,
    "fullDescriptionHTML": hTML,
    "hasApprovalBeenRequested": bool,
    "hasPublishedFreeTrialPlans": bool,
    "hasTermsOfService": bool,
    "howItWorks": Js.Nullable.t(string),
    "howItWorksHTML": hTML,
    "id": string,
    "installationUrl": Js.Nullable.t(uRI),
    "installedForViewer": bool,
    "isApproved": bool,
    "isDelisted": bool,
    "isDraft": bool,
    "isPaid": bool,
    "isRejected": bool,
    "logoBackgroundColor": string,
    "logoUrl": Js.Nullable.t(uRI),
    "name": string,
    "normalizedShortDescription": string,
    "pricingUrl": Js.Nullable.t(uRI),
    "primaryCategory": marketplaceCategory,
    "privacyPolicyUrl": uRI,
    "resourcePath": uRI,
    "screenshotUrls": array(Js.Nullable.t(string)),
    "secondaryCategory": Js.Nullable.t(marketplaceCategory),
    "shortDescription": string,
    "slug": string,
    "statusUrl": Js.Nullable.t(uRI),
    "supportEmail": Js.Nullable.t(string),
    "supportUrl": uRI,
    "termsOfServiceUrl": Js.Nullable.t(uRI),
    "url": uRI,
    "viewerCanAddPlans": bool,
    "viewerCanApprove": bool,
    "viewerCanDelist": bool,
    "viewerCanEdit": bool,
    "viewerCanEditCategories": bool,
    "viewerCanEditPlans": bool,
    "viewerCanRedraft": bool,
    "viewerCanReject": bool,
    "viewerCanRequestApproval": bool,
    "viewerHasPurchased": bool,
    "viewerHasPurchasedForAllOrganizations": bool,
    "viewerIsListingAdmin": bool,
  }
  and commitCommentConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(commitCommentEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(commitComment))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestReviewCommentConnection = {
    .
    "edges":
      Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewCommentEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewComment))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and labelEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(label),
  }
  and createProjectPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "project": project,
  }
  and treeEntry = {
    .
    "mode": int,
    "name": string,
    "object": Js.Nullable.t(gitObject),
    "oid": gitObjectID,
    "repository": repository,
    "type": string,
  }
  and blameRange = {
    .
    "age": int,
    "commit": commit,
    "endingLine": int,
    "startingLine": int,
  }
  and baseRefForcePushedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "afterCommit": Js.Nullable.t(commit),
    "beforeCommit": Js.Nullable.t(commit),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
    "ref": Js.Nullable.t(ref),
  }
  and marketplaceCategory = {
    .
    "description": Js.Nullable.t(string),
    "howItWorks": Js.Nullable.t(string),
    "id": string,
    "name": string,
    "primaryListingCount": int,
    "resourcePath": uRI,
    "secondaryListingCount": int,
    "slug": string,
    "url": uRI,
  }
  and commitEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(commit),
  }
  and teamRepositoryConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(teamRepositoryEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(repository))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and teamEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(team),
  }
  and commitHistoryConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(commitEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(commit))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(userEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and gistEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(gist),
  }
  and teamRepositoryEdge = {
    .
    "cursor": string,
    "node": repository,
    "permission": repositoryPermission,
  }
  and blame = {. "ranges": array(blameRange)}
  and branchProtectionRule = {
    .
    "branchProtectionRuleConflicts": branchProtectionRuleConflictConnection,
    "creator": Js.Nullable.t(actor),
    "databaseId": Js.Nullable.t(int),
    "dismissesStaleReviews": bool,
    "id": string,
    "isAdminEnforced": bool,
    "matchingRefs": refConnection,
    "pattern": string,
    "pushAllowances": pushAllowanceConnection,
    "repository": Js.Nullable.t(repository),
    "requiredApprovingReviewCount": Js.Nullable.t(int),
    "requiredStatusCheckContexts":
      Js.Nullable.t(array(Js.Nullable.t(string))),
    "requiresApprovingReviews": bool,
    "requiresCommitSignatures": bool,
    "requiresStatusChecks": bool,
    "requiresStrictStatusChecks": bool,
    "restrictsPushes": bool,
    "restrictsReviewDismissals": bool,
    "reviewDismissalAllowances": reviewDismissalAllowanceConnection,
  }
  and deployment = {
    .
    "commit": Js.Nullable.t(commit),
    "createdAt": dateTime,
    "creator": Js.Nullable.t(actor),
    "databaseId": Js.Nullable.t(int),
    "description": Js.Nullable.t(string),
    "environment": Js.Nullable.t(string),
    "id": string,
    "latestStatus": Js.Nullable.t(deploymentStatus),
    "payload": Js.Nullable.t(string),
    "ref": Js.Nullable.t(ref),
    "repository": repository,
    "state": Js.Nullable.t(deploymentState),
    "statuses": Js.Nullable.t(deploymentStatusConnection),
    "task": Js.Nullable.t(string),
    "updatedAt": dateTime,
  }
  and repositoryCollaboratorEdge = {
    .
    "cursor": string,
    "node": user,
    "permission": repositoryPermission,
  }
  and language = {
    .
    "color": Js.Nullable.t(string),
    "id": string,
    "name": string,
  }
  and deleteProjectPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "owner": projectOwner,
  }
  and addStarPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "starrable": starrable,
  }
  and publicKeyEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(publicKey),
  }
  and repositoryEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(repository),
  }
  and deploymentStatusEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(deploymentStatus),
  }
  and headRefForcePushedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "afterCommit": Js.Nullable.t(commit),
    "beforeCommit": Js.Nullable.t(commit),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
    "ref": Js.Nullable.t(ref),
  }
  and baseRefChangedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and organizationIdentityProvider = {
    .
    "digestMethod": Js.Nullable.t(uRI),
    "externalIdentities": externalIdentityConnection,
    "id": string,
    "idpCertificate": Js.Nullable.t(x509Certificate),
    "issuer": Js.Nullable.t(string),
    "organization": Js.Nullable.t(organization),
    "signatureMethod": Js.Nullable.t(uRI),
    "ssoUrl": Js.Nullable.t(uRI),
  }
  and projectConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(projectEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(project))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pullRequest),
  }
  and unassignedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "assignable": assignable,
    "createdAt": dateTime,
    "id": string,
    "user": Js.Nullable.t(user),
  }
  and addProjectColumnPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "columnEdge": projectColumnEdge,
    "project": project,
  }
  and pullRequestTimelineConnection = {
    .
    "edges":
      Js.Nullable.t(array(Js.Nullable.t(pullRequestTimelineItemEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(pullRequestTimelineItem))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userContentEdit = {
    .
    "createdAt": dateTime,
    "deletedAt": Js.Nullable.t(dateTime),
    "deletedBy": Js.Nullable.t(actor),
    "diff": Js.Nullable.t(string),
    "editedAt": dateTime,
    "editor": Js.Nullable.t(actor),
    "id": string,
    "updatedAt": dateTime,
  }
  and deleteProjectColumnPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "deletedColumnId": string,
    "project": project,
  }
  and deploymentEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(deployment),
  }
  and requestReviewsPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequest": pullRequest,
    "requestedReviewersEdge": userEdge,
  }
  and teamMemberEdge = {
    .
    "cursor": string,
    "memberAccessResourcePath": uRI,
    "memberAccessUrl": uRI,
    "node": user,
    "role": teamMemberRole,
  }
  and headRefRestoredEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
  }
  and reviewDismissalAllowanceConnection = {
    .
    "edges":
      Js.Nullable.t(array(Js.Nullable.t(reviewDismissalAllowanceEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(reviewDismissalAllowance))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and searchResultItemEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(searchResultItem),
    "textMatches": Js.Nullable.t(array(Js.Nullable.t(textMatch))),
  }
  and deletePullRequestReviewPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and renamedTitleEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "currentTitle": string,
    "id": string,
    "previousTitle": string,
    "subject": renamedTitleSubject,
  }
  and demilestonedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "milestoneTitle": string,
    "subject": milestoneItem,
  }
  and issueComment = {
    .
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "editor": Js.Nullable.t(actor),
    "id": string,
    "includesCreatedEdit": bool,
    "issue": issue,
    "lastEditedAt": Js.Nullable.t(dateTime),
    "publishedAt": Js.Nullable.t(dateTime),
    "pullRequest": Js.Nullable.t(pullRequest),
    "reactionGroups": Js.Nullable.t(array(reactionGroup)),
    "reactions": reactionConnection,
    "repository": repository,
    "resourcePath": uRI,
    "updatedAt": dateTime,
    "url": uRI,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanDelete": bool,
    "viewerCanReact": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
  }
  and updateBranchProtectionRulePayload = {
    .
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "clientMutationId": Js.Nullable.t(string),
  }
  and commitCommentThread = {
    .
    "comments": commitCommentConnection,
    "commit": commit,
    "id": string,
    "path": Js.Nullable.t(string),
    "position": Js.Nullable.t(int),
    "repository": repository,
  }
  and removeReactionPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "reaction": reaction,
    "subject": reactable,
  }
  and user = {
    .
    "avatarUrl": uRI,
    "bio": Js.Nullable.t(string),
    "bioHTML": hTML,
    "commitComments": commitCommentConnection,
    "company": Js.Nullable.t(string),
    "companyHTML": hTML,
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "email": string,
    "followers": followerConnection,
    "following": followingConnection,
    "gist": Js.Nullable.t(gist),
    "gistComments": gistCommentConnection,
    "gists": gistConnection,
    "id": string,
    "isBountyHunter": bool,
    "isCampusExpert": bool,
    "isDeveloperProgramMember": bool,
    "isEmployee": bool,
    "isHireable": bool,
    "isSiteAdmin": bool,
    "isViewer": bool,
    "issueComments": issueCommentConnection,
    "issues": issueConnection,
    "location": Js.Nullable.t(string),
    "login": string,
    "name": Js.Nullable.t(string),
    "organization": Js.Nullable.t(organization),
    "organizations": organizationConnection,
    "pinnedRepositories": repositoryConnection,
    "publicKeys": publicKeyConnection,
    "pullRequests": pullRequestConnection,
    "repositories": repositoryConnection,
    "repositoriesContributedTo": repositoryConnection,
    "repository": Js.Nullable.t(repository),
    "resourcePath": uRI,
    "starredRepositories": starredRepositoryConnection,
    "updatedAt": dateTime,
    "url": uRI,
    "viewerCanFollow": bool,
    "viewerIsFollowing": bool,
    "watching": repositoryConnection,
    "websiteUrl": Js.Nullable.t(uRI),
  }
  and milestonedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "milestoneTitle": string,
    "subject": milestoneItem,
  }
  and reactionEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(reaction),
  }
  and publicKeyConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(publicKeyEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(publicKey))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and ref = {
    .
    "associatedPullRequests": pullRequestConnection,
    "id": string,
    "name": string,
    "prefix": string,
    "repository": repository,
    "target": gitObject,
  }
  and gist = {
    .
    "comments": gistCommentConnection,
    "createdAt": dateTime,
    "description": Js.Nullable.t(string),
    "id": string,
    "isPublic": bool,
    "name": string,
    "owner": Js.Nullable.t(repositoryOwner),
    "pushedAt": Js.Nullable.t(dateTime),
    "stargazers": stargazerConnection,
    "updatedAt": dateTime,
    "viewerHasStarred": bool,
  }
  and declineTopicSuggestionPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "topic": topic,
  }
  and followingConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(userEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(pullRequestEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(pullRequest))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and topicConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(topicEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(topic))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and codeOfConduct = {
    .
    "body": Js.Nullable.t(string),
    "key": string,
    "name": string,
    "url": Js.Nullable.t(uRI),
  }
  and updateProjectCardPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "projectCard": projectCard,
  }
  and branchProtectionRuleConflictConnection = {
    .
    "edges":
      Js.Nullable.t(array(Js.Nullable.t(branchProtectionRuleConflictEdge))),
    "nodes":
      Js.Nullable.t(array(Js.Nullable.t(branchProtectionRuleConflict))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pushAllowanceConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(pushAllowanceEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(pushAllowance))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and milestoneConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(milestoneEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(milestone))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and unsubscribedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "subscribable": subscribable,
  }
  and reactingUserEdge = {
    .
    "cursor": string,
    "node": user,
    "reactedAt": dateTime,
  }
  and reviewRequestRemovedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
    "requestedReviewer": Js.Nullable.t(requestedReviewer),
  }
  and issueEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(issue),
  }
  and removedFromProjectEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and mutation = {
    .
    "acceptTopicSuggestion": Js.Nullable.t(acceptTopicSuggestionPayload),
    "addComment": Js.Nullable.t(addCommentPayload),
    "addProjectCard": Js.Nullable.t(addProjectCardPayload),
    "addProjectColumn": Js.Nullable.t(addProjectColumnPayload),
    "addPullRequestReview": Js.Nullable.t(addPullRequestReviewPayload),
    "addPullRequestReviewComment":
      Js.Nullable.t(addPullRequestReviewCommentPayload),
    "addReaction": Js.Nullable.t(addReactionPayload),
    "addStar": Js.Nullable.t(addStarPayload),
    "createBranchProtectionRule":
      Js.Nullable.t(createBranchProtectionRulePayload),
    "createProject": Js.Nullable.t(createProjectPayload),
    "declineTopicSuggestion": Js.Nullable.t(declineTopicSuggestionPayload),
    "deleteBranchProtectionRule":
      Js.Nullable.t(deleteBranchProtectionRulePayload),
    "deleteProject": Js.Nullable.t(deleteProjectPayload),
    "deleteProjectCard": Js.Nullable.t(deleteProjectCardPayload),
    "deleteProjectColumn": Js.Nullable.t(deleteProjectColumnPayload),
    "deletePullRequestReview": Js.Nullable.t(deletePullRequestReviewPayload),
    "dismissPullRequestReview":
      Js.Nullable.t(dismissPullRequestReviewPayload),
    "lockLockable": Js.Nullable.t(lockLockablePayload),
    "moveProjectCard": Js.Nullable.t(moveProjectCardPayload),
    "moveProjectColumn": Js.Nullable.t(moveProjectColumnPayload),
    "removeOutsideCollaborator":
      Js.Nullable.t(removeOutsideCollaboratorPayload),
    "removeReaction": Js.Nullable.t(removeReactionPayload),
    "removeStar": Js.Nullable.t(removeStarPayload),
    "requestReviews": Js.Nullable.t(requestReviewsPayload),
    "submitPullRequestReview": Js.Nullable.t(submitPullRequestReviewPayload),
    "unlockLockable": Js.Nullable.t(unlockLockablePayload),
    "updateBranchProtectionRule":
      Js.Nullable.t(updateBranchProtectionRulePayload),
    "updateProject": Js.Nullable.t(updateProjectPayload),
    "updateProjectCard": Js.Nullable.t(updateProjectCardPayload),
    "updateProjectColumn": Js.Nullable.t(updateProjectColumnPayload),
    "updatePullRequestReview": Js.Nullable.t(updatePullRequestReviewPayload),
    "updatePullRequestReviewComment":
      Js.Nullable.t(updatePullRequestReviewCommentPayload),
    "updateSubscription": Js.Nullable.t(updateSubscriptionPayload),
    "updateTopics": Js.Nullable.t(updateTopicsPayload),
  }
  and headRefDeletedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "headRef": Js.Nullable.t(ref),
    "headRefName": string,
    "id": string,
    "pullRequest": pullRequest,
  }
  and license = {
    .
    "body": string,
    "conditions": array(Js.Nullable.t(licenseRule)),
    "description": Js.Nullable.t(string),
    "featured": bool,
    "hidden": bool,
    "id": string,
    "implementation": Js.Nullable.t(string),
    "key": string,
    "limitations": array(Js.Nullable.t(licenseRule)),
    "name": string,
    "nickname": Js.Nullable.t(string),
    "permissions": array(Js.Nullable.t(licenseRule)),
    "pseudoLicense": bool,
    "spdxId": Js.Nullable.t(string),
    "url": Js.Nullable.t(uRI),
  }
  and branchProtectionRuleConflictEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(branchProtectionRuleConflict),
  }
  and addReactionPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "reaction": reaction,
    "subject": reactable,
  }
  and branchProtectionRuleConflict = {
    .
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "conflictingBranchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "ref": Js.Nullable.t(ref),
  }
  and pullRequestReviewThread = {
    .
    "comments": pullRequestReviewCommentConnection,
    "id": string,
    "pullRequest": pullRequest,
    "repository": repository,
  }
  and repository = {
    .
    "assignableUsers": userConnection,
    "branchProtectionRules": branchProtectionRuleConnection,
    "codeOfConduct": Js.Nullable.t(codeOfConduct),
    "collaborators": Js.Nullable.t(repositoryCollaboratorConnection),
    "commitComments": commitCommentConnection,
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "defaultBranchRef": Js.Nullable.t(ref),
    "deployKeys": deployKeyConnection,
    "deployments": deploymentConnection,
    "description": Js.Nullable.t(string),
    "descriptionHTML": hTML,
    "diskUsage": Js.Nullable.t(int),
    "forkCount": int,
    "forks": repositoryConnection,
    "hasIssuesEnabled": bool,
    "hasWikiEnabled": bool,
    "homepageUrl": Js.Nullable.t(uRI),
    "id": string,
    "isArchived": bool,
    "isFork": bool,
    "isLocked": bool,
    "isMirror": bool,
    "isPrivate": bool,
    "issue": Js.Nullable.t(issue),
    "issueOrPullRequest": Js.Nullable.t(issueOrPullRequest),
    "issues": issueConnection,
    "label": Js.Nullable.t(label),
    "labels": Js.Nullable.t(labelConnection),
    "languages": Js.Nullable.t(languageConnection),
    "licenseInfo": Js.Nullable.t(license),
    "lockReason": Js.Nullable.t(repositoryLockReason),
    "mentionableUsers": userConnection,
    "mergeCommitAllowed": bool,
    "milestone": Js.Nullable.t(milestone),
    "milestones": Js.Nullable.t(milestoneConnection),
    "mirrorUrl": Js.Nullable.t(uRI),
    "name": string,
    "nameWithOwner": string,
    "object": Js.Nullable.t(gitObject),
    "owner": repositoryOwner,
    "parent": Js.Nullable.t(repository),
    "primaryLanguage": Js.Nullable.t(language),
    "project": Js.Nullable.t(project),
    "projects": projectConnection,
    "projectsResourcePath": uRI,
    "projectsUrl": uRI,
    "protectedBranches": protectedBranchConnection,
    "pullRequest": Js.Nullable.t(pullRequest),
    "pullRequests": pullRequestConnection,
    "pushedAt": Js.Nullable.t(dateTime),
    "rebaseMergeAllowed": bool,
    "ref": Js.Nullable.t(ref),
    "refs": Js.Nullable.t(refConnection),
    "release": Js.Nullable.t(release),
    "releases": releaseConnection,
    "repositoryTopics": repositoryTopicConnection,
    "resourcePath": uRI,
    "shortDescriptionHTML": hTML,
    "squashMergeAllowed": bool,
    "sshUrl": gitSSHRemote,
    "stargazers": stargazerConnection,
    "updatedAt": dateTime,
    "url": uRI,
    "viewerCanAdminister": bool,
    "viewerCanCreateProjects": bool,
    "viewerCanSubscribe": bool,
    "viewerCanUpdateTopics": bool,
    "viewerHasStarred": bool,
    "viewerPermission": Js.Nullable.t(repositoryPermission),
    "viewerSubscription": Js.Nullable.t(subscriptionState),
    "watchers": userConnection,
  }
  and updateProjectPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "project": project,
  }
  and repositoryTopicEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(repositoryTopic),
  }
  and milestoneEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(milestone),
  }
  and labelConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(labelEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(label))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and projectColumn = {
    .
    "cards": projectCardConnection,
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "name": string,
    "project": project,
    "purpose": Js.Nullable.t(projectColumnPurpose),
    "resourcePath": uRI,
    "updatedAt": dateTime,
    "url": uRI,
  }
  and repositoryInvitation = {
    .
    "id": string,
    "invitee": user,
    "inviter": user,
    "permission": repositoryPermission,
    "repository": Js.Nullable.t(repositoryInfo),
  }
  and deleteProjectCardPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "column": projectColumn,
    "deletedCardId": string,
  }
  and release = {
    .
    "author": Js.Nullable.t(user),
    "createdAt": dateTime,
    "description": Js.Nullable.t(string),
    "id": string,
    "isDraft": bool,
    "isPrerelease": bool,
    "name": Js.Nullable.t(string),
    "publishedAt": Js.Nullable.t(dateTime),
    "releaseAssets": releaseAssetConnection,
    "resourcePath": uRI,
    "tag": Js.Nullable.t(ref),
    "updatedAt": dateTime,
    "url": uRI,
  }
  and deployedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "deployment": deployment,
    "id": string,
    "pullRequest": pullRequest,
    "ref": Js.Nullable.t(ref),
  }
  and stargazerEdge = {
    .
    "cursor": string,
    "node": user,
    "starredAt": dateTime,
  }
  and pullRequestReviewEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pullRequestReview),
  }
  and projectCardConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(projectCardEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(projectCard))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and updateTopicsPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "invalidTopicNames": Js.Nullable.t(array(string)),
    "repository": repository,
  }
  and deleteBranchProtectionRulePayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
  }
  and unlockLockablePayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "unlockedRecord": Js.Nullable.t(lockable),
  }
  and reviewDismissalAllowanceEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(reviewDismissalAllowance),
  }
  and lockedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "lockReason": Js.Nullable.t(lockReason),
    "lockable": lockable,
  }
  and moveProjectColumnPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "columnEdge": projectColumnEdge,
  }
  and acceptTopicSuggestionPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "topic": topic,
  }
  and pushAllowanceEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pushAllowance),
  }
  and branchProtectionRuleEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(branchProtectionRule),
  }
  and marketplaceListingEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(marketplaceListing),
  }
  and teamMemberConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(teamMemberEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and movedColumnsInProjectEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and blob = {
    .
    "abbreviatedOid": string,
    "byteSize": int,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "id": string,
    "isBinary": bool,
    "isTruncated": bool,
    "oid": gitObjectID,
    "repository": repository,
    "text": Js.Nullable.t(string),
  }
  and createBranchProtectionRulePayload = {
    .
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "clientMutationId": Js.Nullable.t(string),
  }
  and organization = {
    .
    "avatarUrl": uRI,
    "databaseId": Js.Nullable.t(int),
    "description": Js.Nullable.t(string),
    "email": Js.Nullable.t(string),
    "id": string,
    "isVerified": bool,
    "location": Js.Nullable.t(string),
    "login": string,
    "members": userConnection,
    "name": Js.Nullable.t(string),
    "newTeamResourcePath": uRI,
    "newTeamUrl": uRI,
    "organizationBillingEmail": Js.Nullable.t(string),
    "pinnedRepositories": repositoryConnection,
    "project": Js.Nullable.t(project),
    "projects": projectConnection,
    "projectsResourcePath": uRI,
    "projectsUrl": uRI,
    "repositories": repositoryConnection,
    "repository": Js.Nullable.t(repository),
    "requiresTwoFactorAuthentication": Js.Nullable.t(bool),
    "resourcePath": uRI,
    "samlIdentityProvider": Js.Nullable.t(organizationIdentityProvider),
    "team": Js.Nullable.t(team),
    "teams": teamConnection,
    "teamsResourcePath": uRI,
    "teamsUrl": uRI,
    "url": uRI,
    "viewerCanAdminister": bool,
    "viewerCanCreateProjects": bool,
    "viewerCanCreateRepositories": bool,
    "viewerCanCreateTeams": bool,
    "viewerIsAMember": bool,
    "websiteUrl": Js.Nullable.t(uRI),
  }
  and pullRequestReviewComment = {
    .
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "commit": commit,
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "diffHunk": string,
    "draftedAt": dateTime,
    "editor": Js.Nullable.t(actor),
    "id": string,
    "includesCreatedEdit": bool,
    "lastEditedAt": Js.Nullable.t(dateTime),
    "originalCommit": Js.Nullable.t(commit),
    "originalPosition": int,
    "outdated": bool,
    "path": string,
    "position": Js.Nullable.t(int),
    "publishedAt": Js.Nullable.t(dateTime),
    "pullRequest": pullRequest,
    "pullRequestReview": Js.Nullable.t(pullRequestReview),
    "reactionGroups": Js.Nullable.t(array(reactionGroup)),
    "reactions": reactionConnection,
    "replyTo": Js.Nullable.t(pullRequestReviewComment),
    "repository": repository,
    "resourcePath": uRI,
    "state": pullRequestReviewCommentState,
    "updatedAt": dateTime,
    "url": uRI,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanDelete": bool,
    "viewerCanReact": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
  }
  and dismissPullRequestReviewPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and organizationInvitation = {
    .
    "createdAt": dateTime,
    "email": Js.Nullable.t(string),
    "id": string,
    "invitationType": organizationInvitationType,
    "invitee": Js.Nullable.t(user),
    "inviter": user,
    "organization": organization,
    "role": organizationInvitationRole,
  }
  and deploymentStatus = {
    .
    "createdAt": dateTime,
    "creator": Js.Nullable.t(actor),
    "deployment": deployment,
    "description": Js.Nullable.t(string),
    "environmentUrl": Js.Nullable.t(uRI),
    "id": string,
    "logUrl": Js.Nullable.t(uRI),
    "state": deploymentStatusState,
    "updatedAt": dateTime,
  }
  and submitPullRequestReviewPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and appEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(app),
  }
  and updatePullRequestReviewPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and externalIdentity = {
    .
    "guid": string,
    "id": string,
    "organizationInvitation": Js.Nullable.t(organizationInvitation),
    "samlIdentity": Js.Nullable.t(externalIdentitySamlAttributes),
    "scimIdentity": Js.Nullable.t(externalIdentityScimAttributes),
    "user": Js.Nullable.t(user),
  }
  and unlockedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "lockable": lockable,
  }
  and team = {
    .
    "ancestors": teamConnection,
    "avatarUrl": Js.Nullable.t(uRI),
    "childTeams": teamConnection,
    "combinedSlug": string,
    "createdAt": dateTime,
    "description": Js.Nullable.t(string),
    "editTeamResourcePath": uRI,
    "editTeamUrl": uRI,
    "id": string,
    "invitations": Js.Nullable.t(organizationInvitationConnection),
    "members": teamMemberConnection,
    "membersResourcePath": uRI,
    "membersUrl": uRI,
    "name": string,
    "newTeamResourcePath": uRI,
    "newTeamUrl": uRI,
    "organization": organization,
    "parentTeam": Js.Nullable.t(team),
    "privacy": teamPrivacy,
    "repositories": teamRepositoryConnection,
    "repositoriesResourcePath": uRI,
    "repositoriesUrl": uRI,
    "resourcePath": uRI,
    "slug": string,
    "teamsResourcePath": uRI,
    "teamsUrl": uRI,
    "updatedAt": dateTime,
    "url": uRI,
    "viewerCanAdminister": bool,
    "viewerCanSubscribe": bool,
    "viewerSubscription": Js.Nullable.t(subscriptionState),
  }
  and closedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "closable": closable,
    "closer": Js.Nullable.t(closer),
    "createdAt": dateTime,
    "id": string,
    "resourcePath": uRI,
    "url": uRI,
  }
  and pullRequest = {
    .
    "activeLockReason": Js.Nullable.t(lockReason),
    "additions": int,
    "assignees": userConnection,
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "baseRef": Js.Nullable.t(ref),
    "baseRefName": string,
    "baseRefOid": gitObjectID,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "changedFiles": int,
    "closed": bool,
    "closedAt": Js.Nullable.t(dateTime),
    "comments": issueCommentConnection,
    "commits": pullRequestCommitConnection,
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "deletions": int,
    "editor": Js.Nullable.t(actor),
    "headRef": Js.Nullable.t(ref),
    "headRefName": string,
    "headRefOid": gitObjectID,
    "headRepository": Js.Nullable.t(repository),
    "headRepositoryOwner": Js.Nullable.t(repositoryOwner),
    "id": string,
    "includesCreatedEdit": bool,
    "isCrossRepository": bool,
    "labels": Js.Nullable.t(labelConnection),
    "lastEditedAt": Js.Nullable.t(dateTime),
    "locked": bool,
    "maintainerCanModify": bool,
    "mergeCommit": Js.Nullable.t(commit),
    "mergeable": mergeableState,
    "merged": bool,
    "mergedAt": Js.Nullable.t(dateTime),
    "mergedBy": Js.Nullable.t(actor),
    "milestone": Js.Nullable.t(milestone),
    "number": int,
    "participants": userConnection,
    "permalink": uRI,
    "potentialMergeCommit": Js.Nullable.t(commit),
    "projectCards": projectCardConnection,
    "publishedAt": Js.Nullable.t(dateTime),
    "reactionGroups": Js.Nullable.t(array(reactionGroup)),
    "reactions": reactionConnection,
    "repository": repository,
    "resourcePath": uRI,
    "revertResourcePath": uRI,
    "revertUrl": uRI,
    "reviewRequests": Js.Nullable.t(reviewRequestConnection),
    "reviews": Js.Nullable.t(pullRequestReviewConnection),
    "state": pullRequestState,
    "suggestedReviewers": array(Js.Nullable.t(suggestedReviewer)),
    "timeline": pullRequestTimelineConnection,
    "title": string,
    "updatedAt": dateTime,
    "url": uRI,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanApplySuggestion": bool,
    "viewerCanReact": bool,
    "viewerCanSubscribe": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
    "viewerSubscription": Js.Nullable.t(subscriptionState),
  }
  and removeOutsideCollaboratorPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "removedUser": user,
  }
  and rateLimit = {
    .
    "cost": int,
    "limit": int,
    "nodeCount": int,
    "remaining": int,
    "resetAt": dateTime,
  }
  and protectedBranchEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(protectedBranch),
  }
  and commitComment = {
    .
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "commit": Js.Nullable.t(commit),
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "editor": Js.Nullable.t(actor),
    "id": string,
    "includesCreatedEdit": bool,
    "lastEditedAt": Js.Nullable.t(dateTime),
    "path": Js.Nullable.t(string),
    "position": Js.Nullable.t(int),
    "publishedAt": Js.Nullable.t(dateTime),
    "reactionGroups": Js.Nullable.t(array(reactionGroup)),
    "reactions": reactionConnection,
    "repository": repository,
    "resourcePath": uRI,
    "updatedAt": dateTime,
    "url": uRI,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanDelete": bool,
    "viewerCanReact": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
  }
  and deployKeyEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(deployKey),
  }
  and deploymentEnvironmentChangedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "deploymentStatus": deploymentStatus,
    "id": string,
    "pullRequest": pullRequest,
  }
  and protectedBranch = {
    .
    "creator": Js.Nullable.t(actor),
    "hasDismissableStaleReviews": bool,
    "hasRequiredReviews": bool,
    "hasRequiredStatusChecks": bool,
    "hasRestrictedPushes": bool,
    "hasRestrictedReviewDismissals": bool,
    "hasStrictRequiredStatusChecks": bool,
    "id": string,
    "isAdminEnforced": bool,
    "name": string,
    "pushAllowances": pushAllowanceConnection,
    "repository": repository,
    "requiredStatusCheckContexts":
      Js.Nullable.t(array(Js.Nullable.t(string))),
    "reviewDismissalAllowances": reviewDismissalAllowanceConnection,
  }
  and mergedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "commit": Js.Nullable.t(commit),
    "createdAt": dateTime,
    "id": string,
    "mergeRef": Js.Nullable.t(ref),
    "mergeRefName": string,
    "pullRequest": pullRequest,
    "resourcePath": uRI,
    "url": uRI,
  }
  and reactionGroup = {
    .
    "content": reactionContent,
    "createdAt": Js.Nullable.t(dateTime),
    "subject": reactable,
    "users": reactingUserConnection,
    "viewerHasReacted": bool,
  }
  and followerConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(userEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userContentEditConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(userContentEditEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(userContentEdit))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and project = {
    .
    "body": Js.Nullable.t(string),
    "bodyHTML": hTML,
    "closed": bool,
    "closedAt": Js.Nullable.t(dateTime),
    "columns": projectColumnConnection,
    "createdAt": dateTime,
    "creator": Js.Nullable.t(actor),
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "name": string,
    "number": int,
    "owner": projectOwner,
    "pendingCards": projectCardConnection,
    "resourcePath": uRI,
    "state": projectState,
    "updatedAt": dateTime,
    "url": uRI,
    "viewerCanUpdate": bool,
  }
  and commit = {
    .
    "abbreviatedOid": string,
    "additions": int,
    "author": Js.Nullable.t(gitActor),
    "authoredByCommitter": bool,
    "authoredDate": dateTime,
    "blame": blame,
    "changedFiles": int,
    "comments": commitCommentConnection,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "committedDate": dateTime,
    "committedViaWeb": bool,
    "committer": Js.Nullable.t(gitActor),
    "deletions": int,
    "history": commitHistoryConnection,
    "id": string,
    "message": string,
    "messageBody": string,
    "messageBodyHTML": hTML,
    "messageHeadline": string,
    "messageHeadlineHTML": hTML,
    "oid": gitObjectID,
    "parents": commitConnection,
    "pushedDate": Js.Nullable.t(dateTime),
    "repository": repository,
    "resourcePath": uRI,
    "signature": Js.Nullable.t(gitSignature),
    "status": Js.Nullable.t(status),
    "tarballUrl": uRI,
    "tree": tree,
    "treeResourcePath": uRI,
    "treeUrl": uRI,
    "url": uRI,
    "viewerCanSubscribe": bool,
    "viewerSubscription": Js.Nullable.t(subscriptionState),
    "zipballUrl": uRI,
  }
  and marketplaceListingConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(marketplaceListingEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(marketplaceListing))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and issueTimelineConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(issueTimelineItemEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(issueTimelineItem))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and repositoryTopic = {
    .
    "id": string,
    "resourcePath": uRI,
    "topic": topic,
    "url": uRI,
  }
  and reactionConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(reactionEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(reaction))),
    "pageInfo": pageInfo,
    "totalCount": int,
    "viewerHasReacted": bool,
  }
  and issue = {
    .
    "activeLockReason": Js.Nullable.t(lockReason),
    "assignees": userConnection,
    "author": Js.Nullable.t(actor),
    "authorAssociation": commentAuthorAssociation,
    "body": string,
    "bodyHTML": hTML,
    "bodyText": string,
    "closed": bool,
    "closedAt": Js.Nullable.t(dateTime),
    "comments": issueCommentConnection,
    "createdAt": dateTime,
    "createdViaEmail": bool,
    "databaseId": Js.Nullable.t(int),
    "editor": Js.Nullable.t(actor),
    "id": string,
    "includesCreatedEdit": bool,
    "labels": Js.Nullable.t(labelConnection),
    "lastEditedAt": Js.Nullable.t(dateTime),
    "locked": bool,
    "milestone": Js.Nullable.t(milestone),
    "number": int,
    "participants": userConnection,
    "projectCards": projectCardConnection,
    "publishedAt": Js.Nullable.t(dateTime),
    "reactionGroups": Js.Nullable.t(array(reactionGroup)),
    "reactions": reactionConnection,
    "repository": repository,
    "resourcePath": uRI,
    "state": issueState,
    "timeline": issueTimelineConnection,
    "title": string,
    "updatedAt": dateTime,
    "url": uRI,
    "userContentEdits": Js.Nullable.t(userContentEditConnection),
    "viewerCanReact": bool,
    "viewerCanSubscribe": bool,
    "viewerCanUpdate": bool,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
    "viewerDidAuthor": bool,
    "viewerSubscription": Js.Nullable.t(subscriptionState),
  }
  and releaseAssetEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(releaseAsset),
  }
  and addedToProjectEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and organizationEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(organization),
  }
  and reviewRequestedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
    "requestedReviewer": Js.Nullable.t(requestedReviewer),
  }
  and projectCardEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(projectCard),
  }
  and releaseEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(release),
  }
  and repositoryConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(repositoryEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(repository))),
    "pageInfo": pageInfo,
    "totalCount": int,
    "totalDiskUsage": int,
  }
  and licenseRule = {
    .
    "description": string,
    "key": string,
    "label": string,
  }
  and gistCommentConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(gistCommentEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(gistComment))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(user),
  }
  and query = {
    .
    "codeOfConduct": Js.Nullable.t(codeOfConduct),
    "codesOfConduct": Js.Nullable.t(array(Js.Nullable.t(codeOfConduct))),
    "license": Js.Nullable.t(license),
    "licenses": array(Js.Nullable.t(license)),
    "marketplaceCategories": array(marketplaceCategory),
    "marketplaceCategory": Js.Nullable.t(marketplaceCategory),
    "marketplaceListing": Js.Nullable.t(marketplaceListing),
    "marketplaceListings": marketplaceListingConnection,
    "meta": gitHubMetadata,
    "node": Js.Nullable.t(node),
    "nodes": array(Js.Nullable.t(node)),
    "organization": Js.Nullable.t(organization),
    "rateLimit": Js.Nullable.t(rateLimit),
    "relay": query,
    "repository": Js.Nullable.t(repository),
    "repositoryOwner": Js.Nullable.t(repositoryOwner),
    "resource": Js.Nullable.t(uniformResourceLocatable),
    "search": searchResultItemConnection,
    "topic": Js.Nullable.t(topic),
    "user": Js.Nullable.t(user),
    "viewer": user,
  }
  and deploymentStatusConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(deploymentStatusEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(deploymentStatus))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and starredRepositoryEdge = {
    .
    "cursor": string,
    "node": repository,
    "starredAt": dateTime,
  }
  and unlabeledEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "label": label,
    "labelable": labelable,
  }
  and reviewRequestEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(reviewRequest),
  }
  and label = {
    .
    "color": string,
    "createdAt": Js.Nullable.t(dateTime),
    "description": Js.Nullable.t(string),
    "id": string,
    "isDefault": bool,
    "issues": issueConnection,
    "name": string,
    "pullRequests": pullRequestConnection,
    "repository": repository,
    "resourcePath": uRI,
    "updatedAt": Js.Nullable.t(dateTime),
    "url": uRI,
  }
  and organizationInvitationConnection = {
    .
    "edges":
      Js.Nullable.t(array(Js.Nullable.t(organizationInvitationEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(organizationInvitation))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and topic = {
    .
    "id": string,
    "name": string,
    "relatedTopics": array(topic),
    "stargazers": stargazerConnection,
    "viewerHasStarred": bool,
  }
  and issueTimelineItemsEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(issueTimelineItems),
  }
  and commentDeletedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and teamConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(teamEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(team))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and updateSubscriptionPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "subscribable": subscribable,
  }
  and starredRepositoryConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(starredRepositoryEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(repository))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and addCommentPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "commentEdge": issueCommentEdge,
    "subject": node,
    "timelineEdge": issueTimelineItemEdge,
  }
  and gitHubMetadata = {
    .
    "gitHubServicesSha": gitObjectID,
    "gitIpAddresses": Js.Nullable.t(array(string)),
    "hookIpAddresses": Js.Nullable.t(array(string)),
    "importerIpAddresses": Js.Nullable.t(array(string)),
    "isPasswordAuthenticationVerifiable": bool,
    "pagesIpAddresses": Js.Nullable.t(array(string)),
  }
  and textMatch = {
    .
    "fragment": string,
    "highlights": array(textMatchHighlight),
    "property": string,
  }
  and pullRequestTimelineItemsEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pullRequestTimelineItems),
  }
  and moveProjectCardPayload = {
    .
    "cardEdge": projectCardEdge,
    "clientMutationId": Js.Nullable.t(string),
  }
  and gistConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(gistEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(gist))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and deploymentConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(deploymentEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(deployment))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and externalIdentityScimAttributes = {. "username": Js.Nullable.t(string)}
  and repositoryCollaboratorConnection = {
    .
    "edges":
      Js.Nullable.t(array(Js.Nullable.t(repositoryCollaboratorEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(user))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and lockLockablePayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "lockedRecord": Js.Nullable.t(lockable),
  }
  and updatePullRequestReviewCommentPayload = {
    .
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReviewComment": pullRequestReviewComment,
  }
  and smimeSignature = {
    .
    "email": string,
    "isValid": bool,
    "payload": string,
    "signature": string,
    "signer": Js.Nullable.t(user),
    "state": gitSignatureState,
    "wasSignedByGitHub": bool,
  }
  and repositoryTopicConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(repositoryTopicEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(repositoryTopic))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and deployKey = {
    .
    "createdAt": dateTime,
    "id": string,
    "key": string,
    "readOnly": bool,
    "title": string,
    "verified": bool,
  }
  and milestone = {
    .
    "closed": bool,
    "closedAt": Js.Nullable.t(dateTime),
    "createdAt": dateTime,
    "creator": Js.Nullable.t(actor),
    "description": Js.Nullable.t(string),
    "dueOn": Js.Nullable.t(dateTime),
    "id": string,
    "issues": issueConnection,
    "number": int,
    "pullRequests": pullRequestConnection,
    "repository": repository,
    "resourcePath": uRI,
    "state": milestoneState,
    "title": string,
    "updatedAt": dateTime,
    "url": uRI,
  }
  and externalIdentitySamlAttributes = {. "nameId": Js.Nullable.t(string)}
  and subscribedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "subscribable": subscribable,
  }
  and gistCommentEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(gistComment),
  }
  and pullRequestCommitConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(pullRequestCommitEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(pullRequestCommit))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and issueConnection = {
    .
    "edges": Js.Nullable.t(array(Js.Nullable.t(issueEdge))),
    "nodes": Js.Nullable.t(array(Js.Nullable.t(issue))),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and unknownSignature = {
    .
    "email": string,
    "isValid": bool,
    "payload": string,
    "signature": string,
    "signer": Js.Nullable.t(user),
    "state": gitSignatureState,
    "wasSignedByGitHub": bool,
  }
  and pullRequestReviewCommentEdge = {
    .
    "cursor": string,
    "node": Js.Nullable.t(pullRequestReviewComment),
  }
  and reviewDismissedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "message": string,
    "messageHtml": hTML,
    "previousReviewState": pullRequestReviewState,
    "pullRequest": pullRequest,
    "pullRequestCommit": Js.Nullable.t(pullRequestCommit),
    "resourcePath": uRI,
    "review": Js.Nullable.t(pullRequestReview),
    "url": uRI,
  }
  and reopenedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "closable": closable,
    "createdAt": dateTime,
    "id": string,
  }
  and mentionedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and referencedEvent = {
    .
    "actor": Js.Nullable.t(actor),
    "commit": Js.Nullable.t(commit),
    "commitRepository": repository,
    "createdAt": dateTime,
    "id": string,
    "isCrossRepository": bool,
    "isDirectReference": bool,
    "subject": referencedSubject,
  };
  external issueToMilestoneItem: issue => milestoneItem = "%identity";
  external pullRequestToMilestoneItem: pullRequest => milestoneItem =
    "%identity";
  external teamToReviewDismissalAllowanceActor:
    team => reviewDismissalAllowanceActor =
    "%identity";
  external userToReviewDismissalAllowanceActor:
    user => reviewDismissalAllowanceActor =
    "%identity";
  external teamToRequestedReviewer: team => requestedReviewer = "%identity";
  external userToRequestedReviewer: user => requestedReviewer = "%identity";
  external issueToProjectCardItem: issue => projectCardItem = "%identity";
  external pullRequestToProjectCardItem: pullRequest => projectCardItem =
    "%identity";
  external issueToReferencedSubject: issue => referencedSubject = "%identity";
  external pullRequestToReferencedSubject: pullRequest => referencedSubject =
    "%identity";
  external addedToProjectEventToIssueTimelineItems:
    addedToProjectEvent => issueTimelineItems =
    "%identity";
  external assignedEventToIssueTimelineItems:
    assignedEvent => issueTimelineItems =
    "%identity";
  external closedEventToIssueTimelineItems: closedEvent => issueTimelineItems =
    "%identity";
  external commentDeletedEventToIssueTimelineItems:
    commentDeletedEvent => issueTimelineItems =
    "%identity";
  external convertedNoteToIssueEventToIssueTimelineItems:
    convertedNoteToIssueEvent => issueTimelineItems =
    "%identity";
  external crossReferencedEventToIssueTimelineItems:
    crossReferencedEvent => issueTimelineItems =
    "%identity";
  external demilestonedEventToIssueTimelineItems:
    demilestonedEvent => issueTimelineItems =
    "%identity";
  external issueCommentToIssueTimelineItems: issueComment => issueTimelineItems =
    "%identity";
  external labeledEventToIssueTimelineItems: labeledEvent => issueTimelineItems =
    "%identity";
  external lockedEventToIssueTimelineItems: lockedEvent => issueTimelineItems =
    "%identity";
  external mentionedEventToIssueTimelineItems:
    mentionedEvent => issueTimelineItems =
    "%identity";
  external milestonedEventToIssueTimelineItems:
    milestonedEvent => issueTimelineItems =
    "%identity";
  external movedColumnsInProjectEventToIssueTimelineItems:
    movedColumnsInProjectEvent => issueTimelineItems =
    "%identity";
  external referencedEventToIssueTimelineItems:
    referencedEvent => issueTimelineItems =
    "%identity";
  external removedFromProjectEventToIssueTimelineItems:
    removedFromProjectEvent => issueTimelineItems =
    "%identity";
  external renamedTitleEventToIssueTimelineItems:
    renamedTitleEvent => issueTimelineItems =
    "%identity";
  external reopenedEventToIssueTimelineItems:
    reopenedEvent => issueTimelineItems =
    "%identity";
  external subscribedEventToIssueTimelineItems:
    subscribedEvent => issueTimelineItems =
    "%identity";
  external unassignedEventToIssueTimelineItems:
    unassignedEvent => issueTimelineItems =
    "%identity";
  external unlabeledEventToIssueTimelineItems:
    unlabeledEvent => issueTimelineItems =
    "%identity";
  external unlockedEventToIssueTimelineItems:
    unlockedEvent => issueTimelineItems =
    "%identity";
  external unsubscribedEventToIssueTimelineItems:
    unsubscribedEvent => issueTimelineItems =
    "%identity";
  external assignedEventToPullRequestTimelineItem:
    assignedEvent => pullRequestTimelineItem =
    "%identity";
  external baseRefForcePushedEventToPullRequestTimelineItem:
    baseRefForcePushedEvent => pullRequestTimelineItem =
    "%identity";
  external closedEventToPullRequestTimelineItem:
    closedEvent => pullRequestTimelineItem =
    "%identity";
  external commitToPullRequestTimelineItem: commit => pullRequestTimelineItem =
    "%identity";
  external commitCommentThreadToPullRequestTimelineItem:
    commitCommentThread => pullRequestTimelineItem =
    "%identity";
  external crossReferencedEventToPullRequestTimelineItem:
    crossReferencedEvent => pullRequestTimelineItem =
    "%identity";
  external demilestonedEventToPullRequestTimelineItem:
    demilestonedEvent => pullRequestTimelineItem =
    "%identity";
  external deployedEventToPullRequestTimelineItem:
    deployedEvent => pullRequestTimelineItem =
    "%identity";
  external deploymentEnvironmentChangedEventToPullRequestTimelineItem:
    deploymentEnvironmentChangedEvent => pullRequestTimelineItem =
    "%identity";
  external headRefDeletedEventToPullRequestTimelineItem:
    headRefDeletedEvent => pullRequestTimelineItem =
    "%identity";
  external headRefForcePushedEventToPullRequestTimelineItem:
    headRefForcePushedEvent => pullRequestTimelineItem =
    "%identity";
  external headRefRestoredEventToPullRequestTimelineItem:
    headRefRestoredEvent => pullRequestTimelineItem =
    "%identity";
  external issueCommentToPullRequestTimelineItem:
    issueComment => pullRequestTimelineItem =
    "%identity";
  external labeledEventToPullRequestTimelineItem:
    labeledEvent => pullRequestTimelineItem =
    "%identity";
  external lockedEventToPullRequestTimelineItem:
    lockedEvent => pullRequestTimelineItem =
    "%identity";
  external mergedEventToPullRequestTimelineItem:
    mergedEvent => pullRequestTimelineItem =
    "%identity";
  external milestonedEventToPullRequestTimelineItem:
    milestonedEvent => pullRequestTimelineItem =
    "%identity";
  external pullRequestReviewToPullRequestTimelineItem:
    pullRequestReview => pullRequestTimelineItem =
    "%identity";
  external pullRequestReviewCommentToPullRequestTimelineItem:
    pullRequestReviewComment => pullRequestTimelineItem =
    "%identity";
  external pullRequestReviewThreadToPullRequestTimelineItem:
    pullRequestReviewThread => pullRequestTimelineItem =
    "%identity";
  external referencedEventToPullRequestTimelineItem:
    referencedEvent => pullRequestTimelineItem =
    "%identity";
  external renamedTitleEventToPullRequestTimelineItem:
    renamedTitleEvent => pullRequestTimelineItem =
    "%identity";
  external reopenedEventToPullRequestTimelineItem:
    reopenedEvent => pullRequestTimelineItem =
    "%identity";
  external reviewDismissedEventToPullRequestTimelineItem:
    reviewDismissedEvent => pullRequestTimelineItem =
    "%identity";
  external reviewRequestRemovedEventToPullRequestTimelineItem:
    reviewRequestRemovedEvent => pullRequestTimelineItem =
    "%identity";
  external reviewRequestedEventToPullRequestTimelineItem:
    reviewRequestedEvent => pullRequestTimelineItem =
    "%identity";
  external subscribedEventToPullRequestTimelineItem:
    subscribedEvent => pullRequestTimelineItem =
    "%identity";
  external unassignedEventToPullRequestTimelineItem:
    unassignedEvent => pullRequestTimelineItem =
    "%identity";
  external unlabeledEventToPullRequestTimelineItem:
    unlabeledEvent => pullRequestTimelineItem =
    "%identity";
  external unlockedEventToPullRequestTimelineItem:
    unlockedEvent => pullRequestTimelineItem =
    "%identity";
  external unsubscribedEventToPullRequestTimelineItem:
    unsubscribedEvent => pullRequestTimelineItem =
    "%identity";
  external assignedEventToIssueTimelineItem: assignedEvent => issueTimelineItem =
    "%identity";
  external closedEventToIssueTimelineItem: closedEvent => issueTimelineItem =
    "%identity";
  external commitToIssueTimelineItem: commit => issueTimelineItem =
    "%identity";
  external crossReferencedEventToIssueTimelineItem:
    crossReferencedEvent => issueTimelineItem =
    "%identity";
  external demilestonedEventToIssueTimelineItem:
    demilestonedEvent => issueTimelineItem =
    "%identity";
  external issueCommentToIssueTimelineItem: issueComment => issueTimelineItem =
    "%identity";
  external labeledEventToIssueTimelineItem: labeledEvent => issueTimelineItem =
    "%identity";
  external lockedEventToIssueTimelineItem: lockedEvent => issueTimelineItem =
    "%identity";
  external milestonedEventToIssueTimelineItem:
    milestonedEvent => issueTimelineItem =
    "%identity";
  external referencedEventToIssueTimelineItem:
    referencedEvent => issueTimelineItem =
    "%identity";
  external renamedTitleEventToIssueTimelineItem:
    renamedTitleEvent => issueTimelineItem =
    "%identity";
  external reopenedEventToIssueTimelineItem: reopenedEvent => issueTimelineItem =
    "%identity";
  external subscribedEventToIssueTimelineItem:
    subscribedEvent => issueTimelineItem =
    "%identity";
  external unassignedEventToIssueTimelineItem:
    unassignedEvent => issueTimelineItem =
    "%identity";
  external unlabeledEventToIssueTimelineItem:
    unlabeledEvent => issueTimelineItem =
    "%identity";
  external unlockedEventToIssueTimelineItem: unlockedEvent => issueTimelineItem =
    "%identity";
  external unsubscribedEventToIssueTimelineItem:
    unsubscribedEvent => issueTimelineItem =
    "%identity";
  external issueToRenamedTitleSubject: issue => renamedTitleSubject =
    "%identity";
  external pullRequestToRenamedTitleSubject: pullRequest => renamedTitleSubject =
    "%identity";
  external commitToCloser: commit => closer = "%identity";
  external pullRequestToCloser: pullRequest => closer = "%identity";
  external teamToPushAllowanceActor: team => pushAllowanceActor = "%identity";
  external userToPushAllowanceActor: user => pushAllowanceActor = "%identity";
  external issueToIssueOrPullRequest: issue => issueOrPullRequest =
    "%identity";
  external pullRequestToIssueOrPullRequest: pullRequest => issueOrPullRequest =
    "%identity";
  external addedToProjectEventToPullRequestTimelineItems:
    addedToProjectEvent => pullRequestTimelineItems =
    "%identity";
  external assignedEventToPullRequestTimelineItems:
    assignedEvent => pullRequestTimelineItems =
    "%identity";
  external baseRefChangedEventToPullRequestTimelineItems:
    baseRefChangedEvent => pullRequestTimelineItems =
    "%identity";
  external baseRefForcePushedEventToPullRequestTimelineItems:
    baseRefForcePushedEvent => pullRequestTimelineItems =
    "%identity";
  external closedEventToPullRequestTimelineItems:
    closedEvent => pullRequestTimelineItems =
    "%identity";
  external commentDeletedEventToPullRequestTimelineItems:
    commentDeletedEvent => pullRequestTimelineItems =
    "%identity";
  external convertedNoteToIssueEventToPullRequestTimelineItems:
    convertedNoteToIssueEvent => pullRequestTimelineItems =
    "%identity";
  external crossReferencedEventToPullRequestTimelineItems:
    crossReferencedEvent => pullRequestTimelineItems =
    "%identity";
  external demilestonedEventToPullRequestTimelineItems:
    demilestonedEvent => pullRequestTimelineItems =
    "%identity";
  external deployedEventToPullRequestTimelineItems:
    deployedEvent => pullRequestTimelineItems =
    "%identity";
  external deploymentEnvironmentChangedEventToPullRequestTimelineItems:
    deploymentEnvironmentChangedEvent => pullRequestTimelineItems =
    "%identity";
  external headRefDeletedEventToPullRequestTimelineItems:
    headRefDeletedEvent => pullRequestTimelineItems =
    "%identity";
  external headRefForcePushedEventToPullRequestTimelineItems:
    headRefForcePushedEvent => pullRequestTimelineItems =
    "%identity";
  external headRefRestoredEventToPullRequestTimelineItems:
    headRefRestoredEvent => pullRequestTimelineItems =
    "%identity";
  external issueCommentToPullRequestTimelineItems:
    issueComment => pullRequestTimelineItems =
    "%identity";
  external labeledEventToPullRequestTimelineItems:
    labeledEvent => pullRequestTimelineItems =
    "%identity";
  external lockedEventToPullRequestTimelineItems:
    lockedEvent => pullRequestTimelineItems =
    "%identity";
  external mentionedEventToPullRequestTimelineItems:
    mentionedEvent => pullRequestTimelineItems =
    "%identity";
  external mergedEventToPullRequestTimelineItems:
    mergedEvent => pullRequestTimelineItems =
    "%identity";
  external milestonedEventToPullRequestTimelineItems:
    milestonedEvent => pullRequestTimelineItems =
    "%identity";
  external movedColumnsInProjectEventToPullRequestTimelineItems:
    movedColumnsInProjectEvent => pullRequestTimelineItems =
    "%identity";
  external pullRequestCommitToPullRequestTimelineItems:
    pullRequestCommit => pullRequestTimelineItems =
    "%identity";
  external pullRequestReviewToPullRequestTimelineItems:
    pullRequestReview => pullRequestTimelineItems =
    "%identity";
  external pullRequestReviewThreadToPullRequestTimelineItems:
    pullRequestReviewThread => pullRequestTimelineItems =
    "%identity";
  external referencedEventToPullRequestTimelineItems:
    referencedEvent => pullRequestTimelineItems =
    "%identity";
  external removedFromProjectEventToPullRequestTimelineItems:
    removedFromProjectEvent => pullRequestTimelineItems =
    "%identity";
  external renamedTitleEventToPullRequestTimelineItems:
    renamedTitleEvent => pullRequestTimelineItems =
    "%identity";
  external reopenedEventToPullRequestTimelineItems:
    reopenedEvent => pullRequestTimelineItems =
    "%identity";
  external reviewDismissedEventToPullRequestTimelineItems:
    reviewDismissedEvent => pullRequestTimelineItems =
    "%identity";
  external reviewRequestRemovedEventToPullRequestTimelineItems:
    reviewRequestRemovedEvent => pullRequestTimelineItems =
    "%identity";
  external reviewRequestedEventToPullRequestTimelineItems:
    reviewRequestedEvent => pullRequestTimelineItems =
    "%identity";
  external subscribedEventToPullRequestTimelineItems:
    subscribedEvent => pullRequestTimelineItems =
    "%identity";
  external unassignedEventToPullRequestTimelineItems:
    unassignedEvent => pullRequestTimelineItems =
    "%identity";
  external unlabeledEventToPullRequestTimelineItems:
    unlabeledEvent => pullRequestTimelineItems =
    "%identity";
  external unlockedEventToPullRequestTimelineItems:
    unlockedEvent => pullRequestTimelineItems =
    "%identity";
  external unsubscribedEventToPullRequestTimelineItems:
    unsubscribedEvent => pullRequestTimelineItems =
    "%identity";
  external organizationToCollectionItemContent:
    organization => collectionItemContent =
    "%identity";
  external repositoryToCollectionItemContent:
    repository => collectionItemContent =
    "%identity";
  external userToCollectionItemContent: user => collectionItemContent =
    "%identity";
  external issueToSearchResultItem: issue => searchResultItem = "%identity";
  external marketplaceListingToSearchResultItem:
    marketplaceListing => searchResultItem =
    "%identity";
  external organizationToSearchResultItem: organization => searchResultItem =
    "%identity";
  external pullRequestToSearchResultItem: pullRequest => searchResultItem =
    "%identity";
  external repositoryToSearchResultItem: repository => searchResultItem =
    "%identity";
  external userToSearchResultItem: user => searchResultItem = "%identity";
  module Query = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      codeOfConduct:
        rootResolver(
          {. "key": string},
          codeOfConduct,
          Js.Nullable.t(codeOfConduct),
        ),
      [@bs.optional]
      codesOfConduct:
        rootResolver(
          unit,
          codeOfConduct,
          Js.Nullable.t(array(Js.Nullable.t(codeOfConduct))),
        ),
      [@bs.optional]
      license:
        rootResolver({. "key": string}, license, Js.Nullable.t(license)),
      [@bs.optional]
      licenses: rootResolver(unit, license, array(Js.Nullable.t(license))),
      [@bs.optional]
      marketplaceCategories:
        rootResolver(
          {
            .
            "excludeEmpty": Js.Nullable.t(bool),
            "excludeSubcategories": Js.Nullable.t(bool),
            "includeCategories": Js.Nullable.t(array(string)),
          },
          marketplaceCategory,
          array(marketplaceCategory),
        ),
      [@bs.optional]
      marketplaceCategory:
        rootResolver(
          {
            .
            "slug": string,
            "useTopicAliases": Js.Nullable.t(bool),
          },
          marketplaceCategory,
          Js.Nullable.t(marketplaceCategory),
        ),
      [@bs.optional]
      marketplaceListing:
        rootResolver(
          {. "slug": string},
          marketplaceListing,
          Js.Nullable.t(marketplaceListing),
        ),
      [@bs.optional]
      marketplaceListings:
        rootResolver(
          {
            .
            "adminId": Js.Nullable.t(string),
            "after": Js.Nullable.t(string),
            "allStates": Js.Nullable.t(bool),
            "before": Js.Nullable.t(string),
            "categorySlug": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "organizationId": Js.Nullable.t(string),
            "primaryCategoryOnly": Js.Nullable.t(bool),
            "slugs": Js.Nullable.t(array(Js.Nullable.t(string))),
            "useTopicAliases": Js.Nullable.t(bool),
            "viewerCanAdmin": Js.Nullable.t(bool),
            "withFreeTrialsOnly": Js.Nullable.t(bool),
          },
          marketplaceListingConnection,
          marketplaceListingConnection,
        ),
      [@bs.optional]
      meta: rootResolver(unit, gitHubMetadata, gitHubMetadata),
      [@bs.optional]
      node: rootResolver({. "id": string}, node, Js.Nullable.t(node)),
      [@bs.optional]
      nodes:
        rootResolver(
          {. "ids": array(string)},
          node,
          array(Js.Nullable.t(node)),
        ),
      [@bs.optional]
      organization:
        rootResolver(
          {. "login": string},
          organization,
          Js.Nullable.t(organization),
        ),
      [@bs.optional]
      rateLimit:
        rootResolver(
          {. "dryRun": Js.Nullable.t(bool)},
          rateLimit,
          Js.Nullable.t(rateLimit),
        ),
      [@bs.optional]
      relay: rootResolver(unit, query, query),
      [@bs.optional]
      repository:
        rootResolver(
          {
            .
            "name": string,
            "owner": string,
          },
          repository,
          Js.Nullable.t(repository),
        ),
      [@bs.optional]
      repositoryOwner:
        rootResolver(
          {. "login": string},
          repositoryOwner,
          Js.Nullable.t(repositoryOwner),
        ),
      [@bs.optional]
      resource:
        rootResolver(
          {. "url": uRI},
          uniformResourceLocatable,
          Js.Nullable.t(uniformResourceLocatable),
        ),
      [@bs.optional]
      search:
        rootResolver(
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "query": string,
            "type": abs_searchType,
          },
          searchResultItemConnection,
          searchResultItemConnection,
        ),
      [@bs.optional]
      topic: rootResolver({. "name": string}, topic, Js.Nullable.t(topic)),
      [@bs.optional]
      user: rootResolver({. "login": string}, user, Js.Nullable.t(user)),
      [@bs.optional]
      viewer: rootResolver(unit, user, user),
    };
  };
  module Mutation = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      acceptTopicSuggestion:
        rootResolver(
          {. "input": acceptTopicSuggestionInput},
          acceptTopicSuggestionPayload,
          Js.Nullable.t(acceptTopicSuggestionPayload),
        ),
      [@bs.optional]
      addComment:
        rootResolver(
          {. "input": addCommentInput},
          addCommentPayload,
          Js.Nullable.t(addCommentPayload),
        ),
      [@bs.optional]
      addProjectCard:
        rootResolver(
          {. "input": addProjectCardInput},
          addProjectCardPayload,
          Js.Nullable.t(addProjectCardPayload),
        ),
      [@bs.optional]
      addProjectColumn:
        rootResolver(
          {. "input": addProjectColumnInput},
          addProjectColumnPayload,
          Js.Nullable.t(addProjectColumnPayload),
        ),
      [@bs.optional]
      addPullRequestReview:
        rootResolver(
          {. "input": addPullRequestReviewInput},
          addPullRequestReviewPayload,
          Js.Nullable.t(addPullRequestReviewPayload),
        ),
      [@bs.optional]
      addPullRequestReviewComment:
        rootResolver(
          {. "input": addPullRequestReviewCommentInput},
          addPullRequestReviewCommentPayload,
          Js.Nullable.t(addPullRequestReviewCommentPayload),
        ),
      [@bs.optional]
      addReaction:
        rootResolver(
          {. "input": addReactionInput},
          addReactionPayload,
          Js.Nullable.t(addReactionPayload),
        ),
      [@bs.optional]
      addStar:
        rootResolver(
          {. "input": addStarInput},
          addStarPayload,
          Js.Nullable.t(addStarPayload),
        ),
      [@bs.optional]
      createBranchProtectionRule:
        rootResolver(
          {. "input": createBranchProtectionRuleInput},
          createBranchProtectionRulePayload,
          Js.Nullable.t(createBranchProtectionRulePayload),
        ),
      [@bs.optional]
      createProject:
        rootResolver(
          {. "input": createProjectInput},
          createProjectPayload,
          Js.Nullable.t(createProjectPayload),
        ),
      [@bs.optional]
      declineTopicSuggestion:
        rootResolver(
          {. "input": declineTopicSuggestionInput},
          declineTopicSuggestionPayload,
          Js.Nullable.t(declineTopicSuggestionPayload),
        ),
      [@bs.optional]
      deleteBranchProtectionRule:
        rootResolver(
          {. "input": deleteBranchProtectionRuleInput},
          deleteBranchProtectionRulePayload,
          Js.Nullable.t(deleteBranchProtectionRulePayload),
        ),
      [@bs.optional]
      deleteProject:
        rootResolver(
          {. "input": deleteProjectInput},
          deleteProjectPayload,
          Js.Nullable.t(deleteProjectPayload),
        ),
      [@bs.optional]
      deleteProjectCard:
        rootResolver(
          {. "input": deleteProjectCardInput},
          deleteProjectCardPayload,
          Js.Nullable.t(deleteProjectCardPayload),
        ),
      [@bs.optional]
      deleteProjectColumn:
        rootResolver(
          {. "input": deleteProjectColumnInput},
          deleteProjectColumnPayload,
          Js.Nullable.t(deleteProjectColumnPayload),
        ),
      [@bs.optional]
      deletePullRequestReview:
        rootResolver(
          {. "input": deletePullRequestReviewInput},
          deletePullRequestReviewPayload,
          Js.Nullable.t(deletePullRequestReviewPayload),
        ),
      [@bs.optional]
      dismissPullRequestReview:
        rootResolver(
          {. "input": dismissPullRequestReviewInput},
          dismissPullRequestReviewPayload,
          Js.Nullable.t(dismissPullRequestReviewPayload),
        ),
      [@bs.optional]
      lockLockable:
        rootResolver(
          {. "input": lockLockableInput},
          lockLockablePayload,
          Js.Nullable.t(lockLockablePayload),
        ),
      [@bs.optional]
      moveProjectCard:
        rootResolver(
          {. "input": moveProjectCardInput},
          moveProjectCardPayload,
          Js.Nullable.t(moveProjectCardPayload),
        ),
      [@bs.optional]
      moveProjectColumn:
        rootResolver(
          {. "input": moveProjectColumnInput},
          moveProjectColumnPayload,
          Js.Nullable.t(moveProjectColumnPayload),
        ),
      [@bs.optional]
      removeOutsideCollaborator:
        rootResolver(
          {. "input": removeOutsideCollaboratorInput},
          removeOutsideCollaboratorPayload,
          Js.Nullable.t(removeOutsideCollaboratorPayload),
        ),
      [@bs.optional]
      removeReaction:
        rootResolver(
          {. "input": removeReactionInput},
          removeReactionPayload,
          Js.Nullable.t(removeReactionPayload),
        ),
      [@bs.optional]
      removeStar:
        rootResolver(
          {. "input": removeStarInput},
          removeStarPayload,
          Js.Nullable.t(removeStarPayload),
        ),
      [@bs.optional]
      requestReviews:
        rootResolver(
          {. "input": requestReviewsInput},
          requestReviewsPayload,
          Js.Nullable.t(requestReviewsPayload),
        ),
      [@bs.optional]
      submitPullRequestReview:
        rootResolver(
          {. "input": submitPullRequestReviewInput},
          submitPullRequestReviewPayload,
          Js.Nullable.t(submitPullRequestReviewPayload),
        ),
      [@bs.optional]
      unlockLockable:
        rootResolver(
          {. "input": unlockLockableInput},
          unlockLockablePayload,
          Js.Nullable.t(unlockLockablePayload),
        ),
      [@bs.optional]
      updateBranchProtectionRule:
        rootResolver(
          {. "input": updateBranchProtectionRuleInput},
          updateBranchProtectionRulePayload,
          Js.Nullable.t(updateBranchProtectionRulePayload),
        ),
      [@bs.optional]
      updateProject:
        rootResolver(
          {. "input": updateProjectInput},
          updateProjectPayload,
          Js.Nullable.t(updateProjectPayload),
        ),
      [@bs.optional]
      updateProjectCard:
        rootResolver(
          {. "input": updateProjectCardInput},
          updateProjectCardPayload,
          Js.Nullable.t(updateProjectCardPayload),
        ),
      [@bs.optional]
      updateProjectColumn:
        rootResolver(
          {. "input": updateProjectColumnInput},
          updateProjectColumnPayload,
          Js.Nullable.t(updateProjectColumnPayload),
        ),
      [@bs.optional]
      updatePullRequestReview:
        rootResolver(
          {. "input": updatePullRequestReviewInput},
          updatePullRequestReviewPayload,
          Js.Nullable.t(updatePullRequestReviewPayload),
        ),
      [@bs.optional]
      updatePullRequestReviewComment:
        rootResolver(
          {. "input": updatePullRequestReviewCommentInput},
          updatePullRequestReviewCommentPayload,
          Js.Nullable.t(updatePullRequestReviewCommentPayload),
        ),
      [@bs.optional]
      updateSubscription:
        rootResolver(
          {. "input": updateSubscriptionInput},
          updateSubscriptionPayload,
          Js.Nullable.t(updateSubscriptionPayload),
        ),
      [@bs.optional]
      updateTopics:
        rootResolver(
          {. "input": updateTopicsInput},
          updateTopicsPayload,
          Js.Nullable.t(updateTopicsPayload),
        ),
    };
  };
  module Subscription = {};
  module Directives = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional] [@bs.as "include"]
      include_: directiveResolver({. "if": bool}),
      [@bs.optional]
      skip: directiveResolver({. "if": bool}),
      [@bs.optional]
      deprecated: directiveResolver({. "reason": Js.Nullable.t(string)}),
    };
  };
  module ReferencedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(referencedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      commit:
        Config.resolver(
          referencedEvent,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      commitRepository:
        Config.resolver(referencedEvent, unit, repository, repository),
      [@bs.optional]
      createdAt: Config.resolver(referencedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(referencedEvent, unit, string, string),
      [@bs.optional]
      isCrossRepository: Config.resolver(referencedEvent, unit, bool, bool),
      [@bs.optional]
      isDirectReference: Config.resolver(referencedEvent, unit, bool, bool),
      [@bs.optional]
      subject:
        Config.resolver(
          referencedEvent,
          unit,
          referencedSubject,
          referencedSubject,
        ),
    };
  };
  module MentionedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(mentionedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(mentionedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(mentionedEvent, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(mentionedEvent, unit, string, string),
    };
  };
  module ReopenedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(reopenedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      closable: Config.resolver(reopenedEvent, unit, closable, closable),
      [@bs.optional]
      createdAt: Config.resolver(reopenedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(reopenedEvent, unit, string, string),
    };
  };
  module ReviewDismissedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          reviewDismissedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(reviewDismissedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(reviewDismissedEvent, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(reviewDismissedEvent, unit, string, string),
      [@bs.optional]
      message: Config.resolver(reviewDismissedEvent, unit, string, string),
      [@bs.optional]
      messageHtml: Config.resolver(reviewDismissedEvent, unit, hTML, hTML),
      [@bs.optional]
      previousReviewState:
        Config.resolver(
          reviewDismissedEvent,
          unit,
          pullRequestReviewState,
          pullRequestReviewState,
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(reviewDismissedEvent, unit, pullRequest, pullRequest),
      [@bs.optional]
      pullRequestCommit:
        Config.resolver(
          reviewDismissedEvent,
          unit,
          pullRequestCommit,
          Js.Nullable.t(pullRequestCommit),
        ),
      [@bs.optional]
      resourcePath: Config.resolver(reviewDismissedEvent, unit, uRI, uRI),
      [@bs.optional]
      review:
        Config.resolver(
          reviewDismissedEvent,
          unit,
          pullRequestReview,
          Js.Nullable.t(pullRequestReview),
        ),
      [@bs.optional]
      url: Config.resolver(reviewDismissedEvent, unit, uRI, uRI),
    };
  };
  module PullRequestReviewCommentEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(pullRequestReviewCommentEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pullRequestReviewCommentEdge,
          unit,
          pullRequestReviewComment,
          Js.Nullable.t(pullRequestReviewComment),
        ),
    };
  };
  module UnknownSignature = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      email: Config.resolver(unknownSignature, unit, string, string),
      [@bs.optional]
      isValid: Config.resolver(unknownSignature, unit, bool, bool),
      [@bs.optional]
      payload: Config.resolver(unknownSignature, unit, string, string),
      [@bs.optional]
      signature: Config.resolver(unknownSignature, unit, string, string),
      [@bs.optional]
      signer:
        Config.resolver(unknownSignature, unit, user, Js.Nullable.t(user)),
      [@bs.optional]
      state:
        Config.resolver(
          unknownSignature,
          unit,
          gitSignatureState,
          gitSignatureState,
        ),
      [@bs.optional]
      wasSignedByGitHub: Config.resolver(unknownSignature, unit, bool, bool),
    };
  };
  module IssueConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          issueConnection,
          unit,
          issueEdge,
          Js.Nullable.t(array(Js.Nullable.t(issueEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          issueConnection,
          unit,
          issue,
          Js.Nullable.t(array(Js.Nullable.t(issue))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(issueConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(issueConnection, unit, int, int),
    };
  };
  module PullRequestCommitConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          pullRequestCommitConnection,
          unit,
          pullRequestCommitEdge,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestCommitEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          pullRequestCommitConnection,
          unit,
          pullRequestCommit,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestCommit))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          pullRequestCommitConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(pullRequestCommitConnection, unit, int, int),
    };
  };
  module GistCommentEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(gistCommentEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          gistCommentEdge,
          unit,
          gistComment,
          Js.Nullable.t(gistComment),
        ),
    };
  };
  module SubscribedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(subscribedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(subscribedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(subscribedEvent, unit, string, string),
      [@bs.optional]
      subscribable:
        Config.resolver(subscribedEvent, unit, subscribable, subscribable),
    };
  };
  module ExternalIdentitySamlAttributes = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      nameId:
        Config.resolver(
          externalIdentitySamlAttributes,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module Milestone = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      closed: Config.resolver(milestone, unit, bool, bool),
      [@bs.optional]
      closedAt:
        Config.resolver(milestone, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      createdAt: Config.resolver(milestone, unit, dateTime, dateTime),
      [@bs.optional]
      creator: Config.resolver(milestone, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      description:
        Config.resolver(milestone, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      dueOn:
        Config.resolver(milestone, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      id: Config.resolver(milestone, unit, string, string),
      [@bs.optional]
      issues:
        Config.resolver(
          milestone,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_issueState)),
          },
          issueConnection,
          issueConnection,
        ),
      [@bs.optional]
      number: Config.resolver(milestone, unit, int, int),
      [@bs.optional]
      pullRequests:
        Config.resolver(
          milestone,
          {
            .
            "after": Js.Nullable.t(string),
            "baseRefName": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "headRefName": Js.Nullable.t(string),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_pullRequestState)),
          },
          pullRequestConnection,
          pullRequestConnection,
        ),
      [@bs.optional]
      repository: Config.resolver(milestone, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(milestone, unit, uRI, uRI),
      [@bs.optional]
      state: Config.resolver(milestone, unit, milestoneState, milestoneState),
      [@bs.optional]
      title: Config.resolver(milestone, unit, string, string),
      [@bs.optional]
      updatedAt: Config.resolver(milestone, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(milestone, unit, uRI, uRI),
    };
  };
  module DeployKey = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      createdAt: Config.resolver(deployKey, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(deployKey, unit, string, string),
      [@bs.optional]
      key: Config.resolver(deployKey, unit, string, string),
      [@bs.optional]
      readOnly: Config.resolver(deployKey, unit, bool, bool),
      [@bs.optional]
      title: Config.resolver(deployKey, unit, string, string),
      [@bs.optional]
      verified: Config.resolver(deployKey, unit, bool, bool),
    };
  };
  module RepositoryTopicConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          repositoryTopicConnection,
          unit,
          repositoryTopicEdge,
          Js.Nullable.t(array(Js.Nullable.t(repositoryTopicEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          repositoryTopicConnection,
          unit,
          repositoryTopic,
          Js.Nullable.t(array(Js.Nullable.t(repositoryTopic))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(repositoryTopicConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(repositoryTopicConnection, unit, int, int),
    };
  };
  module SmimeSignature = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      email: Config.resolver(smimeSignature, unit, string, string),
      [@bs.optional]
      isValid: Config.resolver(smimeSignature, unit, bool, bool),
      [@bs.optional]
      payload: Config.resolver(smimeSignature, unit, string, string),
      [@bs.optional]
      signature: Config.resolver(smimeSignature, unit, string, string),
      [@bs.optional]
      signer:
        Config.resolver(smimeSignature, unit, user, Js.Nullable.t(user)),
      [@bs.optional]
      state:
        Config.resolver(
          smimeSignature,
          unit,
          gitSignatureState,
          gitSignatureState,
        ),
      [@bs.optional]
      wasSignedByGitHub: Config.resolver(smimeSignature, unit, bool, bool),
    };
  };
  module UpdatePullRequestReviewCommentPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updatePullRequestReviewCommentPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequestReviewComment:
        Config.resolver(
          updatePullRequestReviewCommentPayload,
          unit,
          pullRequestReviewComment,
          pullRequestReviewComment,
        ),
    };
  };
  module LockLockablePayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          lockLockablePayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      lockedRecord:
        Config.resolver(
          lockLockablePayload,
          unit,
          lockable,
          Js.Nullable.t(lockable),
        ),
    };
  };
  module RepositoryCollaboratorConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          repositoryCollaboratorConnection,
          unit,
          repositoryCollaboratorEdge,
          Js.Nullable.t(array(Js.Nullable.t(repositoryCollaboratorEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          repositoryCollaboratorConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          repositoryCollaboratorConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(repositoryCollaboratorConnection, unit, int, int),
    };
  };
  module ExternalIdentityScimAttributes = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      username:
        Config.resolver(
          externalIdentityScimAttributes,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module DeploymentConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          deploymentConnection,
          unit,
          deploymentEdge,
          Js.Nullable.t(array(Js.Nullable.t(deploymentEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          deploymentConnection,
          unit,
          deployment,
          Js.Nullable.t(array(Js.Nullable.t(deployment))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(deploymentConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(deploymentConnection, unit, int, int),
    };
  };
  module GistConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          gistConnection,
          unit,
          gistEdge,
          Js.Nullable.t(array(Js.Nullable.t(gistEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          gistConnection,
          unit,
          gist,
          Js.Nullable.t(array(Js.Nullable.t(gist))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(gistConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(gistConnection, unit, int, int),
    };
  };
  module MoveProjectCardPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cardEdge:
        Config.resolver(
          moveProjectCardPayload,
          unit,
          projectCardEdge,
          projectCardEdge,
        ),
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          moveProjectCardPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module PullRequestTimelineItemsEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(pullRequestTimelineItemsEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pullRequestTimelineItemsEdge,
          unit,
          pullRequestTimelineItems,
          Js.Nullable.t(pullRequestTimelineItems),
        ),
    };
  };
  module TextMatch = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      fragment: Config.resolver(textMatch, unit, string, string),
      [@bs.optional]
      highlights:
        Config.resolver(
          textMatch,
          unit,
          textMatchHighlight,
          array(textMatchHighlight),
        ),
      [@bs.optional]
      property: Config.resolver(textMatch, unit, string, string),
    };
  };
  module GitHubMetadata = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      gitHubServicesSha:
        Config.resolver(gitHubMetadata, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      gitIpAddresses:
        Config.resolver(
          gitHubMetadata,
          unit,
          string,
          Js.Nullable.t(array(string)),
        ),
      [@bs.optional]
      hookIpAddresses:
        Config.resolver(
          gitHubMetadata,
          unit,
          string,
          Js.Nullable.t(array(string)),
        ),
      [@bs.optional]
      importerIpAddresses:
        Config.resolver(
          gitHubMetadata,
          unit,
          string,
          Js.Nullable.t(array(string)),
        ),
      [@bs.optional]
      isPasswordAuthenticationVerifiable:
        Config.resolver(gitHubMetadata, unit, bool, bool),
      [@bs.optional]
      pagesIpAddresses:
        Config.resolver(
          gitHubMetadata,
          unit,
          string,
          Js.Nullable.t(array(string)),
        ),
    };
  };
  module AddCommentPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          addCommentPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      commentEdge:
        Config.resolver(
          addCommentPayload,
          unit,
          issueCommentEdge,
          issueCommentEdge,
        ),
      [@bs.optional]
      subject: Config.resolver(addCommentPayload, unit, node, node),
      [@bs.optional]
      timelineEdge:
        Config.resolver(
          addCommentPayload,
          unit,
          issueTimelineItemEdge,
          issueTimelineItemEdge,
        ),
    };
  };
  module StarredRepositoryConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          starredRepositoryConnection,
          unit,
          starredRepositoryEdge,
          Js.Nullable.t(array(Js.Nullable.t(starredRepositoryEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          starredRepositoryConnection,
          unit,
          repository,
          Js.Nullable.t(array(Js.Nullable.t(repository))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          starredRepositoryConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(starredRepositoryConnection, unit, int, int),
    };
  };
  module UpdateSubscriptionPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updateSubscriptionPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      subscribable:
        Config.resolver(
          updateSubscriptionPayload,
          unit,
          subscribable,
          subscribable,
        ),
    };
  };
  module TeamConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          teamConnection,
          unit,
          teamEdge,
          Js.Nullable.t(array(Js.Nullable.t(teamEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          teamConnection,
          unit,
          team,
          Js.Nullable.t(array(Js.Nullable.t(team))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(teamConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(teamConnection, unit, int, int),
    };
  };
  module CommentDeletedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          commentDeletedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(commentDeletedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(commentDeletedEvent, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(commentDeletedEvent, unit, string, string),
    };
  };
  module IssueTimelineItemsEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(issueTimelineItemsEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          issueTimelineItemsEdge,
          unit,
          issueTimelineItems,
          Js.Nullable.t(issueTimelineItems),
        ),
    };
  };
  module Topic = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      id: Config.resolver(topic, unit, string, string),
      [@bs.optional]
      name: Config.resolver(topic, unit, string, string),
      [@bs.optional]
      relatedTopics: Config.resolver(topic, unit, topic, array(topic)),
      [@bs.optional]
      stargazers:
        Config.resolver(
          topic,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(starOrder),
          },
          stargazerConnection,
          stargazerConnection,
        ),
      [@bs.optional]
      viewerHasStarred: Config.resolver(topic, unit, bool, bool),
    };
  };
  module OrganizationInvitationConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          organizationInvitationConnection,
          unit,
          organizationInvitationEdge,
          Js.Nullable.t(array(Js.Nullable.t(organizationInvitationEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          organizationInvitationConnection,
          unit,
          organizationInvitation,
          Js.Nullable.t(array(Js.Nullable.t(organizationInvitation))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          organizationInvitationConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(organizationInvitationConnection, unit, int, int),
    };
  };
  module Label = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      color: Config.resolver(label, unit, string, string),
      [@bs.optional]
      createdAt:
        Config.resolver(label, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      description:
        Config.resolver(label, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(label, unit, string, string),
      [@bs.optional]
      isDefault: Config.resolver(label, unit, bool, bool),
      [@bs.optional]
      issues:
        Config.resolver(
          label,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_issueState)),
          },
          issueConnection,
          issueConnection,
        ),
      [@bs.optional]
      name: Config.resolver(label, unit, string, string),
      [@bs.optional]
      pullRequests:
        Config.resolver(
          label,
          {
            .
            "after": Js.Nullable.t(string),
            "baseRefName": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "headRefName": Js.Nullable.t(string),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_pullRequestState)),
          },
          pullRequestConnection,
          pullRequestConnection,
        ),
      [@bs.optional]
      repository: Config.resolver(label, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(label, unit, uRI, uRI),
      [@bs.optional]
      updatedAt:
        Config.resolver(label, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      url: Config.resolver(label, unit, uRI, uRI),
    };
  };
  module ReviewRequestEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(reviewRequestEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          reviewRequestEdge,
          unit,
          reviewRequest,
          Js.Nullable.t(reviewRequest),
        ),
    };
  };
  module UnlabeledEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(unlabeledEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(unlabeledEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(unlabeledEvent, unit, string, string),
      [@bs.optional]
      label: Config.resolver(unlabeledEvent, unit, label, label),
      [@bs.optional]
      labelable: Config.resolver(unlabeledEvent, unit, labelable, labelable),
    };
  };
  module StarredRepositoryEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(starredRepositoryEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(starredRepositoryEdge, unit, repository, repository),
      [@bs.optional]
      starredAt:
        Config.resolver(starredRepositoryEdge, unit, dateTime, dateTime),
    };
  };
  module DeploymentStatusConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          deploymentStatusConnection,
          unit,
          deploymentStatusEdge,
          Js.Nullable.t(array(Js.Nullable.t(deploymentStatusEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          deploymentStatusConnection,
          unit,
          deploymentStatus,
          Js.Nullable.t(array(Js.Nullable.t(deploymentStatus))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(deploymentStatusConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(deploymentStatusConnection, unit, int, int),
    };
  };
  module UserEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(userEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(userEdge, unit, user, Js.Nullable.t(user)),
    };
  };
  module GistCommentConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          gistCommentConnection,
          unit,
          gistCommentEdge,
          Js.Nullable.t(array(Js.Nullable.t(gistCommentEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          gistCommentConnection,
          unit,
          gistComment,
          Js.Nullable.t(array(Js.Nullable.t(gistComment))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(gistCommentConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(gistCommentConnection, unit, int, int),
    };
  };
  module LicenseRule = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      description: Config.resolver(licenseRule, unit, string, string),
      [@bs.optional]
      key: Config.resolver(licenseRule, unit, string, string),
      [@bs.optional]
      label: Config.resolver(licenseRule, unit, string, string),
    };
  };
  module RepositoryConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          repositoryConnection,
          unit,
          repositoryEdge,
          Js.Nullable.t(array(Js.Nullable.t(repositoryEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          repositoryConnection,
          unit,
          repository,
          Js.Nullable.t(array(Js.Nullable.t(repository))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(repositoryConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(repositoryConnection, unit, int, int),
      [@bs.optional]
      totalDiskUsage: Config.resolver(repositoryConnection, unit, int, int),
    };
  };
  module ReleaseEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(releaseEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(releaseEdge, unit, release, Js.Nullable.t(release)),
    };
  };
  module ProjectCardEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(projectCardEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          projectCardEdge,
          unit,
          projectCard,
          Js.Nullable.t(projectCard),
        ),
    };
  };
  module ReviewRequestedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          reviewRequestedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(reviewRequestedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(reviewRequestedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(reviewRequestedEvent, unit, pullRequest, pullRequest),
      [@bs.optional]
      requestedReviewer:
        Config.resolver(
          reviewRequestedEvent,
          unit,
          requestedReviewer,
          Js.Nullable.t(requestedReviewer),
        ),
    };
  };
  module OrganizationEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(organizationEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          organizationEdge,
          unit,
          organization,
          Js.Nullable.t(organization),
        ),
    };
  };
  module AddedToProjectEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          addedToProjectEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(addedToProjectEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(addedToProjectEvent, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(addedToProjectEvent, unit, string, string),
    };
  };
  module ReleaseAssetEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(releaseAssetEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          releaseAssetEdge,
          unit,
          releaseAsset,
          Js.Nullable.t(releaseAsset),
        ),
    };
  };
  module Issue = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      activeLockReason:
        Config.resolver(issue, unit, lockReason, Js.Nullable.t(lockReason)),
      [@bs.optional]
      assignees:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      author: Config.resolver(issue, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          issue,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      body: Config.resolver(issue, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(issue, unit, hTML, hTML),
      [@bs.optional]
      bodyText: Config.resolver(issue, unit, string, string),
      [@bs.optional]
      closed: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      closedAt:
        Config.resolver(issue, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      comments:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          issueCommentConnection,
          issueCommentConnection,
        ),
      [@bs.optional]
      createdAt: Config.resolver(issue, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      databaseId: Config.resolver(issue, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      editor: Config.resolver(issue, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      id: Config.resolver(issue, unit, string, string),
      [@bs.optional]
      includesCreatedEdit: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      labels:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          labelConnection,
          Js.Nullable.t(labelConnection),
        ),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(issue, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      locked: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      milestone:
        Config.resolver(issue, unit, milestone, Js.Nullable.t(milestone)),
      [@bs.optional]
      number: Config.resolver(issue, unit, int, int),
      [@bs.optional]
      participants:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      projectCards:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "archivedStates":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_projectCardArchivedState)),
              ),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          projectCardConnection,
          projectCardConnection,
        ),
      [@bs.optional]
      publishedAt:
        Config.resolver(issue, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      reactionGroups:
        Config.resolver(
          issue,
          unit,
          reactionGroup,
          Js.Nullable.t(array(reactionGroup)),
        ),
      [@bs.optional]
      reactions:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "content": Js.Nullable.t(abs_reactionContent),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(reactionOrder),
          },
          reactionConnection,
          reactionConnection,
        ),
      [@bs.optional]
      repository: Config.resolver(issue, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(issue, unit, uRI, uRI),
      [@bs.optional]
      state: Config.resolver(issue, unit, issueState, issueState),
      [@bs.optional]
      timeline:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "since": Js.Nullable.t(dateTime),
          },
          issueTimelineConnection,
          issueTimelineConnection,
        ),
      [@bs.optional]
      title: Config.resolver(issue, unit, string, string),
      [@bs.optional]
      updatedAt: Config.resolver(issue, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(issue, unit, uRI, uRI),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          issue,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanReact: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      viewerCanSubscribe: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          issue,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor: Config.resolver(issue, unit, bool, bool),
      [@bs.optional]
      viewerSubscription:
        Config.resolver(
          issue,
          unit,
          subscriptionState,
          Js.Nullable.t(subscriptionState),
        ),
    };
  };
  module ReactionConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          reactionConnection,
          unit,
          reactionEdge,
          Js.Nullable.t(array(Js.Nullable.t(reactionEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          reactionConnection,
          unit,
          reaction,
          Js.Nullable.t(array(Js.Nullable.t(reaction))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(reactionConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(reactionConnection, unit, int, int),
      [@bs.optional]
      viewerHasReacted: Config.resolver(reactionConnection, unit, bool, bool),
    };
  };
  module RepositoryTopic = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      id: Config.resolver(repositoryTopic, unit, string, string),
      [@bs.optional]
      resourcePath: Config.resolver(repositoryTopic, unit, uRI, uRI),
      [@bs.optional]
      topic: Config.resolver(repositoryTopic, unit, topic, topic),
      [@bs.optional]
      url: Config.resolver(repositoryTopic, unit, uRI, uRI),
    };
  };
  module IssueTimelineConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          issueTimelineConnection,
          unit,
          issueTimelineItemEdge,
          Js.Nullable.t(array(Js.Nullable.t(issueTimelineItemEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          issueTimelineConnection,
          unit,
          issueTimelineItem,
          Js.Nullable.t(array(Js.Nullable.t(issueTimelineItem))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(issueTimelineConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(issueTimelineConnection, unit, int, int),
    };
  };
  module MarketplaceListingConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          marketplaceListingConnection,
          unit,
          marketplaceListingEdge,
          Js.Nullable.t(array(Js.Nullable.t(marketplaceListingEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          marketplaceListingConnection,
          unit,
          marketplaceListing,
          Js.Nullable.t(array(Js.Nullable.t(marketplaceListing))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          marketplaceListingConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(marketplaceListingConnection, unit, int, int),
    };
  };
  module Commit = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      abbreviatedOid: Config.resolver(commit, unit, string, string),
      [@bs.optional]
      additions: Config.resolver(commit, unit, int, int),
      [@bs.optional]
      author:
        Config.resolver(commit, unit, gitActor, Js.Nullable.t(gitActor)),
      [@bs.optional]
      authoredByCommitter: Config.resolver(commit, unit, bool, bool),
      [@bs.optional]
      authoredDate: Config.resolver(commit, unit, dateTime, dateTime),
      [@bs.optional]
      blame: Config.resolver(commit, {. "path": string}, blame, blame),
      [@bs.optional]
      changedFiles: Config.resolver(commit, unit, int, int),
      [@bs.optional]
      comments:
        Config.resolver(
          commit,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          commitCommentConnection,
          commitCommentConnection,
        ),
      [@bs.optional]
      commitResourcePath: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      commitUrl: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      committedDate: Config.resolver(commit, unit, dateTime, dateTime),
      [@bs.optional]
      committedViaWeb: Config.resolver(commit, unit, bool, bool),
      [@bs.optional]
      committer:
        Config.resolver(commit, unit, gitActor, Js.Nullable.t(gitActor)),
      [@bs.optional]
      deletions: Config.resolver(commit, unit, int, int),
      [@bs.optional]
      history:
        Config.resolver(
          commit,
          {
            .
            "after": Js.Nullable.t(string),
            "author": Js.Nullable.t(commitAuthor),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "path": Js.Nullable.t(string),
            "since": Js.Nullable.t(gitTimestamp),
            "until": Js.Nullable.t(gitTimestamp),
          },
          commitHistoryConnection,
          commitHistoryConnection,
        ),
      [@bs.optional]
      id: Config.resolver(commit, unit, string, string),
      [@bs.optional]
      message: Config.resolver(commit, unit, string, string),
      [@bs.optional]
      messageBody: Config.resolver(commit, unit, string, string),
      [@bs.optional]
      messageBodyHTML: Config.resolver(commit, unit, hTML, hTML),
      [@bs.optional]
      messageHeadline: Config.resolver(commit, unit, string, string),
      [@bs.optional]
      messageHeadlineHTML: Config.resolver(commit, unit, hTML, hTML),
      [@bs.optional]
      oid: Config.resolver(commit, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      parents:
        Config.resolver(
          commit,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          commitConnection,
          commitConnection,
        ),
      [@bs.optional]
      pushedDate:
        Config.resolver(commit, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      repository: Config.resolver(commit, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      signature:
        Config.resolver(
          commit,
          unit,
          gitSignature,
          Js.Nullable.t(gitSignature),
        ),
      [@bs.optional]
      status: Config.resolver(commit, unit, status, Js.Nullable.t(status)),
      [@bs.optional]
      tarballUrl: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      tree: Config.resolver(commit, unit, tree, tree),
      [@bs.optional]
      treeResourcePath: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      treeUrl: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      url: Config.resolver(commit, unit, uRI, uRI),
      [@bs.optional]
      viewerCanSubscribe: Config.resolver(commit, unit, bool, bool),
      [@bs.optional]
      viewerSubscription:
        Config.resolver(
          commit,
          unit,
          subscriptionState,
          Js.Nullable.t(subscriptionState),
        ),
      [@bs.optional]
      zipballUrl: Config.resolver(commit, unit, uRI, uRI),
    };
  };
  module Project = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      body: Config.resolver(project, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      bodyHTML: Config.resolver(project, unit, hTML, hTML),
      [@bs.optional]
      closed: Config.resolver(project, unit, bool, bool),
      [@bs.optional]
      closedAt:
        Config.resolver(project, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      columns:
        Config.resolver(
          project,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          projectColumnConnection,
          projectColumnConnection,
        ),
      [@bs.optional]
      createdAt: Config.resolver(project, unit, dateTime, dateTime),
      [@bs.optional]
      creator: Config.resolver(project, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      databaseId: Config.resolver(project, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(project, unit, string, string),
      [@bs.optional]
      name: Config.resolver(project, unit, string, string),
      [@bs.optional]
      number: Config.resolver(project, unit, int, int),
      [@bs.optional]
      owner: Config.resolver(project, unit, projectOwner, projectOwner),
      [@bs.optional]
      pendingCards:
        Config.resolver(
          project,
          {
            .
            "after": Js.Nullable.t(string),
            "archivedStates":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_projectCardArchivedState)),
              ),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          projectCardConnection,
          projectCardConnection,
        ),
      [@bs.optional]
      resourcePath: Config.resolver(project, unit, uRI, uRI),
      [@bs.optional]
      state: Config.resolver(project, unit, projectState, projectState),
      [@bs.optional]
      updatedAt: Config.resolver(project, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(project, unit, uRI, uRI),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(project, unit, bool, bool),
    };
  };
  module UserContentEditConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          userContentEditConnection,
          unit,
          userContentEditEdge,
          Js.Nullable.t(array(Js.Nullable.t(userContentEditEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          userContentEditConnection,
          unit,
          userContentEdit,
          Js.Nullable.t(array(Js.Nullable.t(userContentEdit))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(userContentEditConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(userContentEditConnection, unit, int, int),
    };
  };
  module FollowerConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          followerConnection,
          unit,
          userEdge,
          Js.Nullable.t(array(Js.Nullable.t(userEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          followerConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(followerConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(followerConnection, unit, int, int),
    };
  };
  module ReactionGroup = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      content:
        Config.resolver(
          reactionGroup,
          unit,
          reactionContent,
          reactionContent,
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(
          reactionGroup,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      subject: Config.resolver(reactionGroup, unit, reactable, reactable),
      [@bs.optional]
      users:
        Config.resolver(
          reactionGroup,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          reactingUserConnection,
          reactingUserConnection,
        ),
      [@bs.optional]
      viewerHasReacted: Config.resolver(reactionGroup, unit, bool, bool),
    };
  };
  module MergedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor: Config.resolver(mergedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      commit:
        Config.resolver(mergedEvent, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      createdAt: Config.resolver(mergedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(mergedEvent, unit, string, string),
      [@bs.optional]
      mergeRef: Config.resolver(mergedEvent, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      mergeRefName: Config.resolver(mergedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(mergedEvent, unit, pullRequest, pullRequest),
      [@bs.optional]
      resourcePath: Config.resolver(mergedEvent, unit, uRI, uRI),
      [@bs.optional]
      url: Config.resolver(mergedEvent, unit, uRI, uRI),
    };
  };
  module ProtectedBranch = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      creator:
        Config.resolver(protectedBranch, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      hasDismissableStaleReviews:
        Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      hasRequiredReviews: Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      hasRequiredStatusChecks:
        Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      hasRestrictedPushes: Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      hasRestrictedReviewDismissals:
        Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      hasStrictRequiredStatusChecks:
        Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      id: Config.resolver(protectedBranch, unit, string, string),
      [@bs.optional]
      isAdminEnforced: Config.resolver(protectedBranch, unit, bool, bool),
      [@bs.optional]
      name: Config.resolver(protectedBranch, unit, string, string),
      [@bs.optional]
      pushAllowances:
        Config.resolver(
          protectedBranch,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          pushAllowanceConnection,
          pushAllowanceConnection,
        ),
      [@bs.optional]
      repository:
        Config.resolver(protectedBranch, unit, repository, repository),
      [@bs.optional]
      requiredStatusCheckContexts:
        Config.resolver(
          protectedBranch,
          unit,
          string,
          Js.Nullable.t(array(Js.Nullable.t(string))),
        ),
      [@bs.optional]
      reviewDismissalAllowances:
        Config.resolver(
          protectedBranch,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          reviewDismissalAllowanceConnection,
          reviewDismissalAllowanceConnection,
        ),
    };
  };
  module DeploymentEnvironmentChangedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          deploymentEnvironmentChangedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(
          deploymentEnvironmentChangedEvent,
          unit,
          dateTime,
          dateTime,
        ),
      [@bs.optional]
      deploymentStatus:
        Config.resolver(
          deploymentEnvironmentChangedEvent,
          unit,
          deploymentStatus,
          deploymentStatus,
        ),
      [@bs.optional]
      id:
        Config.resolver(
          deploymentEnvironmentChangedEvent,
          unit,
          string,
          string,
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          deploymentEnvironmentChangedEvent,
          unit,
          pullRequest,
          pullRequest,
        ),
    };
  };
  module DeployKeyEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(deployKeyEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          deployKeyEdge,
          unit,
          deployKey,
          Js.Nullable.t(deployKey),
        ),
    };
  };
  module CommitComment = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      author:
        Config.resolver(commitComment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          commitComment,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      body: Config.resolver(commitComment, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(commitComment, unit, hTML, hTML),
      [@bs.optional]
      bodyText: Config.resolver(commitComment, unit, string, string),
      [@bs.optional]
      commit:
        Config.resolver(commitComment, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      createdAt: Config.resolver(commitComment, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail: Config.resolver(commitComment, unit, bool, bool),
      [@bs.optional]
      databaseId:
        Config.resolver(commitComment, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      editor:
        Config.resolver(commitComment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      id: Config.resolver(commitComment, unit, string, string),
      [@bs.optional]
      includesCreatedEdit: Config.resolver(commitComment, unit, bool, bool),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(
          commitComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      path:
        Config.resolver(commitComment, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      position:
        Config.resolver(commitComment, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      publishedAt:
        Config.resolver(
          commitComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      reactionGroups:
        Config.resolver(
          commitComment,
          unit,
          reactionGroup,
          Js.Nullable.t(array(reactionGroup)),
        ),
      [@bs.optional]
      reactions:
        Config.resolver(
          commitComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "content": Js.Nullable.t(abs_reactionContent),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(reactionOrder),
          },
          reactionConnection,
          reactionConnection,
        ),
      [@bs.optional]
      repository:
        Config.resolver(commitComment, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(commitComment, unit, uRI, uRI),
      [@bs.optional]
      updatedAt: Config.resolver(commitComment, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(commitComment, unit, uRI, uRI),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          commitComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanDelete: Config.resolver(commitComment, unit, bool, bool),
      [@bs.optional]
      viewerCanReact: Config.resolver(commitComment, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(commitComment, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          commitComment,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor: Config.resolver(commitComment, unit, bool, bool),
    };
  };
  module ProtectedBranchEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(protectedBranchEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          protectedBranchEdge,
          unit,
          protectedBranch,
          Js.Nullable.t(protectedBranch),
        ),
    };
  };
  module RateLimit = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cost: Config.resolver(rateLimit, unit, int, int),
      [@bs.optional]
      limit: Config.resolver(rateLimit, unit, int, int),
      [@bs.optional]
      nodeCount: Config.resolver(rateLimit, unit, int, int),
      [@bs.optional]
      remaining: Config.resolver(rateLimit, unit, int, int),
      [@bs.optional]
      resetAt: Config.resolver(rateLimit, unit, dateTime, dateTime),
    };
  };
  module RemoveOutsideCollaboratorPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          removeOutsideCollaboratorPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      removedUser:
        Config.resolver(removeOutsideCollaboratorPayload, unit, user, user),
    };
  };
  module PullRequest = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      activeLockReason:
        Config.resolver(
          pullRequest,
          unit,
          lockReason,
          Js.Nullable.t(lockReason),
        ),
      [@bs.optional]
      additions: Config.resolver(pullRequest, unit, int, int),
      [@bs.optional]
      assignees:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      author:
        Config.resolver(pullRequest, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          pullRequest,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      baseRef: Config.resolver(pullRequest, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      baseRefName: Config.resolver(pullRequest, unit, string, string),
      [@bs.optional]
      baseRefOid:
        Config.resolver(pullRequest, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      body: Config.resolver(pullRequest, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(pullRequest, unit, hTML, hTML),
      [@bs.optional]
      bodyText: Config.resolver(pullRequest, unit, string, string),
      [@bs.optional]
      changedFiles: Config.resolver(pullRequest, unit, int, int),
      [@bs.optional]
      closed: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      closedAt:
        Config.resolver(
          pullRequest,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      comments:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          issueCommentConnection,
          issueCommentConnection,
        ),
      [@bs.optional]
      commits:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          pullRequestCommitConnection,
          pullRequestCommitConnection,
        ),
      [@bs.optional]
      createdAt: Config.resolver(pullRequest, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      databaseId:
        Config.resolver(pullRequest, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      deletions: Config.resolver(pullRequest, unit, int, int),
      [@bs.optional]
      editor:
        Config.resolver(pullRequest, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      headRef: Config.resolver(pullRequest, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      headRefName: Config.resolver(pullRequest, unit, string, string),
      [@bs.optional]
      headRefOid:
        Config.resolver(pullRequest, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      headRepository:
        Config.resolver(
          pullRequest,
          unit,
          repository,
          Js.Nullable.t(repository),
        ),
      [@bs.optional]
      headRepositoryOwner:
        Config.resolver(
          pullRequest,
          unit,
          repositoryOwner,
          Js.Nullable.t(repositoryOwner),
        ),
      [@bs.optional]
      id: Config.resolver(pullRequest, unit, string, string),
      [@bs.optional]
      includesCreatedEdit: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      isCrossRepository: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      labels:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          labelConnection,
          Js.Nullable.t(labelConnection),
        ),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(
          pullRequest,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      locked: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      maintainerCanModify: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      mergeCommit:
        Config.resolver(pullRequest, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      mergeable:
        Config.resolver(pullRequest, unit, mergeableState, mergeableState),
      [@bs.optional]
      merged: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      mergedAt:
        Config.resolver(
          pullRequest,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      mergedBy:
        Config.resolver(pullRequest, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      milestone:
        Config.resolver(
          pullRequest,
          unit,
          milestone,
          Js.Nullable.t(milestone),
        ),
      [@bs.optional]
      number: Config.resolver(pullRequest, unit, int, int),
      [@bs.optional]
      participants:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      permalink: Config.resolver(pullRequest, unit, uRI, uRI),
      [@bs.optional]
      potentialMergeCommit:
        Config.resolver(pullRequest, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      projectCards:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "archivedStates":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_projectCardArchivedState)),
              ),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          projectCardConnection,
          projectCardConnection,
        ),
      [@bs.optional]
      publishedAt:
        Config.resolver(
          pullRequest,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      reactionGroups:
        Config.resolver(
          pullRequest,
          unit,
          reactionGroup,
          Js.Nullable.t(array(reactionGroup)),
        ),
      [@bs.optional]
      reactions:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "content": Js.Nullable.t(abs_reactionContent),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(reactionOrder),
          },
          reactionConnection,
          reactionConnection,
        ),
      [@bs.optional]
      repository: Config.resolver(pullRequest, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(pullRequest, unit, uRI, uRI),
      [@bs.optional]
      revertResourcePath: Config.resolver(pullRequest, unit, uRI, uRI),
      [@bs.optional]
      revertUrl: Config.resolver(pullRequest, unit, uRI, uRI),
      [@bs.optional]
      reviewRequests:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          reviewRequestConnection,
          Js.Nullable.t(reviewRequestConnection),
        ),
      [@bs.optional]
      reviews:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "author": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "states": Js.Nullable.t(array(abs_pullRequestReviewState)),
          },
          pullRequestReviewConnection,
          Js.Nullable.t(pullRequestReviewConnection),
        ),
      [@bs.optional]
      state:
        Config.resolver(
          pullRequest,
          unit,
          pullRequestState,
          pullRequestState,
        ),
      [@bs.optional]
      suggestedReviewers:
        Config.resolver(
          pullRequest,
          unit,
          suggestedReviewer,
          array(Js.Nullable.t(suggestedReviewer)),
        ),
      [@bs.optional]
      timeline:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "since": Js.Nullable.t(dateTime),
          },
          pullRequestTimelineConnection,
          pullRequestTimelineConnection,
        ),
      [@bs.optional]
      title: Config.resolver(pullRequest, unit, string, string),
      [@bs.optional]
      updatedAt: Config.resolver(pullRequest, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(pullRequest, unit, uRI, uRI),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          pullRequest,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanApplySuggestion:
        Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      viewerCanReact: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      viewerCanSubscribe: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          pullRequest,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor: Config.resolver(pullRequest, unit, bool, bool),
      [@bs.optional]
      viewerSubscription:
        Config.resolver(
          pullRequest,
          unit,
          subscriptionState,
          Js.Nullable.t(subscriptionState),
        ),
    };
  };
  module ClosedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor: Config.resolver(closedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      closable: Config.resolver(closedEvent, unit, closable, closable),
      [@bs.optional]
      closer:
        Config.resolver(closedEvent, unit, closer, Js.Nullable.t(closer)),
      [@bs.optional]
      createdAt: Config.resolver(closedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(closedEvent, unit, string, string),
      [@bs.optional]
      resourcePath: Config.resolver(closedEvent, unit, uRI, uRI),
      [@bs.optional]
      url: Config.resolver(closedEvent, unit, uRI, uRI),
    };
  };
  module Team = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      ancestors:
        Config.resolver(
          team,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          teamConnection,
          teamConnection,
        ),
      [@bs.optional]
      avatarUrl:
        Config.resolver(
          team,
          {. "size": Js.Nullable.t(int)},
          uRI,
          Js.Nullable.t(uRI),
        ),
      [@bs.optional]
      childTeams:
        Config.resolver(
          team,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "immediateOnly": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(teamOrder),
            "userLogins": Js.Nullable.t(array(string)),
          },
          teamConnection,
          teamConnection,
        ),
      [@bs.optional]
      combinedSlug: Config.resolver(team, unit, string, string),
      [@bs.optional]
      createdAt: Config.resolver(team, unit, dateTime, dateTime),
      [@bs.optional]
      description:
        Config.resolver(team, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      editTeamResourcePath: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      editTeamUrl: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      id: Config.resolver(team, unit, string, string),
      [@bs.optional]
      invitations:
        Config.resolver(
          team,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          organizationInvitationConnection,
          Js.Nullable.t(organizationInvitationConnection),
        ),
      [@bs.optional]
      members:
        Config.resolver(
          team,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "membership": Js.Nullable.t(abs_teamMembershipType),
            "orderBy": Js.Nullable.t(teamMemberOrder),
            "query": Js.Nullable.t(string),
            "role": Js.Nullable.t(abs_teamMemberRole),
          },
          teamMemberConnection,
          teamMemberConnection,
        ),
      [@bs.optional]
      membersResourcePath: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      membersUrl: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      name: Config.resolver(team, unit, string, string),
      [@bs.optional]
      newTeamResourcePath: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      newTeamUrl: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      organization: Config.resolver(team, unit, organization, organization),
      [@bs.optional]
      parentTeam: Config.resolver(team, unit, team, Js.Nullable.t(team)),
      [@bs.optional]
      privacy: Config.resolver(team, unit, teamPrivacy, teamPrivacy),
      [@bs.optional]
      repositories:
        Config.resolver(
          team,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(teamRepositoryOrder),
            "query": Js.Nullable.t(string),
          },
          teamRepositoryConnection,
          teamRepositoryConnection,
        ),
      [@bs.optional]
      repositoriesResourcePath: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      repositoriesUrl: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      resourcePath: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      slug: Config.resolver(team, unit, string, string),
      [@bs.optional]
      teamsResourcePath: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      teamsUrl: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      updatedAt: Config.resolver(team, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(team, unit, uRI, uRI),
      [@bs.optional]
      viewerCanAdminister: Config.resolver(team, unit, bool, bool),
      [@bs.optional]
      viewerCanSubscribe: Config.resolver(team, unit, bool, bool),
      [@bs.optional]
      viewerSubscription:
        Config.resolver(
          team,
          unit,
          subscriptionState,
          Js.Nullable.t(subscriptionState),
        ),
    };
  };
  module UnlockedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(unlockedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(unlockedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(unlockedEvent, unit, string, string),
      [@bs.optional]
      lockable: Config.resolver(unlockedEvent, unit, lockable, lockable),
    };
  };
  module ExternalIdentity = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      guid: Config.resolver(externalIdentity, unit, string, string),
      [@bs.optional]
      id: Config.resolver(externalIdentity, unit, string, string),
      [@bs.optional]
      organizationInvitation:
        Config.resolver(
          externalIdentity,
          unit,
          organizationInvitation,
          Js.Nullable.t(organizationInvitation),
        ),
      [@bs.optional]
      samlIdentity:
        Config.resolver(
          externalIdentity,
          unit,
          externalIdentitySamlAttributes,
          Js.Nullable.t(externalIdentitySamlAttributes),
        ),
      [@bs.optional]
      scimIdentity:
        Config.resolver(
          externalIdentity,
          unit,
          externalIdentityScimAttributes,
          Js.Nullable.t(externalIdentityScimAttributes),
        ),
      [@bs.optional]
      user:
        Config.resolver(externalIdentity, unit, user, Js.Nullable.t(user)),
    };
  };
  module UpdatePullRequestReviewPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updatePullRequestReviewPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequestReview:
        Config.resolver(
          updatePullRequestReviewPayload,
          unit,
          pullRequestReview,
          pullRequestReview,
        ),
    };
  };
  module AppEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(appEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(appEdge, unit, app, Js.Nullable.t(app)),
    };
  };
  module SubmitPullRequestReviewPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          submitPullRequestReviewPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequestReview:
        Config.resolver(
          submitPullRequestReviewPayload,
          unit,
          pullRequestReview,
          pullRequestReview,
        ),
    };
  };
  module DeploymentStatus = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      createdAt: Config.resolver(deploymentStatus, unit, dateTime, dateTime),
      [@bs.optional]
      creator:
        Config.resolver(deploymentStatus, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      deployment:
        Config.resolver(deploymentStatus, unit, deployment, deployment),
      [@bs.optional]
      description:
        Config.resolver(
          deploymentStatus,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      environmentUrl:
        Config.resolver(deploymentStatus, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      id: Config.resolver(deploymentStatus, unit, string, string),
      [@bs.optional]
      logUrl:
        Config.resolver(deploymentStatus, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      state:
        Config.resolver(
          deploymentStatus,
          unit,
          deploymentStatusState,
          deploymentStatusState,
        ),
      [@bs.optional]
      updatedAt: Config.resolver(deploymentStatus, unit, dateTime, dateTime),
    };
  };
  module OrganizationInvitation = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      createdAt:
        Config.resolver(organizationInvitation, unit, dateTime, dateTime),
      [@bs.optional]
      email:
        Config.resolver(
          organizationInvitation,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      id: Config.resolver(organizationInvitation, unit, string, string),
      [@bs.optional]
      invitationType:
        Config.resolver(
          organizationInvitation,
          unit,
          organizationInvitationType,
          organizationInvitationType,
        ),
      [@bs.optional]
      invitee:
        Config.resolver(
          organizationInvitation,
          unit,
          user,
          Js.Nullable.t(user),
        ),
      [@bs.optional]
      inviter: Config.resolver(organizationInvitation, unit, user, user),
      [@bs.optional]
      organization:
        Config.resolver(
          organizationInvitation,
          unit,
          organization,
          organization,
        ),
      [@bs.optional]
      role:
        Config.resolver(
          organizationInvitation,
          unit,
          organizationInvitationRole,
          organizationInvitationRole,
        ),
    };
  };
  module DismissPullRequestReviewPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          dismissPullRequestReviewPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequestReview:
        Config.resolver(
          dismissPullRequestReviewPayload,
          unit,
          pullRequestReview,
          pullRequestReview,
        ),
    };
  };
  module PullRequestReviewComment = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      author:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      body: Config.resolver(pullRequestReviewComment, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(pullRequestReviewComment, unit, hTML, hTML),
      [@bs.optional]
      bodyText:
        Config.resolver(pullRequestReviewComment, unit, string, string),
      [@bs.optional]
      commit: Config.resolver(pullRequestReviewComment, unit, commit, commit),
      [@bs.optional]
      createdAt:
        Config.resolver(pullRequestReviewComment, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail:
        Config.resolver(pullRequestReviewComment, unit, bool, bool),
      [@bs.optional]
      databaseId:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          int,
          Js.Nullable.t(int),
        ),
      [@bs.optional]
      diffHunk:
        Config.resolver(pullRequestReviewComment, unit, string, string),
      [@bs.optional]
      draftedAt:
        Config.resolver(pullRequestReviewComment, unit, dateTime, dateTime),
      [@bs.optional]
      editor:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      id: Config.resolver(pullRequestReviewComment, unit, string, string),
      [@bs.optional]
      includesCreatedEdit:
        Config.resolver(pullRequestReviewComment, unit, bool, bool),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      originalCommit:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      originalPosition:
        Config.resolver(pullRequestReviewComment, unit, int, int),
      [@bs.optional]
      outdated: Config.resolver(pullRequestReviewComment, unit, bool, bool),
      [@bs.optional]
      path: Config.resolver(pullRequestReviewComment, unit, string, string),
      [@bs.optional]
      position:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          int,
          Js.Nullable.t(int),
        ),
      [@bs.optional]
      publishedAt:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          pullRequest,
          pullRequest,
        ),
      [@bs.optional]
      pullRequestReview:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          pullRequestReview,
          Js.Nullable.t(pullRequestReview),
        ),
      [@bs.optional]
      reactionGroups:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          reactionGroup,
          Js.Nullable.t(array(reactionGroup)),
        ),
      [@bs.optional]
      reactions:
        Config.resolver(
          pullRequestReviewComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "content": Js.Nullable.t(abs_reactionContent),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(reactionOrder),
          },
          reactionConnection,
          reactionConnection,
        ),
      [@bs.optional]
      replyTo:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          pullRequestReviewComment,
          Js.Nullable.t(pullRequestReviewComment),
        ),
      [@bs.optional]
      repository:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          repository,
          repository,
        ),
      [@bs.optional]
      resourcePath: Config.resolver(pullRequestReviewComment, unit, uRI, uRI),
      [@bs.optional]
      state:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          pullRequestReviewCommentState,
          pullRequestReviewCommentState,
        ),
      [@bs.optional]
      updatedAt:
        Config.resolver(pullRequestReviewComment, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(pullRequestReviewComment, unit, uRI, uRI),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          pullRequestReviewComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanDelete:
        Config.resolver(pullRequestReviewComment, unit, bool, bool),
      [@bs.optional]
      viewerCanReact:
        Config.resolver(pullRequestReviewComment, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate:
        Config.resolver(pullRequestReviewComment, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          pullRequestReviewComment,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor:
        Config.resolver(pullRequestReviewComment, unit, bool, bool),
    };
  };
  module Organization = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      avatarUrl:
        Config.resolver(
          organization,
          {. "size": Js.Nullable.t(int)},
          uRI,
          uRI,
        ),
      [@bs.optional]
      databaseId:
        Config.resolver(organization, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      description:
        Config.resolver(organization, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      email:
        Config.resolver(organization, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(organization, unit, string, string),
      [@bs.optional]
      isVerified: Config.resolver(organization, unit, bool, bool),
      [@bs.optional]
      location:
        Config.resolver(organization, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      login: Config.resolver(organization, unit, string, string),
      [@bs.optional]
      members:
        Config.resolver(
          organization,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      name:
        Config.resolver(organization, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      newTeamResourcePath: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      newTeamUrl: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      organizationBillingEmail:
        Config.resolver(organization, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      pinnedRepositories:
        Config.resolver(
          organization,
          {
            .
            "affiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "ownerAffiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      project:
        Config.resolver(
          organization,
          {. "number": int},
          project,
          Js.Nullable.t(project),
        ),
      [@bs.optional]
      projects:
        Config.resolver(
          organization,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(projectOrder),
            "search": Js.Nullable.t(string),
            "states": Js.Nullable.t(array(abs_projectState)),
          },
          projectConnection,
          projectConnection,
        ),
      [@bs.optional]
      projectsResourcePath: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      projectsUrl: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      repositories:
        Config.resolver(
          organization,
          {
            .
            "affiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "isFork": Js.Nullable.t(bool),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "ownerAffiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      repository:
        Config.resolver(
          organization,
          {. "name": string},
          repository,
          Js.Nullable.t(repository),
        ),
      [@bs.optional]
      requiresTwoFactorAuthentication:
        Config.resolver(organization, unit, bool, Js.Nullable.t(bool)),
      [@bs.optional]
      resourcePath: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      samlIdentityProvider:
        Config.resolver(
          organization,
          unit,
          organizationIdentityProvider,
          Js.Nullable.t(organizationIdentityProvider),
        ),
      [@bs.optional]
      team:
        Config.resolver(
          organization,
          {. "slug": string},
          team,
          Js.Nullable.t(team),
        ),
      [@bs.optional]
      teams:
        Config.resolver(
          organization,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "ldapMapped": Js.Nullable.t(bool),
            "orderBy": Js.Nullable.t(teamOrder),
            "privacy": Js.Nullable.t(abs_teamPrivacy),
            "query": Js.Nullable.t(string),
            "role": Js.Nullable.t(abs_teamRole),
            "rootTeamsOnly": Js.Nullable.t(bool),
            "userLogins": Js.Nullable.t(array(string)),
          },
          teamConnection,
          teamConnection,
        ),
      [@bs.optional]
      teamsResourcePath: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      teamsUrl: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      url: Config.resolver(organization, unit, uRI, uRI),
      [@bs.optional]
      viewerCanAdminister: Config.resolver(organization, unit, bool, bool),
      [@bs.optional]
      viewerCanCreateProjects:
        Config.resolver(organization, unit, bool, bool),
      [@bs.optional]
      viewerCanCreateRepositories:
        Config.resolver(organization, unit, bool, bool),
      [@bs.optional]
      viewerCanCreateTeams: Config.resolver(organization, unit, bool, bool),
      [@bs.optional]
      viewerIsAMember: Config.resolver(organization, unit, bool, bool),
      [@bs.optional]
      websiteUrl:
        Config.resolver(organization, unit, uRI, Js.Nullable.t(uRI)),
    };
  };
  module CreateBranchProtectionRulePayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      branchProtectionRule:
        Config.resolver(
          createBranchProtectionRulePayload,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          createBranchProtectionRulePayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module Blob = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      abbreviatedOid: Config.resolver(blob, unit, string, string),
      [@bs.optional]
      byteSize: Config.resolver(blob, unit, int, int),
      [@bs.optional]
      commitResourcePath: Config.resolver(blob, unit, uRI, uRI),
      [@bs.optional]
      commitUrl: Config.resolver(blob, unit, uRI, uRI),
      [@bs.optional]
      id: Config.resolver(blob, unit, string, string),
      [@bs.optional]
      isBinary: Config.resolver(blob, unit, bool, bool),
      [@bs.optional]
      isTruncated: Config.resolver(blob, unit, bool, bool),
      [@bs.optional]
      oid: Config.resolver(blob, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      repository: Config.resolver(blob, unit, repository, repository),
      [@bs.optional]
      text: Config.resolver(blob, unit, string, Js.Nullable.t(string)),
    };
  };
  module MovedColumnsInProjectEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          movedColumnsInProjectEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(movedColumnsInProjectEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(
          movedColumnsInProjectEvent,
          unit,
          int,
          Js.Nullable.t(int),
        ),
      [@bs.optional]
      id: Config.resolver(movedColumnsInProjectEvent, unit, string, string),
    };
  };
  module TeamMemberConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          teamMemberConnection,
          unit,
          teamMemberEdge,
          Js.Nullable.t(array(Js.Nullable.t(teamMemberEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          teamMemberConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(teamMemberConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(teamMemberConnection, unit, int, int),
    };
  };
  module MarketplaceListingEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(marketplaceListingEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          marketplaceListingEdge,
          unit,
          marketplaceListing,
          Js.Nullable.t(marketplaceListing),
        ),
    };
  };
  module BranchProtectionRuleEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(branchProtectionRuleEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          branchProtectionRuleEdge,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
    };
  };
  module PushAllowanceEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(pushAllowanceEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pushAllowanceEdge,
          unit,
          pushAllowance,
          Js.Nullable.t(pushAllowance),
        ),
    };
  };
  module AcceptTopicSuggestionPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          acceptTopicSuggestionPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      topic:
        Config.resolver(acceptTopicSuggestionPayload, unit, topic, topic),
    };
  };
  module MoveProjectColumnPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          moveProjectColumnPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      columnEdge:
        Config.resolver(
          moveProjectColumnPayload,
          unit,
          projectColumnEdge,
          projectColumnEdge,
        ),
    };
  };
  module LockedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor: Config.resolver(lockedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(lockedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(lockedEvent, unit, string, string),
      [@bs.optional]
      lockReason:
        Config.resolver(
          lockedEvent,
          unit,
          lockReason,
          Js.Nullable.t(lockReason),
        ),
      [@bs.optional]
      lockable: Config.resolver(lockedEvent, unit, lockable, lockable),
    };
  };
  module ReviewDismissalAllowanceEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(reviewDismissalAllowanceEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          reviewDismissalAllowanceEdge,
          unit,
          reviewDismissalAllowance,
          Js.Nullable.t(reviewDismissalAllowance),
        ),
    };
  };
  module UnlockLockablePayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          unlockLockablePayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      unlockedRecord:
        Config.resolver(
          unlockLockablePayload,
          unit,
          lockable,
          Js.Nullable.t(lockable),
        ),
    };
  };
  module DeleteBranchProtectionRulePayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          deleteBranchProtectionRulePayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module UpdateTopicsPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updateTopicsPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      invalidTopicNames:
        Config.resolver(
          updateTopicsPayload,
          unit,
          string,
          Js.Nullable.t(array(string)),
        ),
      [@bs.optional]
      repository:
        Config.resolver(updateTopicsPayload, unit, repository, repository),
    };
  };
  module ProjectCardConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          projectCardConnection,
          unit,
          projectCardEdge,
          Js.Nullable.t(array(Js.Nullable.t(projectCardEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          projectCardConnection,
          unit,
          projectCard,
          Js.Nullable.t(array(Js.Nullable.t(projectCard))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(projectCardConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(projectCardConnection, unit, int, int),
    };
  };
  module PullRequestReviewEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(pullRequestReviewEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pullRequestReviewEdge,
          unit,
          pullRequestReview,
          Js.Nullable.t(pullRequestReview),
        ),
    };
  };
  module StargazerEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(stargazerEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(stargazerEdge, unit, user, user),
      [@bs.optional]
      starredAt: Config.resolver(stargazerEdge, unit, dateTime, dateTime),
    };
  };
  module DeployedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(deployedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(deployedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(deployedEvent, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      deployment:
        Config.resolver(deployedEvent, unit, deployment, deployment),
      [@bs.optional]
      id: Config.resolver(deployedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(deployedEvent, unit, pullRequest, pullRequest),
      [@bs.optional]
      ref: Config.resolver(deployedEvent, unit, ref, Js.Nullable.t(ref)),
    };
  };
  module Release = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      author: Config.resolver(release, unit, user, Js.Nullable.t(user)),
      [@bs.optional]
      createdAt: Config.resolver(release, unit, dateTime, dateTime),
      [@bs.optional]
      description:
        Config.resolver(release, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(release, unit, string, string),
      [@bs.optional]
      isDraft: Config.resolver(release, unit, bool, bool),
      [@bs.optional]
      isPrerelease: Config.resolver(release, unit, bool, bool),
      [@bs.optional]
      name: Config.resolver(release, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      publishedAt:
        Config.resolver(release, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      releaseAssets:
        Config.resolver(
          release,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "name": Js.Nullable.t(string),
          },
          releaseAssetConnection,
          releaseAssetConnection,
        ),
      [@bs.optional]
      resourcePath: Config.resolver(release, unit, uRI, uRI),
      [@bs.optional]
      tag: Config.resolver(release, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      updatedAt: Config.resolver(release, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(release, unit, uRI, uRI),
    };
  };
  module DeleteProjectCardPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          deleteProjectCardPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      column:
        Config.resolver(
          deleteProjectCardPayload,
          unit,
          projectColumn,
          projectColumn,
        ),
      [@bs.optional]
      deletedCardId:
        Config.resolver(deleteProjectCardPayload, unit, string, string),
    };
  };
  module RepositoryInvitation = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      id: Config.resolver(repositoryInvitation, unit, string, string),
      [@bs.optional]
      invitee: Config.resolver(repositoryInvitation, unit, user, user),
      [@bs.optional]
      inviter: Config.resolver(repositoryInvitation, unit, user, user),
      [@bs.optional]
      permission:
        Config.resolver(
          repositoryInvitation,
          unit,
          repositoryPermission,
          repositoryPermission,
        ),
      [@bs.optional]
      repository:
        Config.resolver(
          repositoryInvitation,
          unit,
          repositoryInfo,
          Js.Nullable.t(repositoryInfo),
        ),
    };
  };
  module ProjectColumn = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cards:
        Config.resolver(
          projectColumn,
          {
            .
            "after": Js.Nullable.t(string),
            "archivedStates":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_projectCardArchivedState)),
              ),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          projectCardConnection,
          projectCardConnection,
        ),
      [@bs.optional]
      createdAt: Config.resolver(projectColumn, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(projectColumn, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(projectColumn, unit, string, string),
      [@bs.optional]
      name: Config.resolver(projectColumn, unit, string, string),
      [@bs.optional]
      project: Config.resolver(projectColumn, unit, project, project),
      [@bs.optional]
      purpose:
        Config.resolver(
          projectColumn,
          unit,
          projectColumnPurpose,
          Js.Nullable.t(projectColumnPurpose),
        ),
      [@bs.optional]
      resourcePath: Config.resolver(projectColumn, unit, uRI, uRI),
      [@bs.optional]
      updatedAt: Config.resolver(projectColumn, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(projectColumn, unit, uRI, uRI),
    };
  };
  module LabelConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          labelConnection,
          unit,
          labelEdge,
          Js.Nullable.t(array(Js.Nullable.t(labelEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          labelConnection,
          unit,
          label,
          Js.Nullable.t(array(Js.Nullable.t(label))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(labelConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(labelConnection, unit, int, int),
    };
  };
  module MilestoneEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(milestoneEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          milestoneEdge,
          unit,
          milestone,
          Js.Nullable.t(milestone),
        ),
    };
  };
  module RepositoryTopicEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(repositoryTopicEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          repositoryTopicEdge,
          unit,
          repositoryTopic,
          Js.Nullable.t(repositoryTopic),
        ),
    };
  };
  module UpdateProjectPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updateProjectPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      project: Config.resolver(updateProjectPayload, unit, project, project),
    };
  };
  module Repository = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      assignableUsers:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      branchProtectionRules:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          branchProtectionRuleConnection,
          branchProtectionRuleConnection,
        ),
      [@bs.optional]
      codeOfConduct:
        Config.resolver(
          repository,
          unit,
          codeOfConduct,
          Js.Nullable.t(codeOfConduct),
        ),
      [@bs.optional]
      collaborators:
        Config.resolver(
          repository,
          {
            .
            "affiliation": Js.Nullable.t(abs_collaboratorAffiliation),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          repositoryCollaboratorConnection,
          Js.Nullable.t(repositoryCollaboratorConnection),
        ),
      [@bs.optional]
      commitComments:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          commitCommentConnection,
          commitCommentConnection,
        ),
      [@bs.optional]
      createdAt: Config.resolver(repository, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId: Config.resolver(repository, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      defaultBranchRef:
        Config.resolver(repository, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      deployKeys:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          deployKeyConnection,
          deployKeyConnection,
        ),
      [@bs.optional]
      deployments:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "environments": Js.Nullable.t(array(string)),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          deploymentConnection,
          deploymentConnection,
        ),
      [@bs.optional]
      description:
        Config.resolver(repository, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      descriptionHTML: Config.resolver(repository, unit, hTML, hTML),
      [@bs.optional]
      diskUsage: Config.resolver(repository, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      forkCount: Config.resolver(repository, unit, int, int),
      [@bs.optional]
      forks:
        Config.resolver(
          repository,
          {
            .
            "affiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "ownerAffiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      hasIssuesEnabled: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      hasWikiEnabled: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      homepageUrl:
        Config.resolver(repository, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      id: Config.resolver(repository, unit, string, string),
      [@bs.optional]
      isArchived: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      isFork: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      isLocked: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      isMirror: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      isPrivate: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      issue:
        Config.resolver(
          repository,
          {. "number": int},
          issue,
          Js.Nullable.t(issue),
        ),
      [@bs.optional]
      issueOrPullRequest:
        Config.resolver(
          repository,
          {. "number": int},
          issueOrPullRequest,
          Js.Nullable.t(issueOrPullRequest),
        ),
      [@bs.optional]
      issues:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_issueState)),
          },
          issueConnection,
          issueConnection,
        ),
      [@bs.optional]
      label:
        Config.resolver(
          repository,
          {. "name": string},
          label,
          Js.Nullable.t(label),
        ),
      [@bs.optional]
      labels:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "query": Js.Nullable.t(string),
          },
          labelConnection,
          Js.Nullable.t(labelConnection),
        ),
      [@bs.optional]
      languages:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(languageOrder),
          },
          languageConnection,
          Js.Nullable.t(languageConnection),
        ),
      [@bs.optional]
      licenseInfo:
        Config.resolver(repository, unit, license, Js.Nullable.t(license)),
      [@bs.optional]
      lockReason:
        Config.resolver(
          repository,
          unit,
          repositoryLockReason,
          Js.Nullable.t(repositoryLockReason),
        ),
      [@bs.optional]
      mentionableUsers:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
      [@bs.optional]
      mergeCommitAllowed: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      milestone:
        Config.resolver(
          repository,
          {. "number": int},
          milestone,
          Js.Nullable.t(milestone),
        ),
      [@bs.optional]
      milestones:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(milestoneOrder),
            "states": Js.Nullable.t(array(abs_milestoneState)),
          },
          milestoneConnection,
          Js.Nullable.t(milestoneConnection),
        ),
      [@bs.optional]
      mirrorUrl: Config.resolver(repository, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      name: Config.resolver(repository, unit, string, string),
      [@bs.optional]
      nameWithOwner: Config.resolver(repository, unit, string, string),
      [@bs.optional] [@bs.as "object"]
      object_:
        Config.resolver(
          repository,
          {
            .
            "expression": Js.Nullable.t(string),
            "oid": Js.Nullable.t(gitObjectID),
          },
          gitObject,
          Js.Nullable.t(gitObject),
        ),
      [@bs.optional]
      owner:
        Config.resolver(repository, unit, repositoryOwner, repositoryOwner),
      [@bs.optional]
      parent:
        Config.resolver(
          repository,
          unit,
          repository,
          Js.Nullable.t(repository),
        ),
      [@bs.optional]
      primaryLanguage:
        Config.resolver(repository, unit, language, Js.Nullable.t(language)),
      [@bs.optional]
      project:
        Config.resolver(
          repository,
          {. "number": int},
          project,
          Js.Nullable.t(project),
        ),
      [@bs.optional]
      projects:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(projectOrder),
            "search": Js.Nullable.t(string),
            "states": Js.Nullable.t(array(abs_projectState)),
          },
          projectConnection,
          projectConnection,
        ),
      [@bs.optional]
      projectsResourcePath: Config.resolver(repository, unit, uRI, uRI),
      [@bs.optional]
      projectsUrl: Config.resolver(repository, unit, uRI, uRI),
      [@bs.optional]
      protectedBranches:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          protectedBranchConnection,
          protectedBranchConnection,
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          repository,
          {. "number": int},
          pullRequest,
          Js.Nullable.t(pullRequest),
        ),
      [@bs.optional]
      pullRequests:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "baseRefName": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "headRefName": Js.Nullable.t(string),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_pullRequestState)),
          },
          pullRequestConnection,
          pullRequestConnection,
        ),
      [@bs.optional]
      pushedAt:
        Config.resolver(repository, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      rebaseMergeAllowed: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      ref:
        Config.resolver(
          repository,
          {. "qualifiedName": string},
          ref,
          Js.Nullable.t(ref),
        ),
      [@bs.optional]
      refs:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "direction": Js.Nullable.t(abs_orderDirection),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(refOrder),
            "refPrefix": string,
          },
          refConnection,
          Js.Nullable.t(refConnection),
        ),
      [@bs.optional]
      release:
        Config.resolver(
          repository,
          {. "tagName": string},
          release,
          Js.Nullable.t(release),
        ),
      [@bs.optional]
      releases:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(releaseOrder),
          },
          releaseConnection,
          releaseConnection,
        ),
      [@bs.optional]
      repositoryTopics:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          repositoryTopicConnection,
          repositoryTopicConnection,
        ),
      [@bs.optional]
      resourcePath: Config.resolver(repository, unit, uRI, uRI),
      [@bs.optional]
      shortDescriptionHTML:
        Config.resolver(
          repository,
          {. "limit": Js.Nullable.t(int)},
          hTML,
          hTML,
        ),
      [@bs.optional]
      squashMergeAllowed: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      sshUrl: Config.resolver(repository, unit, gitSSHRemote, gitSSHRemote),
      [@bs.optional]
      stargazers:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(starOrder),
          },
          stargazerConnection,
          stargazerConnection,
        ),
      [@bs.optional]
      updatedAt: Config.resolver(repository, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(repository, unit, uRI, uRI),
      [@bs.optional]
      viewerCanAdminister: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      viewerCanCreateProjects: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      viewerCanSubscribe: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdateTopics: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      viewerHasStarred: Config.resolver(repository, unit, bool, bool),
      [@bs.optional]
      viewerPermission:
        Config.resolver(
          repository,
          unit,
          repositoryPermission,
          Js.Nullable.t(repositoryPermission),
        ),
      [@bs.optional]
      viewerSubscription:
        Config.resolver(
          repository,
          unit,
          subscriptionState,
          Js.Nullable.t(subscriptionState),
        ),
      [@bs.optional]
      watchers:
        Config.resolver(
          repository,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userConnection,
          userConnection,
        ),
    };
  };
  module PullRequestReviewThread = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      comments:
        Config.resolver(
          pullRequestReviewThread,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          pullRequestReviewCommentConnection,
          pullRequestReviewCommentConnection,
        ),
      [@bs.optional]
      id: Config.resolver(pullRequestReviewThread, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          pullRequestReviewThread,
          unit,
          pullRequest,
          pullRequest,
        ),
      [@bs.optional]
      repository:
        Config.resolver(
          pullRequestReviewThread,
          unit,
          repository,
          repository,
        ),
    };
  };
  module BranchProtectionRuleConflict = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      branchProtectionRule:
        Config.resolver(
          branchProtectionRuleConflict,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
      [@bs.optional]
      conflictingBranchProtectionRule:
        Config.resolver(
          branchProtectionRuleConflict,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
      [@bs.optional]
      ref:
        Config.resolver(
          branchProtectionRuleConflict,
          unit,
          ref,
          Js.Nullable.t(ref),
        ),
    };
  };
  module AddReactionPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          addReactionPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      reaction: Config.resolver(addReactionPayload, unit, reaction, reaction),
      [@bs.optional]
      subject:
        Config.resolver(addReactionPayload, unit, reactable, reactable),
    };
  };
  module BranchProtectionRuleConflictEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(
          branchProtectionRuleConflictEdge,
          unit,
          string,
          string,
        ),
      [@bs.optional]
      node:
        Config.resolver(
          branchProtectionRuleConflictEdge,
          unit,
          branchProtectionRuleConflict,
          Js.Nullable.t(branchProtectionRuleConflict),
        ),
    };
  };
  module License = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      body: Config.resolver(license, unit, string, string),
      [@bs.optional]
      conditions:
        Config.resolver(
          license,
          unit,
          licenseRule,
          array(Js.Nullable.t(licenseRule)),
        ),
      [@bs.optional]
      description:
        Config.resolver(license, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      featured: Config.resolver(license, unit, bool, bool),
      [@bs.optional]
      hidden: Config.resolver(license, unit, bool, bool),
      [@bs.optional]
      id: Config.resolver(license, unit, string, string),
      [@bs.optional]
      implementation:
        Config.resolver(license, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      key: Config.resolver(license, unit, string, string),
      [@bs.optional]
      limitations:
        Config.resolver(
          license,
          unit,
          licenseRule,
          array(Js.Nullable.t(licenseRule)),
        ),
      [@bs.optional]
      name: Config.resolver(license, unit, string, string),
      [@bs.optional]
      nickname:
        Config.resolver(license, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      permissions:
        Config.resolver(
          license,
          unit,
          licenseRule,
          array(Js.Nullable.t(licenseRule)),
        ),
      [@bs.optional]
      pseudoLicense: Config.resolver(license, unit, bool, bool),
      [@bs.optional]
      spdxId: Config.resolver(license, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      url: Config.resolver(license, unit, uRI, Js.Nullable.t(uRI)),
    };
  };
  module HeadRefDeletedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          headRefDeletedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(headRefDeletedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      headRef:
        Config.resolver(headRefDeletedEvent, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      headRefName: Config.resolver(headRefDeletedEvent, unit, string, string),
      [@bs.optional]
      id: Config.resolver(headRefDeletedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(headRefDeletedEvent, unit, pullRequest, pullRequest),
    };
  };
  module RemovedFromProjectEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          removedFromProjectEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(removedFromProjectEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(
          removedFromProjectEvent,
          unit,
          int,
          Js.Nullable.t(int),
        ),
      [@bs.optional]
      id: Config.resolver(removedFromProjectEvent, unit, string, string),
    };
  };
  module IssueEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(issueEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(issueEdge, unit, issue, Js.Nullable.t(issue)),
    };
  };
  module ReviewRequestRemovedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          reviewRequestRemovedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(reviewRequestRemovedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(reviewRequestRemovedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          reviewRequestRemovedEvent,
          unit,
          pullRequest,
          pullRequest,
        ),
      [@bs.optional]
      requestedReviewer:
        Config.resolver(
          reviewRequestRemovedEvent,
          unit,
          requestedReviewer,
          Js.Nullable.t(requestedReviewer),
        ),
    };
  };
  module ReactingUserEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(reactingUserEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(reactingUserEdge, unit, user, user),
      [@bs.optional]
      reactedAt: Config.resolver(reactingUserEdge, unit, dateTime, dateTime),
    };
  };
  module UnsubscribedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          unsubscribedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt: Config.resolver(unsubscribedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(unsubscribedEvent, unit, string, string),
      [@bs.optional]
      subscribable:
        Config.resolver(unsubscribedEvent, unit, subscribable, subscribable),
    };
  };
  module MilestoneConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          milestoneConnection,
          unit,
          milestoneEdge,
          Js.Nullable.t(array(Js.Nullable.t(milestoneEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          milestoneConnection,
          unit,
          milestone,
          Js.Nullable.t(array(Js.Nullable.t(milestone))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(milestoneConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(milestoneConnection, unit, int, int),
    };
  };
  module PushAllowanceConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          pushAllowanceConnection,
          unit,
          pushAllowanceEdge,
          Js.Nullable.t(array(Js.Nullable.t(pushAllowanceEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          pushAllowanceConnection,
          unit,
          pushAllowance,
          Js.Nullable.t(array(Js.Nullable.t(pushAllowance))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(pushAllowanceConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(pushAllowanceConnection, unit, int, int),
    };
  };
  module BranchProtectionRuleConflictConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          branchProtectionRuleConflictConnection,
          unit,
          branchProtectionRuleConflictEdge,
          Js.Nullable.t(
            array(Js.Nullable.t(branchProtectionRuleConflictEdge)),
          ),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          branchProtectionRuleConflictConnection,
          unit,
          branchProtectionRuleConflict,
          Js.Nullable.t(array(Js.Nullable.t(branchProtectionRuleConflict))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          branchProtectionRuleConflictConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(
          branchProtectionRuleConflictConnection,
          unit,
          int,
          int,
        ),
    };
  };
  module UpdateProjectCardPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updateProjectCardPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      projectCard:
        Config.resolver(
          updateProjectCardPayload,
          unit,
          projectCard,
          projectCard,
        ),
    };
  };
  module CodeOfConduct = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      body:
        Config.resolver(codeOfConduct, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      key: Config.resolver(codeOfConduct, unit, string, string),
      [@bs.optional]
      name: Config.resolver(codeOfConduct, unit, string, string),
      [@bs.optional]
      url: Config.resolver(codeOfConduct, unit, uRI, Js.Nullable.t(uRI)),
    };
  };
  module TopicConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          topicConnection,
          unit,
          topicEdge,
          Js.Nullable.t(array(Js.Nullable.t(topicEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          topicConnection,
          unit,
          topic,
          Js.Nullable.t(array(Js.Nullable.t(topic))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(topicConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(topicConnection, unit, int, int),
    };
  };
  module PullRequestConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          pullRequestConnection,
          unit,
          pullRequestEdge,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          pullRequestConnection,
          unit,
          pullRequest,
          Js.Nullable.t(array(Js.Nullable.t(pullRequest))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(pullRequestConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(pullRequestConnection, unit, int, int),
    };
  };
  module FollowingConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          followingConnection,
          unit,
          userEdge,
          Js.Nullable.t(array(Js.Nullable.t(userEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          followingConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(followingConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(followingConnection, unit, int, int),
    };
  };
  module DeclineTopicSuggestionPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          declineTopicSuggestionPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      topic:
        Config.resolver(declineTopicSuggestionPayload, unit, topic, topic),
    };
  };
  module Gist = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      comments:
        Config.resolver(
          gist,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          gistCommentConnection,
          gistCommentConnection,
        ),
      [@bs.optional]
      createdAt: Config.resolver(gist, unit, dateTime, dateTime),
      [@bs.optional]
      description:
        Config.resolver(gist, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(gist, unit, string, string),
      [@bs.optional]
      isPublic: Config.resolver(gist, unit, bool, bool),
      [@bs.optional]
      name: Config.resolver(gist, unit, string, string),
      [@bs.optional]
      owner:
        Config.resolver(
          gist,
          unit,
          repositoryOwner,
          Js.Nullable.t(repositoryOwner),
        ),
      [@bs.optional]
      pushedAt:
        Config.resolver(gist, unit, dateTime, Js.Nullable.t(dateTime)),
      [@bs.optional]
      stargazers:
        Config.resolver(
          gist,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(starOrder),
          },
          stargazerConnection,
          stargazerConnection,
        ),
      [@bs.optional]
      updatedAt: Config.resolver(gist, unit, dateTime, dateTime),
      [@bs.optional]
      viewerHasStarred: Config.resolver(gist, unit, bool, bool),
    };
  };
  module Ref = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      associatedPullRequests:
        Config.resolver(
          ref,
          {
            .
            "after": Js.Nullable.t(string),
            "baseRefName": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "headRefName": Js.Nullable.t(string),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_pullRequestState)),
          },
          pullRequestConnection,
          pullRequestConnection,
        ),
      [@bs.optional]
      id: Config.resolver(ref, unit, string, string),
      [@bs.optional]
      name: Config.resolver(ref, unit, string, string),
      [@bs.optional]
      prefix: Config.resolver(ref, unit, string, string),
      [@bs.optional]
      repository: Config.resolver(ref, unit, repository, repository),
      [@bs.optional]
      target: Config.resolver(ref, unit, gitObject, gitObject),
    };
  };
  module PublicKeyConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          publicKeyConnection,
          unit,
          publicKeyEdge,
          Js.Nullable.t(array(Js.Nullable.t(publicKeyEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          publicKeyConnection,
          unit,
          publicKey,
          Js.Nullable.t(array(Js.Nullable.t(publicKey))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(publicKeyConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(publicKeyConnection, unit, int, int),
    };
  };
  module ReactionEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(reactionEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          reactionEdge,
          unit,
          reaction,
          Js.Nullable.t(reaction),
        ),
    };
  };
  module MilestonedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(milestonedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(milestonedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(milestonedEvent, unit, string, string),
      [@bs.optional]
      milestoneTitle: Config.resolver(milestonedEvent, unit, string, string),
      [@bs.optional]
      subject:
        Config.resolver(milestonedEvent, unit, milestoneItem, milestoneItem),
    };
  };
  module User = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      avatarUrl:
        Config.resolver(user, {. "size": Js.Nullable.t(int)}, uRI, uRI),
      [@bs.optional]
      bio: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      bioHTML: Config.resolver(user, unit, hTML, hTML),
      [@bs.optional]
      commitComments:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          commitCommentConnection,
          commitCommentConnection,
        ),
      [@bs.optional]
      company: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      companyHTML: Config.resolver(user, unit, hTML, hTML),
      [@bs.optional]
      createdAt: Config.resolver(user, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId: Config.resolver(user, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      email: Config.resolver(user, unit, string, string),
      [@bs.optional]
      followers:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          followerConnection,
          followerConnection,
        ),
      [@bs.optional]
      following:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          followingConnection,
          followingConnection,
        ),
      [@bs.optional]
      gist:
        Config.resolver(
          user,
          {. "name": string},
          gist,
          Js.Nullable.t(gist),
        ),
      [@bs.optional]
      gistComments:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          gistCommentConnection,
          gistCommentConnection,
        ),
      [@bs.optional]
      gists:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(gistOrder),
            "privacy": Js.Nullable.t(abs_gistPrivacy),
          },
          gistConnection,
          gistConnection,
        ),
      [@bs.optional]
      id: Config.resolver(user, unit, string, string),
      [@bs.optional]
      isBountyHunter: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      isCampusExpert: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      isDeveloperProgramMember: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      isEmployee: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      isHireable: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      isSiteAdmin: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      isViewer: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      issueComments:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          issueCommentConnection,
          issueCommentConnection,
        ),
      [@bs.optional]
      issues:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_issueState)),
          },
          issueConnection,
          issueConnection,
        ),
      [@bs.optional]
      location: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      login: Config.resolver(user, unit, string, string),
      [@bs.optional]
      name: Config.resolver(user, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      organization:
        Config.resolver(
          user,
          {. "login": string},
          organization,
          Js.Nullable.t(organization),
        ),
      [@bs.optional]
      organizations:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          organizationConnection,
          organizationConnection,
        ),
      [@bs.optional]
      pinnedRepositories:
        Config.resolver(
          user,
          {
            .
            "affiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "ownerAffiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      publicKeys:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          publicKeyConnection,
          publicKeyConnection,
        ),
      [@bs.optional]
      pullRequests:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "baseRefName": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "headRefName": Js.Nullable.t(string),
            "labels": Js.Nullable.t(array(string)),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(issueOrder),
            "states": Js.Nullable.t(array(abs_pullRequestState)),
          },
          pullRequestConnection,
          pullRequestConnection,
        ),
      [@bs.optional]
      repositories:
        Config.resolver(
          user,
          {
            .
            "affiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "isFork": Js.Nullable.t(bool),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "ownerAffiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      repositoriesContributedTo:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "contributionTypes":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryContributionType)),
              ),
            "first": Js.Nullable.t(int),
            "includeUserRepositories": Js.Nullable.t(bool),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      repository:
        Config.resolver(
          user,
          {. "name": string},
          repository,
          Js.Nullable.t(repository),
        ),
      [@bs.optional]
      resourcePath: Config.resolver(user, unit, uRI, uRI),
      [@bs.optional]
      starredRepositories:
        Config.resolver(
          user,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(starOrder),
            "ownedByViewer": Js.Nullable.t(bool),
          },
          starredRepositoryConnection,
          starredRepositoryConnection,
        ),
      [@bs.optional]
      updatedAt: Config.resolver(user, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(user, unit, uRI, uRI),
      [@bs.optional]
      viewerCanFollow: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      viewerIsFollowing: Config.resolver(user, unit, bool, bool),
      [@bs.optional]
      watching:
        Config.resolver(
          user,
          {
            .
            "affiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "isLocked": Js.Nullable.t(bool),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(repositoryOrder),
            "ownerAffiliations":
              Js.Nullable.t(
                array(Js.Nullable.t(abs_repositoryAffiliation)),
              ),
            "privacy": Js.Nullable.t(abs_repositoryPrivacy),
          },
          repositoryConnection,
          repositoryConnection,
        ),
      [@bs.optional]
      websiteUrl: Config.resolver(user, unit, uRI, Js.Nullable.t(uRI)),
    };
  };
  module RemoveReactionPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          removeReactionPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      reaction:
        Config.resolver(removeReactionPayload, unit, reaction, reaction),
      [@bs.optional]
      subject:
        Config.resolver(removeReactionPayload, unit, reactable, reactable),
    };
  };
  module CommitCommentThread = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      comments:
        Config.resolver(
          commitCommentThread,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          commitCommentConnection,
          commitCommentConnection,
        ),
      [@bs.optional]
      commit: Config.resolver(commitCommentThread, unit, commit, commit),
      [@bs.optional]
      id: Config.resolver(commitCommentThread, unit, string, string),
      [@bs.optional]
      path:
        Config.resolver(
          commitCommentThread,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      position:
        Config.resolver(commitCommentThread, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      repository:
        Config.resolver(commitCommentThread, unit, repository, repository),
    };
  };
  module UpdateBranchProtectionRulePayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      branchProtectionRule:
        Config.resolver(
          updateBranchProtectionRulePayload,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updateBranchProtectionRulePayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
    };
  };
  module IssueComment = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      author:
        Config.resolver(issueComment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          issueComment,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      body: Config.resolver(issueComment, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(issueComment, unit, hTML, hTML),
      [@bs.optional]
      bodyText: Config.resolver(issueComment, unit, string, string),
      [@bs.optional]
      createdAt: Config.resolver(issueComment, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail: Config.resolver(issueComment, unit, bool, bool),
      [@bs.optional]
      databaseId:
        Config.resolver(issueComment, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      editor:
        Config.resolver(issueComment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      id: Config.resolver(issueComment, unit, string, string),
      [@bs.optional]
      includesCreatedEdit: Config.resolver(issueComment, unit, bool, bool),
      [@bs.optional]
      issue: Config.resolver(issueComment, unit, issue, issue),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(
          issueComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      publishedAt:
        Config.resolver(
          issueComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          issueComment,
          unit,
          pullRequest,
          Js.Nullable.t(pullRequest),
        ),
      [@bs.optional]
      reactionGroups:
        Config.resolver(
          issueComment,
          unit,
          reactionGroup,
          Js.Nullable.t(array(reactionGroup)),
        ),
      [@bs.optional]
      reactions:
        Config.resolver(
          issueComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "content": Js.Nullable.t(abs_reactionContent),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
            "orderBy": Js.Nullable.t(reactionOrder),
          },
          reactionConnection,
          reactionConnection,
        ),
      [@bs.optional]
      repository: Config.resolver(issueComment, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(issueComment, unit, uRI, uRI),
      [@bs.optional]
      updatedAt: Config.resolver(issueComment, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(issueComment, unit, uRI, uRI),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          issueComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanDelete: Config.resolver(issueComment, unit, bool, bool),
      [@bs.optional]
      viewerCanReact: Config.resolver(issueComment, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(issueComment, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          issueComment,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor: Config.resolver(issueComment, unit, bool, bool),
    };
  };
  module DemilestonedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          demilestonedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt: Config.resolver(demilestonedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(demilestonedEvent, unit, string, string),
      [@bs.optional]
      milestoneTitle:
        Config.resolver(demilestonedEvent, unit, string, string),
      [@bs.optional]
      subject:
        Config.resolver(
          demilestonedEvent,
          unit,
          milestoneItem,
          milestoneItem,
        ),
    };
  };
  module RenamedTitleEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          renamedTitleEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt: Config.resolver(renamedTitleEvent, unit, dateTime, dateTime),
      [@bs.optional]
      currentTitle: Config.resolver(renamedTitleEvent, unit, string, string),
      [@bs.optional]
      id: Config.resolver(renamedTitleEvent, unit, string, string),
      [@bs.optional]
      previousTitle: Config.resolver(renamedTitleEvent, unit, string, string),
      [@bs.optional]
      subject:
        Config.resolver(
          renamedTitleEvent,
          unit,
          renamedTitleSubject,
          renamedTitleSubject,
        ),
    };
  };
  module DeletePullRequestReviewPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          deletePullRequestReviewPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequestReview:
        Config.resolver(
          deletePullRequestReviewPayload,
          unit,
          pullRequestReview,
          pullRequestReview,
        ),
    };
  };
  module SearchResultItemEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(searchResultItemEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          searchResultItemEdge,
          unit,
          searchResultItem,
          Js.Nullable.t(searchResultItem),
        ),
      [@bs.optional]
      textMatches:
        Config.resolver(
          searchResultItemEdge,
          unit,
          textMatch,
          Js.Nullable.t(array(Js.Nullable.t(textMatch))),
        ),
    };
  };
  module ReviewDismissalAllowanceConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          reviewDismissalAllowanceConnection,
          unit,
          reviewDismissalAllowanceEdge,
          Js.Nullable.t(array(Js.Nullable.t(reviewDismissalAllowanceEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          reviewDismissalAllowanceConnection,
          unit,
          reviewDismissalAllowance,
          Js.Nullable.t(array(Js.Nullable.t(reviewDismissalAllowance))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          reviewDismissalAllowanceConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(reviewDismissalAllowanceConnection, unit, int, int),
    };
  };
  module HeadRefRestoredEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          headRefRestoredEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(headRefRestoredEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(headRefRestoredEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(headRefRestoredEvent, unit, pullRequest, pullRequest),
    };
  };
  module TeamMemberEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(teamMemberEdge, unit, string, string),
      [@bs.optional]
      memberAccessResourcePath:
        Config.resolver(teamMemberEdge, unit, uRI, uRI),
      [@bs.optional]
      memberAccessUrl: Config.resolver(teamMemberEdge, unit, uRI, uRI),
      [@bs.optional]
      node: Config.resolver(teamMemberEdge, unit, user, user),
      [@bs.optional]
      role:
        Config.resolver(teamMemberEdge, unit, teamMemberRole, teamMemberRole),
    };
  };
  module RequestReviewsPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          requestReviewsPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          requestReviewsPayload,
          unit,
          pullRequest,
          pullRequest,
        ),
      [@bs.optional]
      requestedReviewersEdge:
        Config.resolver(requestReviewsPayload, unit, userEdge, userEdge),
    };
  };
  module DeploymentEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(deploymentEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          deploymentEdge,
          unit,
          deployment,
          Js.Nullable.t(deployment),
        ),
    };
  };
  module DeleteProjectColumnPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          deleteProjectColumnPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      deletedColumnId:
        Config.resolver(deleteProjectColumnPayload, unit, string, string),
      [@bs.optional]
      project:
        Config.resolver(deleteProjectColumnPayload, unit, project, project),
    };
  };
  module UserContentEdit = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      createdAt: Config.resolver(userContentEdit, unit, dateTime, dateTime),
      [@bs.optional]
      deletedAt:
        Config.resolver(
          userContentEdit,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      deletedBy:
        Config.resolver(userContentEdit, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      diff:
        Config.resolver(
          userContentEdit,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      editedAt: Config.resolver(userContentEdit, unit, dateTime, dateTime),
      [@bs.optional]
      editor:
        Config.resolver(userContentEdit, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      id: Config.resolver(userContentEdit, unit, string, string),
      [@bs.optional]
      updatedAt: Config.resolver(userContentEdit, unit, dateTime, dateTime),
    };
  };
  module PullRequestTimelineConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          pullRequestTimelineConnection,
          unit,
          pullRequestTimelineItemEdge,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestTimelineItemEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          pullRequestTimelineConnection,
          unit,
          pullRequestTimelineItem,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestTimelineItem))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          pullRequestTimelineConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(pullRequestTimelineConnection, unit, int, int),
    };
  };
  module AddProjectColumnPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          addProjectColumnPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      columnEdge:
        Config.resolver(
          addProjectColumnPayload,
          unit,
          projectColumnEdge,
          projectColumnEdge,
        ),
      [@bs.optional]
      project:
        Config.resolver(addProjectColumnPayload, unit, project, project),
    };
  };
  module UnassignedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(unassignedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      assignable:
        Config.resolver(unassignedEvent, unit, assignable, assignable),
      [@bs.optional]
      createdAt: Config.resolver(unassignedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(unassignedEvent, unit, string, string),
      [@bs.optional]
      user:
        Config.resolver(unassignedEvent, unit, user, Js.Nullable.t(user)),
    };
  };
  module PullRequestEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(pullRequestEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pullRequestEdge,
          unit,
          pullRequest,
          Js.Nullable.t(pullRequest),
        ),
    };
  };
  module ProjectConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          projectConnection,
          unit,
          projectEdge,
          Js.Nullable.t(array(Js.Nullable.t(projectEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          projectConnection,
          unit,
          project,
          Js.Nullable.t(array(Js.Nullable.t(project))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(projectConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(projectConnection, unit, int, int),
    };
  };
  module OrganizationIdentityProvider = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      digestMethod:
        Config.resolver(
          organizationIdentityProvider,
          unit,
          uRI,
          Js.Nullable.t(uRI),
        ),
      [@bs.optional]
      externalIdentities:
        Config.resolver(
          organizationIdentityProvider,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          externalIdentityConnection,
          externalIdentityConnection,
        ),
      [@bs.optional]
      id: Config.resolver(organizationIdentityProvider, unit, string, string),
      [@bs.optional]
      idpCertificate:
        Config.resolver(
          organizationIdentityProvider,
          unit,
          x509Certificate,
          Js.Nullable.t(x509Certificate),
        ),
      [@bs.optional]
      issuer:
        Config.resolver(
          organizationIdentityProvider,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      organization:
        Config.resolver(
          organizationIdentityProvider,
          unit,
          organization,
          Js.Nullable.t(organization),
        ),
      [@bs.optional]
      signatureMethod:
        Config.resolver(
          organizationIdentityProvider,
          unit,
          uRI,
          Js.Nullable.t(uRI),
        ),
      [@bs.optional]
      ssoUrl:
        Config.resolver(
          organizationIdentityProvider,
          unit,
          uRI,
          Js.Nullable.t(uRI),
        ),
    };
  };
  module BaseRefChangedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          baseRefChangedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(baseRefChangedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(baseRefChangedEvent, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(baseRefChangedEvent, unit, string, string),
    };
  };
  module HeadRefForcePushedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          headRefForcePushedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      afterCommit:
        Config.resolver(
          headRefForcePushedEvent,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      beforeCommit:
        Config.resolver(
          headRefForcePushedEvent,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(headRefForcePushedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(headRefForcePushedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          headRefForcePushedEvent,
          unit,
          pullRequest,
          pullRequest,
        ),
      [@bs.optional]
      ref:
        Config.resolver(
          headRefForcePushedEvent,
          unit,
          ref,
          Js.Nullable.t(ref),
        ),
    };
  };
  module DeploymentStatusEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(deploymentStatusEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          deploymentStatusEdge,
          unit,
          deploymentStatus,
          Js.Nullable.t(deploymentStatus),
        ),
    };
  };
  module RepositoryEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(repositoryEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          repositoryEdge,
          unit,
          repository,
          Js.Nullable.t(repository),
        ),
    };
  };
  module PublicKeyEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(publicKeyEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          publicKeyEdge,
          unit,
          publicKey,
          Js.Nullable.t(publicKey),
        ),
    };
  };
  module AddStarPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(addStarPayload, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      starrable: Config.resolver(addStarPayload, unit, starrable, starrable),
    };
  };
  module DeleteProjectPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          deleteProjectPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      owner:
        Config.resolver(
          deleteProjectPayload,
          unit,
          projectOwner,
          projectOwner,
        ),
    };
  };
  module Language = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      color: Config.resolver(language, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(language, unit, string, string),
      [@bs.optional]
      name: Config.resolver(language, unit, string, string),
    };
  };
  module RepositoryCollaboratorEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(repositoryCollaboratorEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(repositoryCollaboratorEdge, unit, user, user),
      [@bs.optional]
      permission:
        Config.resolver(
          repositoryCollaboratorEdge,
          unit,
          repositoryPermission,
          repositoryPermission,
        ),
    };
  };
  module Deployment = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      commit:
        Config.resolver(deployment, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      createdAt: Config.resolver(deployment, unit, dateTime, dateTime),
      [@bs.optional]
      creator:
        Config.resolver(deployment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      databaseId: Config.resolver(deployment, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      description:
        Config.resolver(deployment, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      environment:
        Config.resolver(deployment, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(deployment, unit, string, string),
      [@bs.optional]
      latestStatus:
        Config.resolver(
          deployment,
          unit,
          deploymentStatus,
          Js.Nullable.t(deploymentStatus),
        ),
      [@bs.optional]
      payload:
        Config.resolver(deployment, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      ref: Config.resolver(deployment, unit, ref, Js.Nullable.t(ref)),
      [@bs.optional]
      repository: Config.resolver(deployment, unit, repository, repository),
      [@bs.optional]
      state:
        Config.resolver(
          deployment,
          unit,
          deploymentState,
          Js.Nullable.t(deploymentState),
        ),
      [@bs.optional]
      statuses:
        Config.resolver(
          deployment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          deploymentStatusConnection,
          Js.Nullable.t(deploymentStatusConnection),
        ),
      [@bs.optional]
      task: Config.resolver(deployment, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      updatedAt: Config.resolver(deployment, unit, dateTime, dateTime),
    };
  };
  module BranchProtectionRule = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      branchProtectionRuleConflicts:
        Config.resolver(
          branchProtectionRule,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          branchProtectionRuleConflictConnection,
          branchProtectionRuleConflictConnection,
        ),
      [@bs.optional]
      creator:
        Config.resolver(
          branchProtectionRule,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      databaseId:
        Config.resolver(branchProtectionRule, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      dismissesStaleReviews:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      id: Config.resolver(branchProtectionRule, unit, string, string),
      [@bs.optional]
      isAdminEnforced:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      matchingRefs:
        Config.resolver(
          branchProtectionRule,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          refConnection,
          refConnection,
        ),
      [@bs.optional]
      pattern: Config.resolver(branchProtectionRule, unit, string, string),
      [@bs.optional]
      pushAllowances:
        Config.resolver(
          branchProtectionRule,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          pushAllowanceConnection,
          pushAllowanceConnection,
        ),
      [@bs.optional]
      repository:
        Config.resolver(
          branchProtectionRule,
          unit,
          repository,
          Js.Nullable.t(repository),
        ),
      [@bs.optional]
      requiredApprovingReviewCount:
        Config.resolver(branchProtectionRule, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      requiredStatusCheckContexts:
        Config.resolver(
          branchProtectionRule,
          unit,
          string,
          Js.Nullable.t(array(Js.Nullable.t(string))),
        ),
      [@bs.optional]
      requiresApprovingReviews:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      requiresCommitSignatures:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      requiresStatusChecks:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      requiresStrictStatusChecks:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      restrictsPushes:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      restrictsReviewDismissals:
        Config.resolver(branchProtectionRule, unit, bool, bool),
      [@bs.optional]
      reviewDismissalAllowances:
        Config.resolver(
          branchProtectionRule,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          reviewDismissalAllowanceConnection,
          reviewDismissalAllowanceConnection,
        ),
    };
  };
  module Blame = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      ranges: Config.resolver(blame, unit, blameRange, array(blameRange)),
    };
  };
  module TeamRepositoryEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(teamRepositoryEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(teamRepositoryEdge, unit, repository, repository),
      [@bs.optional]
      permission:
        Config.resolver(
          teamRepositoryEdge,
          unit,
          repositoryPermission,
          repositoryPermission,
        ),
    };
  };
  module GistEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(gistEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(gistEdge, unit, gist, Js.Nullable.t(gist)),
    };
  };
  module UserConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          userConnection,
          unit,
          userEdge,
          Js.Nullable.t(array(Js.Nullable.t(userEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          userConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(userConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(userConnection, unit, int, int),
    };
  };
  module CommitHistoryConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          commitHistoryConnection,
          unit,
          commitEdge,
          Js.Nullable.t(array(Js.Nullable.t(commitEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          commitHistoryConnection,
          unit,
          commit,
          Js.Nullable.t(array(Js.Nullable.t(commit))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(commitHistoryConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(commitHistoryConnection, unit, int, int),
    };
  };
  module TeamEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(teamEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(teamEdge, unit, team, Js.Nullable.t(team)),
    };
  };
  module TeamRepositoryConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          teamRepositoryConnection,
          unit,
          teamRepositoryEdge,
          Js.Nullable.t(array(Js.Nullable.t(teamRepositoryEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          teamRepositoryConnection,
          unit,
          repository,
          Js.Nullable.t(array(Js.Nullable.t(repository))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(teamRepositoryConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(teamRepositoryConnection, unit, int, int),
    };
  };
  module CommitEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(commitEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(commitEdge, unit, commit, Js.Nullable.t(commit)),
    };
  };
  module MarketplaceCategory = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      description:
        Config.resolver(
          marketplaceCategory,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      howItWorks:
        Config.resolver(
          marketplaceCategory,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      id: Config.resolver(marketplaceCategory, unit, string, string),
      [@bs.optional]
      name: Config.resolver(marketplaceCategory, unit, string, string),
      [@bs.optional]
      primaryListingCount:
        Config.resolver(marketplaceCategory, unit, int, int),
      [@bs.optional]
      resourcePath: Config.resolver(marketplaceCategory, unit, uRI, uRI),
      [@bs.optional]
      secondaryListingCount:
        Config.resolver(marketplaceCategory, unit, int, int),
      [@bs.optional]
      slug: Config.resolver(marketplaceCategory, unit, string, string),
      [@bs.optional]
      url: Config.resolver(marketplaceCategory, unit, uRI, uRI),
    };
  };
  module BaseRefForcePushedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          baseRefForcePushedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      afterCommit:
        Config.resolver(
          baseRefForcePushedEvent,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      beforeCommit:
        Config.resolver(
          baseRefForcePushedEvent,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(baseRefForcePushedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(baseRefForcePushedEvent, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(
          baseRefForcePushedEvent,
          unit,
          pullRequest,
          pullRequest,
        ),
      [@bs.optional]
      ref:
        Config.resolver(
          baseRefForcePushedEvent,
          unit,
          ref,
          Js.Nullable.t(ref),
        ),
    };
  };
  module BlameRange = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      age: Config.resolver(blameRange, unit, int, int),
      [@bs.optional]
      commit: Config.resolver(blameRange, unit, commit, commit),
      [@bs.optional]
      endingLine: Config.resolver(blameRange, unit, int, int),
      [@bs.optional]
      startingLine: Config.resolver(blameRange, unit, int, int),
    };
  };
  module TreeEntry = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      mode: Config.resolver(treeEntry, unit, int, int),
      [@bs.optional]
      name: Config.resolver(treeEntry, unit, string, string),
      [@bs.optional] [@bs.as "object"]
      object_:
        Config.resolver(
          treeEntry,
          unit,
          gitObject,
          Js.Nullable.t(gitObject),
        ),
      [@bs.optional]
      oid: Config.resolver(treeEntry, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      repository: Config.resolver(treeEntry, unit, repository, repository),
      [@bs.optional] [@bs.as "type"]
      type_: Config.resolver(treeEntry, unit, string, string),
    };
  };
  module CreateProjectPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          createProjectPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      project: Config.resolver(createProjectPayload, unit, project, project),
    };
  };
  module LabelEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(labelEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(labelEdge, unit, label, Js.Nullable.t(label)),
    };
  };
  module PullRequestReviewCommentConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          pullRequestReviewCommentConnection,
          unit,
          pullRequestReviewCommentEdge,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewCommentEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          pullRequestReviewCommentConnection,
          unit,
          pullRequestReviewComment,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewComment))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          pullRequestReviewCommentConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(pullRequestReviewCommentConnection, unit, int, int),
    };
  };
  module CommitCommentConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          commitCommentConnection,
          unit,
          commitCommentEdge,
          Js.Nullable.t(array(Js.Nullable.t(commitCommentEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          commitCommentConnection,
          unit,
          commitComment,
          Js.Nullable.t(array(Js.Nullable.t(commitComment))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(commitCommentConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(commitCommentConnection, unit, int, int),
    };
  };
  module MarketplaceListing = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      app:
        Config.resolver(marketplaceListing, unit, app, Js.Nullable.t(app)),
      [@bs.optional]
      companyUrl:
        Config.resolver(marketplaceListing, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      configurationResourcePath:
        Config.resolver(marketplaceListing, unit, uRI, uRI),
      [@bs.optional]
      configurationUrl: Config.resolver(marketplaceListing, unit, uRI, uRI),
      [@bs.optional]
      documentationUrl:
        Config.resolver(marketplaceListing, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      extendedDescription:
        Config.resolver(
          marketplaceListing,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      extendedDescriptionHTML:
        Config.resolver(marketplaceListing, unit, hTML, hTML),
      [@bs.optional]
      fullDescription:
        Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      fullDescriptionHTML:
        Config.resolver(marketplaceListing, unit, hTML, hTML),
      [@bs.optional]
      hasApprovalBeenRequested:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      hasPublishedFreeTrialPlans:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      hasTermsOfService:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      howItWorks:
        Config.resolver(
          marketplaceListing,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      howItWorksHTML: Config.resolver(marketplaceListing, unit, hTML, hTML),
      [@bs.optional]
      id: Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      installationUrl:
        Config.resolver(marketplaceListing, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      installedForViewer:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      isApproved: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      isDelisted: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      isDraft: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      isPaid: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      isRejected: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      logoBackgroundColor:
        Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      logoUrl:
        Config.resolver(
          marketplaceListing,
          {. "size": Js.Nullable.t(int)},
          uRI,
          Js.Nullable.t(uRI),
        ),
      [@bs.optional]
      name: Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      normalizedShortDescription:
        Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      pricingUrl:
        Config.resolver(marketplaceListing, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      primaryCategory:
        Config.resolver(
          marketplaceListing,
          unit,
          marketplaceCategory,
          marketplaceCategory,
        ),
      [@bs.optional]
      privacyPolicyUrl: Config.resolver(marketplaceListing, unit, uRI, uRI),
      [@bs.optional]
      resourcePath: Config.resolver(marketplaceListing, unit, uRI, uRI),
      [@bs.optional]
      screenshotUrls:
        Config.resolver(
          marketplaceListing,
          unit,
          string,
          array(Js.Nullable.t(string)),
        ),
      [@bs.optional]
      secondaryCategory:
        Config.resolver(
          marketplaceListing,
          unit,
          marketplaceCategory,
          Js.Nullable.t(marketplaceCategory),
        ),
      [@bs.optional]
      shortDescription:
        Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      slug: Config.resolver(marketplaceListing, unit, string, string),
      [@bs.optional]
      statusUrl:
        Config.resolver(marketplaceListing, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      supportEmail:
        Config.resolver(
          marketplaceListing,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      supportUrl: Config.resolver(marketplaceListing, unit, uRI, uRI),
      [@bs.optional]
      termsOfServiceUrl:
        Config.resolver(marketplaceListing, unit, uRI, Js.Nullable.t(uRI)),
      [@bs.optional]
      url: Config.resolver(marketplaceListing, unit, uRI, uRI),
      [@bs.optional]
      viewerCanAddPlans:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanApprove: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanDelist: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanEdit: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanEditCategories:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanEditPlans:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanRedraft: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanReject: Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerCanRequestApproval:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerHasPurchased:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerHasPurchasedForAllOrganizations:
        Config.resolver(marketplaceListing, unit, bool, bool),
      [@bs.optional]
      viewerIsListingAdmin:
        Config.resolver(marketplaceListing, unit, bool, bool),
    };
  };
  module RefEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(refEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(refEdge, unit, ref, Js.Nullable.t(ref)),
    };
  };
  module TopicEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(topicEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(topicEdge, unit, topic, Js.Nullable.t(topic)),
    };
  };
  module LanguageConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          languageConnection,
          unit,
          languageEdge,
          Js.Nullable.t(array(Js.Nullable.t(languageEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          languageConnection,
          unit,
          language,
          Js.Nullable.t(array(Js.Nullable.t(language))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(languageConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(languageConnection, unit, int, int),
      [@bs.optional]
      totalSize: Config.resolver(languageConnection, unit, int, int),
    };
  };
  module ProjectCard = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      column:
        Config.resolver(
          projectCard,
          unit,
          projectColumn,
          Js.Nullable.t(projectColumn),
        ),
      [@bs.optional]
      content:
        Config.resolver(
          projectCard,
          unit,
          projectCardItem,
          Js.Nullable.t(projectCardItem),
        ),
      [@bs.optional]
      createdAt: Config.resolver(projectCard, unit, dateTime, dateTime),
      [@bs.optional]
      creator:
        Config.resolver(projectCard, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      databaseId:
        Config.resolver(projectCard, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(projectCard, unit, string, string),
      [@bs.optional]
      isArchived: Config.resolver(projectCard, unit, bool, bool),
      [@bs.optional]
      note:
        Config.resolver(projectCard, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      project: Config.resolver(projectCard, unit, project, project),
      [@bs.optional]
      resourcePath: Config.resolver(projectCard, unit, uRI, uRI),
      [@bs.optional]
      state:
        Config.resolver(
          projectCard,
          unit,
          projectCardState,
          Js.Nullable.t(projectCardState),
        ),
      [@bs.optional]
      updatedAt: Config.resolver(projectCard, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(projectCard, unit, uRI, uRI),
    };
  };
  module TextMatchHighlight = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      beginIndice: Config.resolver(textMatchHighlight, unit, int, int),
      [@bs.optional]
      endIndice: Config.resolver(textMatchHighlight, unit, int, int),
      [@bs.optional]
      text: Config.resolver(textMatchHighlight, unit, string, string),
    };
  };
  module RepositoryInvitationEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(repositoryInvitationEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          repositoryInvitationEdge,
          unit,
          repositoryInvitation,
          Js.Nullable.t(repositoryInvitation),
        ),
    };
  };
  module OrganizationInvitationEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(organizationInvitationEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          organizationInvitationEdge,
          unit,
          organizationInvitation,
          Js.Nullable.t(organizationInvitation),
        ),
    };
  };
  module GistComment = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      author:
        Config.resolver(gistComment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          gistComment,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      body: Config.resolver(gistComment, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(gistComment, unit, hTML, hTML),
      [@bs.optional]
      bodyText: Config.resolver(gistComment, unit, string, string),
      [@bs.optional]
      createdAt: Config.resolver(gistComment, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail: Config.resolver(gistComment, unit, bool, bool),
      [@bs.optional]
      databaseId:
        Config.resolver(gistComment, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      editor:
        Config.resolver(gistComment, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      gist: Config.resolver(gistComment, unit, gist, gist),
      [@bs.optional]
      id: Config.resolver(gistComment, unit, string, string),
      [@bs.optional]
      includesCreatedEdit: Config.resolver(gistComment, unit, bool, bool),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(
          gistComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      publishedAt:
        Config.resolver(
          gistComment,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      updatedAt: Config.resolver(gistComment, unit, dateTime, dateTime),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          gistComment,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanDelete: Config.resolver(gistComment, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(gistComment, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          gistComment,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor: Config.resolver(gistComment, unit, bool, bool),
    };
  };
  module AddProjectCardPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cardEdge:
        Config.resolver(
          addProjectCardPayload,
          unit,
          projectCardEdge,
          projectCardEdge,
        ),
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          addProjectCardPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      projectColumn:
        Config.resolver(addProjectCardPayload, unit, project, project),
    };
  };
  module Reaction = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      content:
        Config.resolver(reaction, unit, reactionContent, reactionContent),
      [@bs.optional]
      createdAt: Config.resolver(reaction, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId: Config.resolver(reaction, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(reaction, unit, string, string),
      [@bs.optional]
      reactable: Config.resolver(reaction, unit, reactable, reactable),
      [@bs.optional]
      user: Config.resolver(reaction, unit, user, Js.Nullable.t(user)),
    };
  };
  module CrossReferencedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          crossReferencedEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(crossReferencedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(crossReferencedEvent, unit, string, string),
      [@bs.optional]
      isCrossRepository:
        Config.resolver(crossReferencedEvent, unit, bool, bool),
      [@bs.optional]
      referencedAt:
        Config.resolver(crossReferencedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      resourcePath: Config.resolver(crossReferencedEvent, unit, uRI, uRI),
      [@bs.optional]
      source:
        Config.resolver(
          crossReferencedEvent,
          unit,
          referencedSubject,
          referencedSubject,
        ),
      [@bs.optional]
      target:
        Config.resolver(
          crossReferencedEvent,
          unit,
          referencedSubject,
          referencedSubject,
        ),
      [@bs.optional]
      url: Config.resolver(crossReferencedEvent, unit, uRI, uRI),
      [@bs.optional]
      willCloseTarget:
        Config.resolver(crossReferencedEvent, unit, bool, bool),
    };
  };
  module IssueTimelineItemEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(issueTimelineItemEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          issueTimelineItemEdge,
          unit,
          issueTimelineItem,
          Js.Nullable.t(issueTimelineItem),
        ),
    };
  };
  module RefConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          refConnection,
          unit,
          refEdge,
          Js.Nullable.t(array(Js.Nullable.t(refEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          refConnection,
          unit,
          ref,
          Js.Nullable.t(array(Js.Nullable.t(ref))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(refConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(refConnection, unit, int, int),
    };
  };
  module UpdateProjectColumnPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          updateProjectColumnPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      projectColumn:
        Config.resolver(
          updateProjectColumnPayload,
          unit,
          projectColumn,
          projectColumn,
        ),
    };
  };
  module AddPullRequestReviewPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          addPullRequestReviewPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      pullRequestReview:
        Config.resolver(
          addPullRequestReviewPayload,
          unit,
          pullRequestReview,
          pullRequestReview,
        ),
      [@bs.optional]
      reviewEdge:
        Config.resolver(
          addPullRequestReviewPayload,
          unit,
          pullRequestReviewEdge,
          pullRequestReviewEdge,
        ),
    };
  };
  module Tag = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      abbreviatedOid: Config.resolver(tag, unit, string, string),
      [@bs.optional]
      commitResourcePath: Config.resolver(tag, unit, uRI, uRI),
      [@bs.optional]
      commitUrl: Config.resolver(tag, unit, uRI, uRI),
      [@bs.optional]
      id: Config.resolver(tag, unit, string, string),
      [@bs.optional]
      message: Config.resolver(tag, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      name: Config.resolver(tag, unit, string, string),
      [@bs.optional]
      oid: Config.resolver(tag, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      repository: Config.resolver(tag, unit, repository, repository),
      [@bs.optional]
      tagger: Config.resolver(tag, unit, gitActor, Js.Nullable.t(gitActor)),
      [@bs.optional]
      target: Config.resolver(tag, unit, gitObject, gitObject),
    };
  };
  module IssueCommentConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          issueCommentConnection,
          unit,
          issueCommentEdge,
          Js.Nullable.t(array(Js.Nullable.t(issueCommentEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          issueCommentConnection,
          unit,
          issueComment,
          Js.Nullable.t(array(Js.Nullable.t(issueComment))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(issueCommentConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(issueCommentConnection, unit, int, int),
    };
  };
  module LanguageEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(languageEdge, unit, string, string),
      [@bs.optional]
      node: Config.resolver(languageEdge, unit, language, language),
      [@bs.optional]
      size: Config.resolver(languageEdge, unit, int, int),
    };
  };
  module StargazerConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          stargazerConnection,
          unit,
          stargazerEdge,
          Js.Nullable.t(array(Js.Nullable.t(stargazerEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          stargazerConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(stargazerConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(stargazerConnection, unit, int, int),
    };
  };
  module SearchResultItemConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      codeCount: Config.resolver(searchResultItemConnection, unit, int, int),
      [@bs.optional]
      edges:
        Config.resolver(
          searchResultItemConnection,
          unit,
          searchResultItemEdge,
          Js.Nullable.t(array(Js.Nullable.t(searchResultItemEdge))),
        ),
      [@bs.optional]
      issueCount: Config.resolver(searchResultItemConnection, unit, int, int),
      [@bs.optional]
      nodes:
        Config.resolver(
          searchResultItemConnection,
          unit,
          searchResultItem,
          Js.Nullable.t(array(Js.Nullable.t(searchResultItem))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(searchResultItemConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      repositoryCount:
        Config.resolver(searchResultItemConnection, unit, int, int),
      [@bs.optional]
      userCount: Config.resolver(searchResultItemConnection, unit, int, int),
      [@bs.optional]
      wikiCount: Config.resolver(searchResultItemConnection, unit, int, int),
    };
  };
  module Tree = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      abbreviatedOid: Config.resolver(tree, unit, string, string),
      [@bs.optional]
      commitResourcePath: Config.resolver(tree, unit, uRI, uRI),
      [@bs.optional]
      commitUrl: Config.resolver(tree, unit, uRI, uRI),
      [@bs.optional]
      entries:
        Config.resolver(
          tree,
          unit,
          treeEntry,
          Js.Nullable.t(array(treeEntry)),
        ),
      [@bs.optional]
      id: Config.resolver(tree, unit, string, string),
      [@bs.optional]
      oid: Config.resolver(tree, unit, gitObjectID, gitObjectID),
      [@bs.optional]
      repository: Config.resolver(tree, unit, repository, repository),
    };
  };
  module ReviewRequest = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      databaseId:
        Config.resolver(reviewRequest, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(reviewRequest, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(reviewRequest, unit, pullRequest, pullRequest),
      [@bs.optional]
      requestedReviewer:
        Config.resolver(
          reviewRequest,
          unit,
          requestedReviewer,
          Js.Nullable.t(requestedReviewer),
        ),
    };
  };
  module SuggestedReviewer = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      isAuthor: Config.resolver(suggestedReviewer, unit, bool, bool),
      [@bs.optional]
      isCommenter: Config.resolver(suggestedReviewer, unit, bool, bool),
      [@bs.optional]
      reviewer: Config.resolver(suggestedReviewer, unit, user, user),
    };
  };
  module RemoveStarPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          removeStarPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      starrable:
        Config.resolver(removeStarPayload, unit, starrable, starrable),
    };
  };
  module PullRequestCommitEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(pullRequestCommitEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pullRequestCommitEdge,
          unit,
          pullRequestCommit,
          Js.Nullable.t(pullRequestCommit),
        ),
    };
  };
  module DeployKeyConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          deployKeyConnection,
          unit,
          deployKeyEdge,
          Js.Nullable.t(array(Js.Nullable.t(deployKeyEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          deployKeyConnection,
          unit,
          deployKey,
          Js.Nullable.t(array(Js.Nullable.t(deployKey))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(deployKeyConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(deployKeyConnection, unit, int, int),
    };
  };
  module ReleaseAsset = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      contentType: Config.resolver(releaseAsset, unit, string, string),
      [@bs.optional]
      createdAt: Config.resolver(releaseAsset, unit, dateTime, dateTime),
      [@bs.optional]
      downloadCount: Config.resolver(releaseAsset, unit, int, int),
      [@bs.optional]
      downloadUrl: Config.resolver(releaseAsset, unit, uRI, uRI),
      [@bs.optional]
      id: Config.resolver(releaseAsset, unit, string, string),
      [@bs.optional]
      name: Config.resolver(releaseAsset, unit, string, string),
      [@bs.optional]
      release:
        Config.resolver(releaseAsset, unit, release, Js.Nullable.t(release)),
      [@bs.optional]
      size: Config.resolver(releaseAsset, unit, int, int),
      [@bs.optional]
      updatedAt: Config.resolver(releaseAsset, unit, dateTime, dateTime),
      [@bs.optional]
      uploadedBy: Config.resolver(releaseAsset, unit, user, user),
      [@bs.optional]
      url: Config.resolver(releaseAsset, unit, uRI, uRI),
    };
  };
  module BranchProtectionRuleConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          branchProtectionRuleConnection,
          unit,
          branchProtectionRuleEdge,
          Js.Nullable.t(array(Js.Nullable.t(branchProtectionRuleEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          branchProtectionRuleConnection,
          unit,
          branchProtectionRule,
          Js.Nullable.t(array(Js.Nullable.t(branchProtectionRule))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          branchProtectionRuleConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(branchProtectionRuleConnection, unit, int, int),
    };
  };
  module ReleaseAssetConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          releaseAssetConnection,
          unit,
          releaseAssetEdge,
          Js.Nullable.t(array(Js.Nullable.t(releaseAssetEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          releaseAssetConnection,
          unit,
          releaseAsset,
          Js.Nullable.t(array(Js.Nullable.t(releaseAsset))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(releaseAssetConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(releaseAssetConnection, unit, int, int),
    };
  };
  module PullRequestReview = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      author:
        Config.resolver(
          pullRequestReview,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      authorAssociation:
        Config.resolver(
          pullRequestReview,
          unit,
          commentAuthorAssociation,
          commentAuthorAssociation,
        ),
      [@bs.optional]
      body: Config.resolver(pullRequestReview, unit, string, string),
      [@bs.optional]
      bodyHTML: Config.resolver(pullRequestReview, unit, hTML, hTML),
      [@bs.optional]
      bodyText: Config.resolver(pullRequestReview, unit, string, string),
      [@bs.optional]
      comments:
        Config.resolver(
          pullRequestReview,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          pullRequestReviewCommentConnection,
          pullRequestReviewCommentConnection,
        ),
      [@bs.optional]
      commit:
        Config.resolver(
          pullRequestReview,
          unit,
          commit,
          Js.Nullable.t(commit),
        ),
      [@bs.optional]
      createdAt: Config.resolver(pullRequestReview, unit, dateTime, dateTime),
      [@bs.optional]
      createdViaEmail: Config.resolver(pullRequestReview, unit, bool, bool),
      [@bs.optional]
      databaseId:
        Config.resolver(pullRequestReview, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      editor:
        Config.resolver(
          pullRequestReview,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      id: Config.resolver(pullRequestReview, unit, string, string),
      [@bs.optional]
      includesCreatedEdit:
        Config.resolver(pullRequestReview, unit, bool, bool),
      [@bs.optional]
      lastEditedAt:
        Config.resolver(
          pullRequestReview,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      onBehalfOf:
        Config.resolver(
          pullRequestReview,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          teamConnection,
          teamConnection,
        ),
      [@bs.optional]
      publishedAt:
        Config.resolver(
          pullRequestReview,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      pullRequest:
        Config.resolver(pullRequestReview, unit, pullRequest, pullRequest),
      [@bs.optional]
      repository:
        Config.resolver(pullRequestReview, unit, repository, repository),
      [@bs.optional]
      resourcePath: Config.resolver(pullRequestReview, unit, uRI, uRI),
      [@bs.optional]
      state:
        Config.resolver(
          pullRequestReview,
          unit,
          pullRequestReviewState,
          pullRequestReviewState,
        ),
      [@bs.optional]
      submittedAt:
        Config.resolver(
          pullRequestReview,
          unit,
          dateTime,
          Js.Nullable.t(dateTime),
        ),
      [@bs.optional]
      updatedAt: Config.resolver(pullRequestReview, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(pullRequestReview, unit, uRI, uRI),
      [@bs.optional]
      userContentEdits:
        Config.resolver(
          pullRequestReview,
          {
            .
            "after": Js.Nullable.t(string),
            "before": Js.Nullable.t(string),
            "first": Js.Nullable.t(int),
            "last": Js.Nullable.t(int),
          },
          userContentEditConnection,
          Js.Nullable.t(userContentEditConnection),
        ),
      [@bs.optional]
      viewerCanDelete: Config.resolver(pullRequestReview, unit, bool, bool),
      [@bs.optional]
      viewerCanUpdate: Config.resolver(pullRequestReview, unit, bool, bool),
      [@bs.optional]
      viewerCannotUpdateReasons:
        Config.resolver(
          pullRequestReview,
          unit,
          commentCannotUpdateReason,
          array(commentCannotUpdateReason),
        ),
      [@bs.optional]
      viewerDidAuthor: Config.resolver(pullRequestReview, unit, bool, bool),
    };
  };
  module PublicKey = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      id: Config.resolver(publicKey, unit, string, string),
      [@bs.optional]
      key: Config.resolver(publicKey, unit, string, string),
    };
  };
  module ProjectColumnEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(projectColumnEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          projectColumnEdge,
          unit,
          projectColumn,
          Js.Nullable.t(projectColumn),
        ),
    };
  };
  module PullRequestTimelineItemEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor:
        Config.resolver(pullRequestTimelineItemEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          pullRequestTimelineItemEdge,
          unit,
          pullRequestTimelineItem,
          Js.Nullable.t(pullRequestTimelineItem),
        ),
    };
  };
  module ProtectedBranchConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          protectedBranchConnection,
          unit,
          protectedBranchEdge,
          Js.Nullable.t(array(Js.Nullable.t(protectedBranchEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          protectedBranchConnection,
          unit,
          protectedBranch,
          Js.Nullable.t(array(Js.Nullable.t(protectedBranch))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(protectedBranchConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(protectedBranchConnection, unit, int, int),
    };
  };
  module ExternalIdentityEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(externalIdentityEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          externalIdentityEdge,
          unit,
          externalIdentity,
          Js.Nullable.t(externalIdentity),
        ),
    };
  };
  module Bot = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      avatarUrl:
        Config.resolver(bot, {. "size": Js.Nullable.t(int)}, uRI, uRI),
      [@bs.optional]
      createdAt: Config.resolver(bot, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId: Config.resolver(bot, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      id: Config.resolver(bot, unit, string, string),
      [@bs.optional]
      login: Config.resolver(bot, unit, string, string),
      [@bs.optional]
      resourcePath: Config.resolver(bot, unit, uRI, uRI),
      [@bs.optional]
      updatedAt: Config.resolver(bot, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(bot, unit, uRI, uRI),
    };
  };
  module CommitConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          commitConnection,
          unit,
          commitEdge,
          Js.Nullable.t(array(Js.Nullable.t(commitEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          commitConnection,
          unit,
          commit,
          Js.Nullable.t(array(Js.Nullable.t(commit))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(commitConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(commitConnection, unit, int, int),
    };
  };
  module GpgSignature = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      email: Config.resolver(gpgSignature, unit, string, string),
      [@bs.optional]
      isValid: Config.resolver(gpgSignature, unit, bool, bool),
      [@bs.optional]
      keyId:
        Config.resolver(gpgSignature, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      payload: Config.resolver(gpgSignature, unit, string, string),
      [@bs.optional]
      signature: Config.resolver(gpgSignature, unit, string, string),
      [@bs.optional]
      signer: Config.resolver(gpgSignature, unit, user, Js.Nullable.t(user)),
      [@bs.optional]
      state:
        Config.resolver(
          gpgSignature,
          unit,
          gitSignatureState,
          gitSignatureState,
        ),
      [@bs.optional]
      wasSignedByGitHub: Config.resolver(gpgSignature, unit, bool, bool),
    };
  };
  module StatusContext = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      commit:
        Config.resolver(statusContext, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      context: Config.resolver(statusContext, unit, string, string),
      [@bs.optional]
      createdAt: Config.resolver(statusContext, unit, dateTime, dateTime),
      [@bs.optional]
      creator:
        Config.resolver(statusContext, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      description:
        Config.resolver(statusContext, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(statusContext, unit, string, string),
      [@bs.optional]
      state: Config.resolver(statusContext, unit, statusState, statusState),
      [@bs.optional]
      targetUrl:
        Config.resolver(statusContext, unit, uRI, Js.Nullable.t(uRI)),
    };
  };
  module ProjectColumnConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          projectColumnConnection,
          unit,
          projectColumnEdge,
          Js.Nullable.t(array(Js.Nullable.t(projectColumnEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          projectColumnConnection,
          unit,
          projectColumn,
          Js.Nullable.t(array(Js.Nullable.t(projectColumn))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(projectColumnConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(projectColumnConnection, unit, int, int),
    };
  };
  module AssignedEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(assignedEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      assignable:
        Config.resolver(assignedEvent, unit, assignable, assignable),
      [@bs.optional]
      createdAt: Config.resolver(assignedEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(assignedEvent, unit, string, string),
      [@bs.optional]
      user: Config.resolver(assignedEvent, unit, user, Js.Nullable.t(user)),
    };
  };
  module CommitCommentEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(commitCommentEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          commitCommentEdge,
          unit,
          commitComment,
          Js.Nullable.t(commitComment),
        ),
    };
  };
  module ExternalIdentityConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          externalIdentityConnection,
          unit,
          externalIdentityEdge,
          Js.Nullable.t(array(Js.Nullable.t(externalIdentityEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          externalIdentityConnection,
          unit,
          externalIdentity,
          Js.Nullable.t(array(Js.Nullable.t(externalIdentity))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(externalIdentityConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(externalIdentityConnection, unit, int, int),
    };
  };
  module PullRequestReviewConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          pullRequestReviewConnection,
          unit,
          pullRequestReviewEdge,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          pullRequestReviewConnection,
          unit,
          pullRequestReview,
          Js.Nullable.t(array(Js.Nullable.t(pullRequestReview))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(
          pullRequestReviewConnection,
          unit,
          pageInfo,
          pageInfo,
        ),
      [@bs.optional]
      totalCount:
        Config.resolver(pullRequestReviewConnection, unit, int, int),
    };
  };
  module AddPullRequestReviewCommentPayload = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      clientMutationId:
        Config.resolver(
          addPullRequestReviewCommentPayload,
          unit,
          string,
          Js.Nullable.t(string),
        ),
      [@bs.optional]
      comment:
        Config.resolver(
          addPullRequestReviewCommentPayload,
          unit,
          pullRequestReviewComment,
          pullRequestReviewComment,
        ),
      [@bs.optional]
      commentEdge:
        Config.resolver(
          addPullRequestReviewCommentPayload,
          unit,
          pullRequestReviewCommentEdge,
          pullRequestReviewCommentEdge,
        ),
    };
  };
  module PullRequestCommit = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      commit: Config.resolver(pullRequestCommit, unit, commit, commit),
      [@bs.optional]
      id: Config.resolver(pullRequestCommit, unit, string, string),
      [@bs.optional]
      pullRequest:
        Config.resolver(pullRequestCommit, unit, pullRequest, pullRequest),
      [@bs.optional]
      resourcePath: Config.resolver(pullRequestCommit, unit, uRI, uRI),
      [@bs.optional]
      url: Config.resolver(pullRequestCommit, unit, uRI, uRI),
    };
  };
  module ReviewRequestConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          reviewRequestConnection,
          unit,
          reviewRequestEdge,
          Js.Nullable.t(array(Js.Nullable.t(reviewRequestEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          reviewRequestConnection,
          unit,
          reviewRequest,
          Js.Nullable.t(array(Js.Nullable.t(reviewRequest))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(reviewRequestConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(reviewRequestConnection, unit, int, int),
    };
  };
  module ReleaseConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          releaseConnection,
          unit,
          releaseEdge,
          Js.Nullable.t(array(Js.Nullable.t(releaseEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          releaseConnection,
          unit,
          release,
          Js.Nullable.t(array(Js.Nullable.t(release))),
        ),
      [@bs.optional]
      pageInfo: Config.resolver(releaseConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(releaseConnection, unit, int, int),
    };
  };
  module OrganizationConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          organizationConnection,
          unit,
          organizationEdge,
          Js.Nullable.t(array(Js.Nullable.t(organizationEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          organizationConnection,
          unit,
          organization,
          Js.Nullable.t(array(Js.Nullable.t(organization))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(organizationConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(organizationConnection, unit, int, int),
    };
  };
  module UserContentEditEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(userContentEditEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          userContentEditEdge,
          unit,
          userContentEdit,
          Js.Nullable.t(userContentEdit),
        ),
    };
  };
  module IssueCommentEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(issueCommentEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(
          issueCommentEdge,
          unit,
          issueComment,
          Js.Nullable.t(issueComment),
        ),
    };
  };
  module PageInfo = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      endCursor:
        Config.resolver(pageInfo, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      hasNextPage: Config.resolver(pageInfo, unit, bool, bool),
      [@bs.optional]
      hasPreviousPage: Config.resolver(pageInfo, unit, bool, bool),
      [@bs.optional]
      startCursor:
        Config.resolver(pageInfo, unit, string, Js.Nullable.t(string)),
    };
  };
  module Status = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      commit: Config.resolver(status, unit, commit, Js.Nullable.t(commit)),
      [@bs.optional]
      context:
        Config.resolver(
          status,
          {. "name": string},
          statusContext,
          Js.Nullable.t(statusContext),
        ),
      [@bs.optional]
      contexts:
        Config.resolver(status, unit, statusContext, array(statusContext)),
      [@bs.optional]
      id: Config.resolver(status, unit, string, string),
      [@bs.optional]
      state: Config.resolver(status, unit, statusState, statusState),
    };
  };
  module App = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      createdAt: Config.resolver(app, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId: Config.resolver(app, unit, int, Js.Nullable.t(int)),
      [@bs.optional]
      description: Config.resolver(app, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      id: Config.resolver(app, unit, string, string),
      [@bs.optional]
      logoBackgroundColor: Config.resolver(app, unit, string, string),
      [@bs.optional]
      logoUrl:
        Config.resolver(app, {. "size": Js.Nullable.t(int)}, uRI, uRI),
      [@bs.optional]
      name: Config.resolver(app, unit, string, string),
      [@bs.optional]
      slug: Config.resolver(app, unit, string, string),
      [@bs.optional]
      updatedAt: Config.resolver(app, unit, dateTime, dateTime),
      [@bs.optional]
      url: Config.resolver(app, unit, uRI, uRI),
    };
  };
  module LabeledEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(labeledEvent, unit, actor, Js.Nullable.t(actor)),
      [@bs.optional]
      createdAt: Config.resolver(labeledEvent, unit, dateTime, dateTime),
      [@bs.optional]
      id: Config.resolver(labeledEvent, unit, string, string),
      [@bs.optional]
      label: Config.resolver(labeledEvent, unit, label, label),
      [@bs.optional]
      labelable: Config.resolver(labeledEvent, unit, labelable, labelable),
    };
  };
  module ConvertedNoteToIssueEvent = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          convertedNoteToIssueEvent,
          unit,
          actor,
          Js.Nullable.t(actor),
        ),
      [@bs.optional]
      createdAt:
        Config.resolver(convertedNoteToIssueEvent, unit, dateTime, dateTime),
      [@bs.optional]
      databaseId:
        Config.resolver(
          convertedNoteToIssueEvent,
          unit,
          int,
          Js.Nullable.t(int),
        ),
      [@bs.optional]
      id: Config.resolver(convertedNoteToIssueEvent, unit, string, string),
    };
  };
  module ReviewDismissalAllowance = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          reviewDismissalAllowance,
          unit,
          reviewDismissalAllowanceActor,
          Js.Nullable.t(reviewDismissalAllowanceActor),
        ),
      [@bs.optional]
      branchProtectionRule:
        Config.resolver(
          reviewDismissalAllowance,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
      [@bs.optional]
      id: Config.resolver(reviewDismissalAllowance, unit, string, string),
      [@bs.optional]
      protectedBranch:
        Config.resolver(
          reviewDismissalAllowance,
          unit,
          protectedBranch,
          protectedBranch,
        ),
    };
  };
  module ProjectEdge = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      cursor: Config.resolver(projectEdge, unit, string, string),
      [@bs.optional]
      node:
        Config.resolver(projectEdge, unit, project, Js.Nullable.t(project)),
    };
  };
  module PushAllowance = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      actor:
        Config.resolver(
          pushAllowance,
          unit,
          pushAllowanceActor,
          Js.Nullable.t(pushAllowanceActor),
        ),
      [@bs.optional]
      branchProtectionRule:
        Config.resolver(
          pushAllowance,
          unit,
          branchProtectionRule,
          Js.Nullable.t(branchProtectionRule),
        ),
      [@bs.optional]
      id: Config.resolver(pushAllowance, unit, string, string),
      [@bs.optional]
      protectedBranch:
        Config.resolver(
          pushAllowance,
          unit,
          protectedBranch,
          protectedBranch,
        ),
    };
  };
  module GitActor = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      avatarUrl:
        Config.resolver(gitActor, {. "size": Js.Nullable.t(int)}, uRI, uRI),
      [@bs.optional]
      date:
        Config.resolver(
          gitActor,
          unit,
          gitTimestamp,
          Js.Nullable.t(gitTimestamp),
        ),
      [@bs.optional]
      email: Config.resolver(gitActor, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      name: Config.resolver(gitActor, unit, string, Js.Nullable.t(string)),
      [@bs.optional]
      user: Config.resolver(gitActor, unit, user, Js.Nullable.t(user)),
    };
  };
  module ReactingUserConnection = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      edges:
        Config.resolver(
          reactingUserConnection,
          unit,
          reactingUserEdge,
          Js.Nullable.t(array(Js.Nullable.t(reactingUserEdge))),
        ),
      [@bs.optional]
      nodes:
        Config.resolver(
          reactingUserConnection,
          unit,
          user,
          Js.Nullable.t(array(Js.Nullable.t(user))),
        ),
      [@bs.optional]
      pageInfo:
        Config.resolver(reactingUserConnection, unit, pageInfo, pageInfo),
      [@bs.optional]
      totalCount: Config.resolver(reactingUserConnection, unit, int, int),
    };
  };
  [@bs.deriving abstract]
  type t = {
    [@bs.optional] [@bs.as "ReferencedEvent"]
    referencedEvent: ReferencedEvent.t,
    [@bs.optional] [@bs.as "MentionedEvent"]
    mentionedEvent: MentionedEvent.t,
    [@bs.optional] [@bs.as "ReopenedEvent"]
    reopenedEvent: ReopenedEvent.t,
    [@bs.optional] [@bs.as "ReviewDismissedEvent"]
    reviewDismissedEvent: ReviewDismissedEvent.t,
    [@bs.optional] [@bs.as "PullRequestReviewCommentEdge"]
    pullRequestReviewCommentEdge: PullRequestReviewCommentEdge.t,
    [@bs.optional] [@bs.as "UnknownSignature"]
    unknownSignature: UnknownSignature.t,
    [@bs.optional] [@bs.as "IssueConnection"]
    issueConnection: IssueConnection.t,
    [@bs.optional] [@bs.as "PullRequestCommitConnection"]
    pullRequestCommitConnection: PullRequestCommitConnection.t,
    [@bs.optional] [@bs.as "GistCommentEdge"]
    gistCommentEdge: GistCommentEdge.t,
    [@bs.optional] [@bs.as "SubscribedEvent"]
    subscribedEvent: SubscribedEvent.t,
    [@bs.optional] [@bs.as "ExternalIdentitySamlAttributes"]
    externalIdentitySamlAttributes: ExternalIdentitySamlAttributes.t,
    [@bs.optional] [@bs.as "Milestone"]
    milestone: Milestone.t,
    [@bs.optional] [@bs.as "DeployKey"]
    deployKey: DeployKey.t,
    [@bs.optional] [@bs.as "RepositoryTopicConnection"]
    repositoryTopicConnection: RepositoryTopicConnection.t,
    [@bs.optional] [@bs.as "SmimeSignature"]
    smimeSignature: SmimeSignature.t,
    [@bs.optional] [@bs.as "UpdatePullRequestReviewCommentPayload"]
    updatePullRequestReviewCommentPayload: UpdatePullRequestReviewCommentPayload.t,
    [@bs.optional] [@bs.as "LockLockablePayload"]
    lockLockablePayload: LockLockablePayload.t,
    [@bs.optional] [@bs.as "RepositoryCollaboratorConnection"]
    repositoryCollaboratorConnection: RepositoryCollaboratorConnection.t,
    [@bs.optional] [@bs.as "ExternalIdentityScimAttributes"]
    externalIdentityScimAttributes: ExternalIdentityScimAttributes.t,
    [@bs.optional] [@bs.as "DeploymentConnection"]
    deploymentConnection: DeploymentConnection.t,
    [@bs.optional] [@bs.as "GistConnection"]
    gistConnection: GistConnection.t,
    [@bs.optional] [@bs.as "MoveProjectCardPayload"]
    moveProjectCardPayload: MoveProjectCardPayload.t,
    [@bs.optional] [@bs.as "PullRequestTimelineItemsEdge"]
    pullRequestTimelineItemsEdge: PullRequestTimelineItemsEdge.t,
    [@bs.optional] [@bs.as "TextMatch"]
    textMatch: TextMatch.t,
    [@bs.optional] [@bs.as "GitHubMetadata"]
    gitHubMetadata: GitHubMetadata.t,
    [@bs.optional] [@bs.as "AddCommentPayload"]
    addCommentPayload: AddCommentPayload.t,
    [@bs.optional] [@bs.as "StarredRepositoryConnection"]
    starredRepositoryConnection: StarredRepositoryConnection.t,
    [@bs.optional] [@bs.as "UpdateSubscriptionPayload"]
    updateSubscriptionPayload: UpdateSubscriptionPayload.t,
    [@bs.optional] [@bs.as "TeamConnection"]
    teamConnection: TeamConnection.t,
    [@bs.optional] [@bs.as "CommentDeletedEvent"]
    commentDeletedEvent: CommentDeletedEvent.t,
    [@bs.optional] [@bs.as "IssueTimelineItemsEdge"]
    issueTimelineItemsEdge: IssueTimelineItemsEdge.t,
    [@bs.optional] [@bs.as "Topic"]
    topic: Topic.t,
    [@bs.optional] [@bs.as "OrganizationInvitationConnection"]
    organizationInvitationConnection: OrganizationInvitationConnection.t,
    [@bs.optional] [@bs.as "Label"]
    label: Label.t,
    [@bs.optional] [@bs.as "ReviewRequestEdge"]
    reviewRequestEdge: ReviewRequestEdge.t,
    [@bs.optional] [@bs.as "UnlabeledEvent"]
    unlabeledEvent: UnlabeledEvent.t,
    [@bs.optional] [@bs.as "StarredRepositoryEdge"]
    starredRepositoryEdge: StarredRepositoryEdge.t,
    [@bs.optional] [@bs.as "DeploymentStatusConnection"]
    deploymentStatusConnection: DeploymentStatusConnection.t,
    [@bs.optional] [@bs.as "Query"]
    query: Query.t,
    [@bs.optional] [@bs.as "UserEdge"]
    userEdge: UserEdge.t,
    [@bs.optional] [@bs.as "GistCommentConnection"]
    gistCommentConnection: GistCommentConnection.t,
    [@bs.optional] [@bs.as "LicenseRule"]
    licenseRule: LicenseRule.t,
    [@bs.optional] [@bs.as "RepositoryConnection"]
    repositoryConnection: RepositoryConnection.t,
    [@bs.optional] [@bs.as "ReleaseEdge"]
    releaseEdge: ReleaseEdge.t,
    [@bs.optional] [@bs.as "ProjectCardEdge"]
    projectCardEdge: ProjectCardEdge.t,
    [@bs.optional] [@bs.as "ReviewRequestedEvent"]
    reviewRequestedEvent: ReviewRequestedEvent.t,
    [@bs.optional] [@bs.as "OrganizationEdge"]
    organizationEdge: OrganizationEdge.t,
    [@bs.optional] [@bs.as "AddedToProjectEvent"]
    addedToProjectEvent: AddedToProjectEvent.t,
    [@bs.optional] [@bs.as "ReleaseAssetEdge"]
    releaseAssetEdge: ReleaseAssetEdge.t,
    [@bs.optional] [@bs.as "Issue"]
    issue: Issue.t,
    [@bs.optional] [@bs.as "ReactionConnection"]
    reactionConnection: ReactionConnection.t,
    [@bs.optional] [@bs.as "RepositoryTopic"]
    repositoryTopic: RepositoryTopic.t,
    [@bs.optional] [@bs.as "IssueTimelineConnection"]
    issueTimelineConnection: IssueTimelineConnection.t,
    [@bs.optional] [@bs.as "MarketplaceListingConnection"]
    marketplaceListingConnection: MarketplaceListingConnection.t,
    [@bs.optional] [@bs.as "Commit"]
    commit: Commit.t,
    [@bs.optional] [@bs.as "Project"]
    project: Project.t,
    [@bs.optional] [@bs.as "UserContentEditConnection"]
    userContentEditConnection: UserContentEditConnection.t,
    [@bs.optional] [@bs.as "FollowerConnection"]
    followerConnection: FollowerConnection.t,
    [@bs.optional] [@bs.as "ReactionGroup"]
    reactionGroup: ReactionGroup.t,
    [@bs.optional] [@bs.as "MergedEvent"]
    mergedEvent: MergedEvent.t,
    [@bs.optional] [@bs.as "ProtectedBranch"]
    protectedBranch: ProtectedBranch.t,
    [@bs.optional] [@bs.as "DeploymentEnvironmentChangedEvent"]
    deploymentEnvironmentChangedEvent: DeploymentEnvironmentChangedEvent.t,
    [@bs.optional] [@bs.as "DeployKeyEdge"]
    deployKeyEdge: DeployKeyEdge.t,
    [@bs.optional] [@bs.as "CommitComment"]
    commitComment: CommitComment.t,
    [@bs.optional] [@bs.as "ProtectedBranchEdge"]
    protectedBranchEdge: ProtectedBranchEdge.t,
    [@bs.optional] [@bs.as "RateLimit"]
    rateLimit: RateLimit.t,
    [@bs.optional] [@bs.as "RemoveOutsideCollaboratorPayload"]
    removeOutsideCollaboratorPayload: RemoveOutsideCollaboratorPayload.t,
    [@bs.optional] [@bs.as "PullRequest"]
    pullRequest: PullRequest.t,
    [@bs.optional] [@bs.as "ClosedEvent"]
    closedEvent: ClosedEvent.t,
    [@bs.optional] [@bs.as "Team"]
    team: Team.t,
    [@bs.optional] [@bs.as "UnlockedEvent"]
    unlockedEvent: UnlockedEvent.t,
    [@bs.optional] [@bs.as "ExternalIdentity"]
    externalIdentity: ExternalIdentity.t,
    [@bs.optional] [@bs.as "UpdatePullRequestReviewPayload"]
    updatePullRequestReviewPayload: UpdatePullRequestReviewPayload.t,
    [@bs.optional] [@bs.as "AppEdge"]
    appEdge: AppEdge.t,
    [@bs.optional] [@bs.as "SubmitPullRequestReviewPayload"]
    submitPullRequestReviewPayload: SubmitPullRequestReviewPayload.t,
    [@bs.optional] [@bs.as "DeploymentStatus"]
    deploymentStatus: DeploymentStatus.t,
    [@bs.optional] [@bs.as "OrganizationInvitation"]
    organizationInvitation: OrganizationInvitation.t,
    [@bs.optional] [@bs.as "DismissPullRequestReviewPayload"]
    dismissPullRequestReviewPayload: DismissPullRequestReviewPayload.t,
    [@bs.optional] [@bs.as "PullRequestReviewComment"]
    pullRequestReviewComment: PullRequestReviewComment.t,
    [@bs.optional] [@bs.as "Organization"]
    organization: Organization.t,
    [@bs.optional] [@bs.as "CreateBranchProtectionRulePayload"]
    createBranchProtectionRulePayload: CreateBranchProtectionRulePayload.t,
    [@bs.optional] [@bs.as "Blob"]
    blob: Blob.t,
    [@bs.optional] [@bs.as "MovedColumnsInProjectEvent"]
    movedColumnsInProjectEvent: MovedColumnsInProjectEvent.t,
    [@bs.optional] [@bs.as "TeamMemberConnection"]
    teamMemberConnection: TeamMemberConnection.t,
    [@bs.optional] [@bs.as "MarketplaceListingEdge"]
    marketplaceListingEdge: MarketplaceListingEdge.t,
    [@bs.optional] [@bs.as "BranchProtectionRuleEdge"]
    branchProtectionRuleEdge: BranchProtectionRuleEdge.t,
    [@bs.optional] [@bs.as "PushAllowanceEdge"]
    pushAllowanceEdge: PushAllowanceEdge.t,
    [@bs.optional] [@bs.as "AcceptTopicSuggestionPayload"]
    acceptTopicSuggestionPayload: AcceptTopicSuggestionPayload.t,
    [@bs.optional] [@bs.as "MoveProjectColumnPayload"]
    moveProjectColumnPayload: MoveProjectColumnPayload.t,
    [@bs.optional] [@bs.as "LockedEvent"]
    lockedEvent: LockedEvent.t,
    [@bs.optional] [@bs.as "ReviewDismissalAllowanceEdge"]
    reviewDismissalAllowanceEdge: ReviewDismissalAllowanceEdge.t,
    [@bs.optional] [@bs.as "UnlockLockablePayload"]
    unlockLockablePayload: UnlockLockablePayload.t,
    [@bs.optional] [@bs.as "DeleteBranchProtectionRulePayload"]
    deleteBranchProtectionRulePayload: DeleteBranchProtectionRulePayload.t,
    [@bs.optional] [@bs.as "UpdateTopicsPayload"]
    updateTopicsPayload: UpdateTopicsPayload.t,
    [@bs.optional] [@bs.as "ProjectCardConnection"]
    projectCardConnection: ProjectCardConnection.t,
    [@bs.optional] [@bs.as "PullRequestReviewEdge"]
    pullRequestReviewEdge: PullRequestReviewEdge.t,
    [@bs.optional] [@bs.as "StargazerEdge"]
    stargazerEdge: StargazerEdge.t,
    [@bs.optional] [@bs.as "DeployedEvent"]
    deployedEvent: DeployedEvent.t,
    [@bs.optional] [@bs.as "Release"]
    release: Release.t,
    [@bs.optional] [@bs.as "DeleteProjectCardPayload"]
    deleteProjectCardPayload: DeleteProjectCardPayload.t,
    [@bs.optional] [@bs.as "RepositoryInvitation"]
    repositoryInvitation: RepositoryInvitation.t,
    [@bs.optional] [@bs.as "ProjectColumn"]
    projectColumn: ProjectColumn.t,
    [@bs.optional] [@bs.as "LabelConnection"]
    labelConnection: LabelConnection.t,
    [@bs.optional] [@bs.as "MilestoneEdge"]
    milestoneEdge: MilestoneEdge.t,
    [@bs.optional] [@bs.as "RepositoryTopicEdge"]
    repositoryTopicEdge: RepositoryTopicEdge.t,
    [@bs.optional] [@bs.as "UpdateProjectPayload"]
    updateProjectPayload: UpdateProjectPayload.t,
    [@bs.optional] [@bs.as "Repository"]
    repository: Repository.t,
    [@bs.optional] [@bs.as "PullRequestReviewThread"]
    pullRequestReviewThread: PullRequestReviewThread.t,
    [@bs.optional] [@bs.as "BranchProtectionRuleConflict"]
    branchProtectionRuleConflict: BranchProtectionRuleConflict.t,
    [@bs.optional] [@bs.as "AddReactionPayload"]
    addReactionPayload: AddReactionPayload.t,
    [@bs.optional] [@bs.as "BranchProtectionRuleConflictEdge"]
    branchProtectionRuleConflictEdge: BranchProtectionRuleConflictEdge.t,
    [@bs.optional] [@bs.as "License"]
    license: License.t,
    [@bs.optional] [@bs.as "HeadRefDeletedEvent"]
    headRefDeletedEvent: HeadRefDeletedEvent.t,
    [@bs.optional] [@bs.as "Mutation"]
    mutation: Mutation.t,
    [@bs.optional] [@bs.as "RemovedFromProjectEvent"]
    removedFromProjectEvent: RemovedFromProjectEvent.t,
    [@bs.optional] [@bs.as "IssueEdge"]
    issueEdge: IssueEdge.t,
    [@bs.optional] [@bs.as "ReviewRequestRemovedEvent"]
    reviewRequestRemovedEvent: ReviewRequestRemovedEvent.t,
    [@bs.optional] [@bs.as "ReactingUserEdge"]
    reactingUserEdge: ReactingUserEdge.t,
    [@bs.optional] [@bs.as "UnsubscribedEvent"]
    unsubscribedEvent: UnsubscribedEvent.t,
    [@bs.optional] [@bs.as "MilestoneConnection"]
    milestoneConnection: MilestoneConnection.t,
    [@bs.optional] [@bs.as "PushAllowanceConnection"]
    pushAllowanceConnection: PushAllowanceConnection.t,
    [@bs.optional] [@bs.as "BranchProtectionRuleConflictConnection"]
    branchProtectionRuleConflictConnection: BranchProtectionRuleConflictConnection.t,
    [@bs.optional] [@bs.as "UpdateProjectCardPayload"]
    updateProjectCardPayload: UpdateProjectCardPayload.t,
    [@bs.optional] [@bs.as "CodeOfConduct"]
    codeOfConduct: CodeOfConduct.t,
    [@bs.optional] [@bs.as "TopicConnection"]
    topicConnection: TopicConnection.t,
    [@bs.optional] [@bs.as "PullRequestConnection"]
    pullRequestConnection: PullRequestConnection.t,
    [@bs.optional] [@bs.as "FollowingConnection"]
    followingConnection: FollowingConnection.t,
    [@bs.optional] [@bs.as "DeclineTopicSuggestionPayload"]
    declineTopicSuggestionPayload: DeclineTopicSuggestionPayload.t,
    [@bs.optional] [@bs.as "Gist"]
    gist: Gist.t,
    [@bs.optional] [@bs.as "Ref"]
    ref: Ref.t,
    [@bs.optional] [@bs.as "PublicKeyConnection"]
    publicKeyConnection: PublicKeyConnection.t,
    [@bs.optional] [@bs.as "ReactionEdge"]
    reactionEdge: ReactionEdge.t,
    [@bs.optional] [@bs.as "MilestonedEvent"]
    milestonedEvent: MilestonedEvent.t,
    [@bs.optional] [@bs.as "User"]
    user: User.t,
    [@bs.optional] [@bs.as "RemoveReactionPayload"]
    removeReactionPayload: RemoveReactionPayload.t,
    [@bs.optional] [@bs.as "CommitCommentThread"]
    commitCommentThread: CommitCommentThread.t,
    [@bs.optional] [@bs.as "UpdateBranchProtectionRulePayload"]
    updateBranchProtectionRulePayload: UpdateBranchProtectionRulePayload.t,
    [@bs.optional] [@bs.as "IssueComment"]
    issueComment: IssueComment.t,
    [@bs.optional] [@bs.as "DemilestonedEvent"]
    demilestonedEvent: DemilestonedEvent.t,
    [@bs.optional] [@bs.as "RenamedTitleEvent"]
    renamedTitleEvent: RenamedTitleEvent.t,
    [@bs.optional] [@bs.as "DeletePullRequestReviewPayload"]
    deletePullRequestReviewPayload: DeletePullRequestReviewPayload.t,
    [@bs.optional] [@bs.as "SearchResultItemEdge"]
    searchResultItemEdge: SearchResultItemEdge.t,
    [@bs.optional] [@bs.as "ReviewDismissalAllowanceConnection"]
    reviewDismissalAllowanceConnection: ReviewDismissalAllowanceConnection.t,
    [@bs.optional] [@bs.as "HeadRefRestoredEvent"]
    headRefRestoredEvent: HeadRefRestoredEvent.t,
    [@bs.optional] [@bs.as "TeamMemberEdge"]
    teamMemberEdge: TeamMemberEdge.t,
    [@bs.optional] [@bs.as "RequestReviewsPayload"]
    requestReviewsPayload: RequestReviewsPayload.t,
    [@bs.optional] [@bs.as "DeploymentEdge"]
    deploymentEdge: DeploymentEdge.t,
    [@bs.optional] [@bs.as "DeleteProjectColumnPayload"]
    deleteProjectColumnPayload: DeleteProjectColumnPayload.t,
    [@bs.optional] [@bs.as "UserContentEdit"]
    userContentEdit: UserContentEdit.t,
    [@bs.optional] [@bs.as "PullRequestTimelineConnection"]
    pullRequestTimelineConnection: PullRequestTimelineConnection.t,
    [@bs.optional] [@bs.as "AddProjectColumnPayload"]
    addProjectColumnPayload: AddProjectColumnPayload.t,
    [@bs.optional] [@bs.as "UnassignedEvent"]
    unassignedEvent: UnassignedEvent.t,
    [@bs.optional] [@bs.as "PullRequestEdge"]
    pullRequestEdge: PullRequestEdge.t,
    [@bs.optional] [@bs.as "ProjectConnection"]
    projectConnection: ProjectConnection.t,
    [@bs.optional] [@bs.as "OrganizationIdentityProvider"]
    organizationIdentityProvider: OrganizationIdentityProvider.t,
    [@bs.optional] [@bs.as "BaseRefChangedEvent"]
    baseRefChangedEvent: BaseRefChangedEvent.t,
    [@bs.optional] [@bs.as "HeadRefForcePushedEvent"]
    headRefForcePushedEvent: HeadRefForcePushedEvent.t,
    [@bs.optional] [@bs.as "DeploymentStatusEdge"]
    deploymentStatusEdge: DeploymentStatusEdge.t,
    [@bs.optional] [@bs.as "RepositoryEdge"]
    repositoryEdge: RepositoryEdge.t,
    [@bs.optional] [@bs.as "PublicKeyEdge"]
    publicKeyEdge: PublicKeyEdge.t,
    [@bs.optional] [@bs.as "AddStarPayload"]
    addStarPayload: AddStarPayload.t,
    [@bs.optional] [@bs.as "DeleteProjectPayload"]
    deleteProjectPayload: DeleteProjectPayload.t,
    [@bs.optional] [@bs.as "Language"]
    language: Language.t,
    [@bs.optional] [@bs.as "RepositoryCollaboratorEdge"]
    repositoryCollaboratorEdge: RepositoryCollaboratorEdge.t,
    [@bs.optional] [@bs.as "Deployment"]
    deployment: Deployment.t,
    [@bs.optional] [@bs.as "BranchProtectionRule"]
    branchProtectionRule: BranchProtectionRule.t,
    [@bs.optional] [@bs.as "Blame"]
    blame: Blame.t,
    [@bs.optional] [@bs.as "TeamRepositoryEdge"]
    teamRepositoryEdge: TeamRepositoryEdge.t,
    [@bs.optional] [@bs.as "GistEdge"]
    gistEdge: GistEdge.t,
    [@bs.optional] [@bs.as "UserConnection"]
    userConnection: UserConnection.t,
    [@bs.optional] [@bs.as "CommitHistoryConnection"]
    commitHistoryConnection: CommitHistoryConnection.t,
    [@bs.optional] [@bs.as "TeamEdge"]
    teamEdge: TeamEdge.t,
    [@bs.optional] [@bs.as "TeamRepositoryConnection"]
    teamRepositoryConnection: TeamRepositoryConnection.t,
    [@bs.optional] [@bs.as "CommitEdge"]
    commitEdge: CommitEdge.t,
    [@bs.optional] [@bs.as "MarketplaceCategory"]
    marketplaceCategory: MarketplaceCategory.t,
    [@bs.optional] [@bs.as "BaseRefForcePushedEvent"]
    baseRefForcePushedEvent: BaseRefForcePushedEvent.t,
    [@bs.optional] [@bs.as "BlameRange"]
    blameRange: BlameRange.t,
    [@bs.optional] [@bs.as "TreeEntry"]
    treeEntry: TreeEntry.t,
    [@bs.optional] [@bs.as "CreateProjectPayload"]
    createProjectPayload: CreateProjectPayload.t,
    [@bs.optional] [@bs.as "LabelEdge"]
    labelEdge: LabelEdge.t,
    [@bs.optional] [@bs.as "PullRequestReviewCommentConnection"]
    pullRequestReviewCommentConnection: PullRequestReviewCommentConnection.t,
    [@bs.optional] [@bs.as "CommitCommentConnection"]
    commitCommentConnection: CommitCommentConnection.t,
    [@bs.optional] [@bs.as "MarketplaceListing"]
    marketplaceListing: MarketplaceListing.t,
    [@bs.optional] [@bs.as "RefEdge"]
    refEdge: RefEdge.t,
    [@bs.optional] [@bs.as "TopicEdge"]
    topicEdge: TopicEdge.t,
    [@bs.optional] [@bs.as "LanguageConnection"]
    languageConnection: LanguageConnection.t,
    [@bs.optional] [@bs.as "ProjectCard"]
    projectCard: ProjectCard.t,
    [@bs.optional] [@bs.as "TextMatchHighlight"]
    textMatchHighlight: TextMatchHighlight.t,
    [@bs.optional] [@bs.as "RepositoryInvitationEdge"]
    repositoryInvitationEdge: RepositoryInvitationEdge.t,
    [@bs.optional] [@bs.as "OrganizationInvitationEdge"]
    organizationInvitationEdge: OrganizationInvitationEdge.t,
    [@bs.optional] [@bs.as "GistComment"]
    gistComment: GistComment.t,
    [@bs.optional] [@bs.as "AddProjectCardPayload"]
    addProjectCardPayload: AddProjectCardPayload.t,
    [@bs.optional] [@bs.as "Reaction"]
    reaction: Reaction.t,
    [@bs.optional] [@bs.as "CrossReferencedEvent"]
    crossReferencedEvent: CrossReferencedEvent.t,
    [@bs.optional] [@bs.as "IssueTimelineItemEdge"]
    issueTimelineItemEdge: IssueTimelineItemEdge.t,
    [@bs.optional] [@bs.as "RefConnection"]
    refConnection: RefConnection.t,
    [@bs.optional] [@bs.as "UpdateProjectColumnPayload"]
    updateProjectColumnPayload: UpdateProjectColumnPayload.t,
    [@bs.optional] [@bs.as "AddPullRequestReviewPayload"]
    addPullRequestReviewPayload: AddPullRequestReviewPayload.t,
    [@bs.optional] [@bs.as "Tag"]
    tag: Tag.t,
    [@bs.optional] [@bs.as "IssueCommentConnection"]
    issueCommentConnection: IssueCommentConnection.t,
    [@bs.optional] [@bs.as "LanguageEdge"]
    languageEdge: LanguageEdge.t,
    [@bs.optional] [@bs.as "StargazerConnection"]
    stargazerConnection: StargazerConnection.t,
    [@bs.optional] [@bs.as "SearchResultItemConnection"]
    searchResultItemConnection: SearchResultItemConnection.t,
    [@bs.optional] [@bs.as "Tree"]
    tree: Tree.t,
    [@bs.optional] [@bs.as "ReviewRequest"]
    reviewRequest: ReviewRequest.t,
    [@bs.optional] [@bs.as "SuggestedReviewer"]
    suggestedReviewer: SuggestedReviewer.t,
    [@bs.optional] [@bs.as "RemoveStarPayload"]
    removeStarPayload: RemoveStarPayload.t,
    [@bs.optional] [@bs.as "PullRequestCommitEdge"]
    pullRequestCommitEdge: PullRequestCommitEdge.t,
    [@bs.optional] [@bs.as "DeployKeyConnection"]
    deployKeyConnection: DeployKeyConnection.t,
    [@bs.optional] [@bs.as "ReleaseAsset"]
    releaseAsset: ReleaseAsset.t,
    [@bs.optional] [@bs.as "BranchProtectionRuleConnection"]
    branchProtectionRuleConnection: BranchProtectionRuleConnection.t,
    [@bs.optional] [@bs.as "ReleaseAssetConnection"]
    releaseAssetConnection: ReleaseAssetConnection.t,
    [@bs.optional] [@bs.as "PullRequestReview"]
    pullRequestReview: PullRequestReview.t,
    [@bs.optional] [@bs.as "PublicKey"]
    publicKey: PublicKey.t,
    [@bs.optional] [@bs.as "ProjectColumnEdge"]
    projectColumnEdge: ProjectColumnEdge.t,
    [@bs.optional] [@bs.as "PullRequestTimelineItemEdge"]
    pullRequestTimelineItemEdge: PullRequestTimelineItemEdge.t,
    [@bs.optional] [@bs.as "ProtectedBranchConnection"]
    protectedBranchConnection: ProtectedBranchConnection.t,
    [@bs.optional] [@bs.as "ExternalIdentityEdge"]
    externalIdentityEdge: ExternalIdentityEdge.t,
    [@bs.optional] [@bs.as "Bot"]
    bot: Bot.t,
    [@bs.optional] [@bs.as "CommitConnection"]
    commitConnection: CommitConnection.t,
    [@bs.optional] [@bs.as "GpgSignature"]
    gpgSignature: GpgSignature.t,
    [@bs.optional] [@bs.as "StatusContext"]
    statusContext: StatusContext.t,
    [@bs.optional] [@bs.as "ProjectColumnConnection"]
    projectColumnConnection: ProjectColumnConnection.t,
    [@bs.optional] [@bs.as "AssignedEvent"]
    assignedEvent: AssignedEvent.t,
    [@bs.optional] [@bs.as "CommitCommentEdge"]
    commitCommentEdge: CommitCommentEdge.t,
    [@bs.optional] [@bs.as "ExternalIdentityConnection"]
    externalIdentityConnection: ExternalIdentityConnection.t,
    [@bs.optional] [@bs.as "PullRequestReviewConnection"]
    pullRequestReviewConnection: PullRequestReviewConnection.t,
    [@bs.optional] [@bs.as "AddPullRequestReviewCommentPayload"]
    addPullRequestReviewCommentPayload: AddPullRequestReviewCommentPayload.t,
    [@bs.optional] [@bs.as "PullRequestCommit"]
    pullRequestCommit: PullRequestCommit.t,
    [@bs.optional] [@bs.as "ReviewRequestConnection"]
    reviewRequestConnection: ReviewRequestConnection.t,
    [@bs.optional] [@bs.as "ReleaseConnection"]
    releaseConnection: ReleaseConnection.t,
    [@bs.optional] [@bs.as "OrganizationConnection"]
    organizationConnection: OrganizationConnection.t,
    [@bs.optional] [@bs.as "UserContentEditEdge"]
    userContentEditEdge: UserContentEditEdge.t,
    [@bs.optional] [@bs.as "IssueCommentEdge"]
    issueCommentEdge: IssueCommentEdge.t,
    [@bs.optional] [@bs.as "PageInfo"]
    pageInfo_1: PageInfo.t,
    [@bs.optional] [@bs.as "Status"]
    status: Status.t,
    [@bs.optional] [@bs.as "App"]
    app: App.t,
    [@bs.optional] [@bs.as "LabeledEvent"]
    labeledEvent: LabeledEvent.t,
    [@bs.optional] [@bs.as "ConvertedNoteToIssueEvent"]
    convertedNoteToIssueEvent: ConvertedNoteToIssueEvent.t,
    [@bs.optional] [@bs.as "ReviewDismissalAllowance"]
    reviewDismissalAllowance: ReviewDismissalAllowance.t,
    [@bs.optional] [@bs.as "ProjectEdge"]
    projectEdge: ProjectEdge.t,
    [@bs.optional] [@bs.as "PushAllowance"]
    pushAllowance: PushAllowance.t,
    [@bs.optional] [@bs.as "GitActor"]
    gitActor: GitActor.t,
    [@bs.optional] [@bs.as "ReactingUserConnection"]
    reactingUserConnection: ReactingUserConnection.t,
  };
};

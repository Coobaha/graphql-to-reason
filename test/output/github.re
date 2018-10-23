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
  type resolver('payload, 'fieldType, 'result);
  type directiveResolver('payload);
};
module MakeSchema = (Config: SchemaConfig) => {
  include Config.Scalars;
  type resolver('payload, 'fieldType, 'result) =
    Config.resolver('payload, 'fieldType, 'result);
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
    "pushActorIds": array(string),
    "repositoryId": string,
    "requiredApprovingReviewCount": Js.Nullable.t(int),
    "requiredStatusCheckContexts": array(string),
    "requiresApprovingReviews": Js.Nullable.t(bool),
    "requiresCodeOwnerReviews": Js.Nullable.t(bool),
    "requiresCommitSignatures": Js.Nullable.t(bool),
    "requiresStatusChecks": Js.Nullable.t(bool),
    "requiresStrictStatusChecks": Js.Nullable.t(bool),
    "restrictsPushes": Js.Nullable.t(bool),
    "restrictsReviewDismissals": Js.Nullable.t(bool),
    "reviewDismissalActorIds": array(string),
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
    "comments": array(Js.Nullable.t(draftPullRequestReviewComment)),
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
    "teamIds": array(string),
    "union": Js.Nullable.t(bool),
    "userIds": array(string),
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
    "pushActorIds": array(string),
    "requiredApprovingReviewCount": Js.Nullable.t(int),
    "requiredStatusCheckContexts": array(string),
    "requiresApprovingReviews": Js.Nullable.t(bool),
    "requiresCodeOwnerReviews": Js.Nullable.t(bool),
    "requiresCommitSignatures": Js.Nullable.t(bool),
    "requiresStatusChecks": Js.Nullable.t(bool),
    "requiresStrictStatusChecks": Js.Nullable.t(bool),
    "restrictsPushes": Js.Nullable.t(bool),
    "restrictsReviewDismissals": Js.Nullable.t(bool),
    "reviewDismissalActorIds": array(string),
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
    "emails": array(string),
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
    "__typename": string,
    "avatarUrl": uRI,
    "login": string,
    "resourcePath": uRI,
    "url": uRI,
  }
  and subscribable = {
    .
    "__typename": string,
    "id": string,
    "viewerCanSubscribe": bool,
    "viewerSubscription": Js.Nullable.t(subscriptionState),
  }
  and gitObject = {
    .
    "__typename": string,
    "abbreviatedOid": string,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "id": string,
    "oid": gitObjectID,
    "repository": repository,
  }
  and closable = {
    .
    "__typename": string,
    "closed": bool,
    "closedAt": Js.Nullable.t(dateTime),
  }
  and lockable = {
    .
    "__typename": string,
    "activeLockReason": Js.Nullable.t(lockReason),
    "locked": bool,
  }
  and assignable = {
    .
    "__typename": string,
    "assignees": userConnection,
  }
  and deletable = {
    .
    "__typename": string,
    "viewerCanDelete": bool,
  }
  and reactable = {
    .
    "__typename": string,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "reactionGroups": array(reactionGroup),
    "reactions": reactionConnection,
    "viewerCanReact": bool,
  }
  and registryPackageOwner = {
    .
    "__typename": string,
    "id": string,
  }
  and registryPackageSearch = {
    .
    "__typename": string,
    "id": string,
  }
  and uniformResourceLocatable = {
    .
    "__typename": string,
    "resourcePath": uRI,
    "url": uRI,
  }
  and repositoryNode = {
    .
    "__typename": string,
    "repository": repository,
  }
  and node = {
    .
    "__typename": string,
    "id": string,
  }
  and projectOwner = {
    .
    "__typename": string,
    "id": string,
    "project": Js.Nullable.t(project),
    "projects": projectConnection,
    "projectsResourcePath": uRI,
    "projectsUrl": uRI,
    "viewerCanCreateProjects": bool,
  }
  and repositoryOwner = {
    .
    "__typename": string,
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
    "__typename": string,
    "id": string,
    "stargazers": stargazerConnection,
    "viewerHasStarred": bool,
  }
  and gitSignature = {
    .
    "__typename": string,
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
    "__typename": string,
    "viewerCannotUpdateReasons": array(commentCannotUpdateReason),
  }
  and comment = {
    .
    "__typename": string,
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
  and labelable = {
    .
    "__typename": string,
    "labels": Js.Nullable.t(labelConnection),
  }
  and repositoryInfo = {
    .
    "__typename": string,
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
  and updatable = {
    .
    "__typename": string,
    "viewerCanUpdate": bool,
  }
  and reactingUserConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(reactingUserEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and gitActor = {
    .
    "__typename": string,
    "avatarUrl": uRI,
    "date": Js.Nullable.t(gitTimestamp),
    "email": Js.Nullable.t(string),
    "name": Js.Nullable.t(string),
    "user": Js.Nullable.t(user),
  }
  and pushAllowance = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(pushAllowanceActor),
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "id": string,
    "protectedBranch": protectedBranch,
  }
  and projectEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(project),
  }
  and reviewDismissalAllowance = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(reviewDismissalAllowanceActor),
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "id": string,
    "protectedBranch": protectedBranch,
  }
  and convertedNoteToIssueEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and labeledEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "label": label,
    "labelable": labelable,
  }
  and app = {
    .
    "__typename": string,
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
    "__typename": string,
    "commit": Js.Nullable.t(commit),
    "context": Js.Nullable.t(statusContext),
    "contexts": array(statusContext),
    "id": string,
    "state": statusState,
  }
  and pageInfo = {
    .
    "__typename": string,
    "endCursor": Js.Nullable.t(string),
    "hasNextPage": bool,
    "hasPreviousPage": bool,
    "startCursor": Js.Nullable.t(string),
  }
  and issueCommentEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(issueComment),
  }
  and userContentEditEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(userContentEdit),
  }
  and organizationConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(organizationEdge)),
    "nodes": array(Js.Nullable.t(organization)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and releaseConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(releaseEdge)),
    "nodes": array(Js.Nullable.t(release)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and reviewRequestConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(reviewRequestEdge)),
    "nodes": array(Js.Nullable.t(reviewRequest)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestCommit = {
    .
    "__typename": string,
    "commit": commit,
    "id": string,
    "pullRequest": pullRequest,
    "resourcePath": uRI,
    "url": uRI,
  }
  and addPullRequestReviewCommentPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "comment": pullRequestReviewComment,
    "commentEdge": pullRequestReviewCommentEdge,
  }
  and pullRequestReviewConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(pullRequestReviewEdge)),
    "nodes": array(Js.Nullable.t(pullRequestReview)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and externalIdentityConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(externalIdentityEdge)),
    "nodes": array(Js.Nullable.t(externalIdentity)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and commitCommentEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(commitComment),
  }
  and assignedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "assignable": assignable,
    "createdAt": dateTime,
    "id": string,
    "user": Js.Nullable.t(user),
  }
  and projectColumnConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(projectColumnEdge)),
    "nodes": array(Js.Nullable.t(projectColumn)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and statusContext = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(commitEdge)),
    "nodes": array(Js.Nullable.t(commit)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and bot = {
    .
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(externalIdentity),
  }
  and protectedBranchConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(protectedBranchEdge)),
    "nodes": array(Js.Nullable.t(protectedBranch)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestTimelineItemEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pullRequestTimelineItem),
  }
  and projectColumnEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(projectColumn),
  }
  and publicKey = {
    .
    "__typename": string,
    "id": string,
    "key": string,
  }
  and pullRequestReview = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(releaseAssetEdge)),
    "nodes": array(Js.Nullable.t(releaseAsset)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and branchProtectionRuleConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(branchProtectionRuleEdge)),
    "nodes": array(Js.Nullable.t(branchProtectionRule)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and releaseAsset = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(deployKeyEdge)),
    "nodes": array(Js.Nullable.t(deployKey)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestCommitEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pullRequestCommit),
  }
  and removeStarPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "starrable": starrable,
  }
  and suggestedReviewer = {
    .
    "__typename": string,
    "isAuthor": bool,
    "isCommenter": bool,
    "reviewer": user,
  }
  and reviewRequest = {
    .
    "__typename": string,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "pullRequest": pullRequest,
    "requestedReviewer": Js.Nullable.t(requestedReviewer),
  }
  and tree = {
    .
    "__typename": string,
    "abbreviatedOid": string,
    "commitResourcePath": uRI,
    "commitUrl": uRI,
    "entries": array(treeEntry),
    "id": string,
    "oid": gitObjectID,
    "repository": repository,
  }
  and searchResultItemConnection = {
    .
    "__typename": string,
    "codeCount": int,
    "edges": array(Js.Nullable.t(searchResultItemEdge)),
    "issueCount": int,
    "nodes": array(Js.Nullable.t(searchResultItem)),
    "pageInfo": pageInfo,
    "repositoryCount": int,
    "userCount": int,
    "wikiCount": int,
  }
  and stargazerConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(stargazerEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and languageEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": language,
    "size": int,
  }
  and issueCommentConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(issueCommentEdge)),
    "nodes": array(Js.Nullable.t(issueComment)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and tag = {
    .
    "__typename": string,
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
    "reviewEdge": pullRequestReviewEdge,
  }
  and updateProjectColumnPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "projectColumn": projectColumn,
  }
  and refConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(refEdge)),
    "nodes": array(Js.Nullable.t(ref)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and issueTimelineItemEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(issueTimelineItem),
  }
  and crossReferencedEvent = {
    .
    "__typename": string,
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
    "__typename": string,
    "content": reactionContent,
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
    "reactable": reactable,
    "user": Js.Nullable.t(user),
  }
  and addProjectCardPayload = {
    .
    "__typename": string,
    "cardEdge": projectCardEdge,
    "clientMutationId": Js.Nullable.t(string),
    "projectColumn": project,
  }
  and gistComment = {
    .
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(organizationInvitation),
  }
  and repositoryInvitationEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(repositoryInvitation),
  }
  and textMatchHighlight = {
    .
    "__typename": string,
    "beginIndice": int,
    "endIndice": int,
    "text": string,
  }
  and projectCard = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(languageEdge)),
    "nodes": array(Js.Nullable.t(language)),
    "pageInfo": pageInfo,
    "totalCount": int,
    "totalSize": int,
  }
  and topicEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(topic),
  }
  and refEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(ref),
  }
  and marketplaceListing = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(commitCommentEdge)),
    "nodes": array(Js.Nullable.t(commitComment)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestReviewCommentConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(pullRequestReviewCommentEdge)),
    "nodes": array(Js.Nullable.t(pullRequestReviewComment)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and labelEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(label),
  }
  and createProjectPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "project": project,
  }
  and treeEntry = {
    .
    "__typename": string,
    "mode": int,
    "name": string,
    "object": Js.Nullable.t(gitObject),
    "oid": gitObjectID,
    "repository": repository,
    "type": string,
  }
  and blameRange = {
    .
    "__typename": string,
    "age": int,
    "commit": commit,
    "endingLine": int,
    "startingLine": int,
  }
  and baseRefForcePushedEvent = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(commit),
  }
  and teamRepositoryConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(teamRepositoryEdge)),
    "nodes": array(Js.Nullable.t(repository)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and teamEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(team),
  }
  and commitHistoryConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(commitEdge)),
    "nodes": array(Js.Nullable.t(commit)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(userEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and gistEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(gist),
  }
  and teamRepositoryEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": repository,
    "permission": repositoryPermission,
  }
  and blame = {
    .
    "__typename": string,
    "ranges": array(blameRange),
  }
  and branchProtectionRule = {
    .
    "__typename": string,
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
    "requiredStatusCheckContexts": array(Js.Nullable.t(string)),
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
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": user,
    "permission": repositoryPermission,
  }
  and language = {
    .
    "__typename": string,
    "color": Js.Nullable.t(string),
    "id": string,
    "name": string,
  }
  and deleteProjectPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "owner": projectOwner,
  }
  and addStarPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "starrable": starrable,
  }
  and publicKeyEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(publicKey),
  }
  and repositoryEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(repository),
  }
  and deploymentStatusEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(deploymentStatus),
  }
  and headRefForcePushedEvent = {
    .
    "__typename": string,
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
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and organizationIdentityProvider = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(projectEdge)),
    "nodes": array(Js.Nullable.t(project)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pullRequest),
  }
  and unassignedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "assignable": assignable,
    "createdAt": dateTime,
    "id": string,
    "user": Js.Nullable.t(user),
  }
  and addProjectColumnPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "columnEdge": projectColumnEdge,
    "project": project,
  }
  and pullRequestTimelineConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(pullRequestTimelineItemEdge)),
    "nodes": array(Js.Nullable.t(pullRequestTimelineItem)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userContentEdit = {
    .
    "__typename": string,
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "deletedColumnId": string,
    "project": project,
  }
  and deploymentEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(deployment),
  }
  and requestReviewsPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequest": pullRequest,
    "requestedReviewersEdge": userEdge,
  }
  and teamMemberEdge = {
    .
    "__typename": string,
    "cursor": string,
    "memberAccessResourcePath": uRI,
    "memberAccessUrl": uRI,
    "node": user,
    "role": teamMemberRole,
  }
  and headRefRestoredEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
  }
  and reviewDismissalAllowanceConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(reviewDismissalAllowanceEdge)),
    "nodes": array(Js.Nullable.t(reviewDismissalAllowance)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and searchResultItemEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(searchResultItem),
    "textMatches": array(Js.Nullable.t(textMatch)),
  }
  and deletePullRequestReviewPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and renamedTitleEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "currentTitle": string,
    "id": string,
    "previousTitle": string,
    "subject": renamedTitleSubject,
  }
  and demilestonedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "milestoneTitle": string,
    "subject": milestoneItem,
  }
  and issueComment = {
    .
    "__typename": string,
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
    "reactionGroups": array(reactionGroup),
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
    "__typename": string,
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "clientMutationId": Js.Nullable.t(string),
  }
  and commitCommentThread = {
    .
    "__typename": string,
    "comments": commitCommentConnection,
    "commit": commit,
    "id": string,
    "path": Js.Nullable.t(string),
    "position": Js.Nullable.t(int),
    "repository": repository,
  }
  and removeReactionPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "reaction": reaction,
    "subject": reactable,
  }
  and user = {
    .
    "__typename": string,
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
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "milestoneTitle": string,
    "subject": milestoneItem,
  }
  and reactionEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(reaction),
  }
  and publicKeyConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(publicKeyEdge)),
    "nodes": array(Js.Nullable.t(publicKey)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and ref = {
    .
    "__typename": string,
    "associatedPullRequests": pullRequestConnection,
    "id": string,
    "name": string,
    "prefix": string,
    "repository": repository,
    "target": gitObject,
  }
  and gist = {
    .
    "__typename": string,
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "topic": topic,
  }
  and followingConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(userEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pullRequestConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(pullRequestEdge)),
    "nodes": array(Js.Nullable.t(pullRequest)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and topicConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(topicEdge)),
    "nodes": array(Js.Nullable.t(topic)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and codeOfConduct = {
    .
    "__typename": string,
    "body": Js.Nullable.t(string),
    "key": string,
    "name": string,
    "url": Js.Nullable.t(uRI),
  }
  and updateProjectCardPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "projectCard": projectCard,
  }
  and branchProtectionRuleConflictConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(branchProtectionRuleConflictEdge)),
    "nodes": array(Js.Nullable.t(branchProtectionRuleConflict)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and pushAllowanceConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(pushAllowanceEdge)),
    "nodes": array(Js.Nullable.t(pushAllowance)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and milestoneConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(milestoneEdge)),
    "nodes": array(Js.Nullable.t(milestone)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and unsubscribedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "subscribable": subscribable,
  }
  and reactingUserEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": user,
    "reactedAt": dateTime,
  }
  and reviewRequestRemovedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
    "requestedReviewer": Js.Nullable.t(requestedReviewer),
  }
  and issueEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(issue),
  }
  and removedFromProjectEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and mutation = {
    .
    "__typename": string,
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
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "headRef": Js.Nullable.t(ref),
    "headRefName": string,
    "id": string,
    "pullRequest": pullRequest,
  }
  and license = {
    .
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(branchProtectionRuleConflict),
  }
  and addReactionPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "reaction": reaction,
    "subject": reactable,
  }
  and branchProtectionRuleConflict = {
    .
    "__typename": string,
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "conflictingBranchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "ref": Js.Nullable.t(ref),
  }
  and pullRequestReviewThread = {
    .
    "__typename": string,
    "comments": pullRequestReviewCommentConnection,
    "id": string,
    "pullRequest": pullRequest,
    "repository": repository,
  }
  and repository = {
    .
    "__typename": string,
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "project": project,
  }
  and repositoryTopicEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(repositoryTopic),
  }
  and milestoneEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(milestone),
  }
  and labelConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(labelEdge)),
    "nodes": array(Js.Nullable.t(label)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and projectColumn = {
    .
    "__typename": string,
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
    "__typename": string,
    "id": string,
    "invitee": user,
    "inviter": user,
    "permission": repositoryPermission,
    "repository": Js.Nullable.t(repositoryInfo),
  }
  and deleteProjectCardPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "column": projectColumn,
    "deletedCardId": string,
  }
  and release = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": user,
    "starredAt": dateTime,
  }
  and pullRequestReviewEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pullRequestReview),
  }
  and projectCardConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(projectCardEdge)),
    "nodes": array(Js.Nullable.t(projectCard)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and updateTopicsPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "invalidTopicNames": array(string),
    "repository": repository,
  }
  and deleteBranchProtectionRulePayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
  }
  and unlockLockablePayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "unlockedRecord": Js.Nullable.t(lockable),
  }
  and reviewDismissalAllowanceEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(reviewDismissalAllowance),
  }
  and lockedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "lockReason": Js.Nullable.t(lockReason),
    "lockable": lockable,
  }
  and moveProjectColumnPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "columnEdge": projectColumnEdge,
  }
  and acceptTopicSuggestionPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "topic": topic,
  }
  and pushAllowanceEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pushAllowance),
  }
  and branchProtectionRuleEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(branchProtectionRule),
  }
  and marketplaceListingEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(marketplaceListing),
  }
  and teamMemberConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(teamMemberEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and movedColumnsInProjectEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and blob = {
    .
    "__typename": string,
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
    "__typename": string,
    "branchProtectionRule": Js.Nullable.t(branchProtectionRule),
    "clientMutationId": Js.Nullable.t(string),
  }
  and organization = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "reactionGroups": array(reactionGroup),
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and organizationInvitation = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and appEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(app),
  }
  and updatePullRequestReviewPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReview": pullRequestReview,
  }
  and externalIdentity = {
    .
    "__typename": string,
    "guid": string,
    "id": string,
    "organizationInvitation": Js.Nullable.t(organizationInvitation),
    "samlIdentity": Js.Nullable.t(externalIdentitySamlAttributes),
    "scimIdentity": Js.Nullable.t(externalIdentityScimAttributes),
    "user": Js.Nullable.t(user),
  }
  and unlockedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "lockable": lockable,
  }
  and team = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "__typename": string,
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
    "reactionGroups": array(reactionGroup),
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
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "removedUser": user,
  }
  and rateLimit = {
    .
    "__typename": string,
    "cost": int,
    "limit": int,
    "nodeCount": int,
    "remaining": int,
    "resetAt": dateTime,
  }
  and protectedBranchEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(protectedBranch),
  }
  and commitComment = {
    .
    "__typename": string,
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
    "reactionGroups": array(reactionGroup),
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(deployKey),
  }
  and deploymentEnvironmentChangedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "deploymentStatus": deploymentStatus,
    "id": string,
    "pullRequest": pullRequest,
  }
  and protectedBranch = {
    .
    "__typename": string,
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
    "requiredStatusCheckContexts": array(Js.Nullable.t(string)),
    "reviewDismissalAllowances": reviewDismissalAllowanceConnection,
  }
  and mergedEvent = {
    .
    "__typename": string,
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
    "__typename": string,
    "content": reactionContent,
    "createdAt": Js.Nullable.t(dateTime),
    "subject": reactable,
    "users": reactingUserConnection,
    "viewerHasReacted": bool,
  }
  and followerConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(userEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userContentEditConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(userContentEditEdge)),
    "nodes": array(Js.Nullable.t(userContentEdit)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and project = {
    .
    "__typename": string,
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
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(marketplaceListingEdge)),
    "nodes": array(Js.Nullable.t(marketplaceListing)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and issueTimelineConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(issueTimelineItemEdge)),
    "nodes": array(Js.Nullable.t(issueTimelineItem)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and repositoryTopic = {
    .
    "__typename": string,
    "id": string,
    "resourcePath": uRI,
    "topic": topic,
    "url": uRI,
  }
  and reactionConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(reactionEdge)),
    "nodes": array(Js.Nullable.t(reaction)),
    "pageInfo": pageInfo,
    "totalCount": int,
    "viewerHasReacted": bool,
  }
  and issue = {
    .
    "__typename": string,
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
    "reactionGroups": array(reactionGroup),
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(releaseAsset),
  }
  and addedToProjectEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and organizationEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(organization),
  }
  and reviewRequestedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "pullRequest": pullRequest,
    "requestedReviewer": Js.Nullable.t(requestedReviewer),
  }
  and projectCardEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(projectCard),
  }
  and releaseEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(release),
  }
  and repositoryConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(repositoryEdge)),
    "nodes": array(Js.Nullable.t(repository)),
    "pageInfo": pageInfo,
    "totalCount": int,
    "totalDiskUsage": int,
  }
  and licenseRule = {
    .
    "__typename": string,
    "description": string,
    "key": string,
    "label": string,
  }
  and gistCommentConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(gistCommentEdge)),
    "nodes": array(Js.Nullable.t(gistComment)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and userEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(user),
  }
  and query = {
    .
    "__typename": string,
    "codeOfConduct": Js.Nullable.t(codeOfConduct),
    "codesOfConduct": array(Js.Nullable.t(codeOfConduct)),
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
    "__typename": string,
    "edges": array(Js.Nullable.t(deploymentStatusEdge)),
    "nodes": array(Js.Nullable.t(deploymentStatus)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and starredRepositoryEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": repository,
    "starredAt": dateTime,
  }
  and unlabeledEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "label": label,
    "labelable": labelable,
  }
  and reviewRequestEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(reviewRequest),
  }
  and label = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(organizationInvitationEdge)),
    "nodes": array(Js.Nullable.t(organizationInvitation)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and topic = {
    .
    "__typename": string,
    "id": string,
    "name": string,
    "relatedTopics": array(topic),
    "stargazers": stargazerConnection,
    "viewerHasStarred": bool,
  }
  and issueTimelineItemsEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(issueTimelineItems),
  }
  and commentDeletedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and teamConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(teamEdge)),
    "nodes": array(Js.Nullable.t(team)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and updateSubscriptionPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "subscribable": subscribable,
  }
  and starredRepositoryConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(starredRepositoryEdge)),
    "nodes": array(Js.Nullable.t(repository)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and addCommentPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "commentEdge": issueCommentEdge,
    "subject": node,
    "timelineEdge": issueTimelineItemEdge,
  }
  and gitHubMetadata = {
    .
    "__typename": string,
    "gitHubServicesSha": gitObjectID,
    "gitIpAddresses": array(string),
    "hookIpAddresses": array(string),
    "importerIpAddresses": array(string),
    "isPasswordAuthenticationVerifiable": bool,
    "pagesIpAddresses": array(string),
  }
  and textMatch = {
    .
    "__typename": string,
    "fragment": string,
    "highlights": array(textMatchHighlight),
    "property": string,
  }
  and pullRequestTimelineItemsEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pullRequestTimelineItems),
  }
  and moveProjectCardPayload = {
    .
    "__typename": string,
    "cardEdge": projectCardEdge,
    "clientMutationId": Js.Nullable.t(string),
  }
  and gistConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(gistEdge)),
    "nodes": array(Js.Nullable.t(gist)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and deploymentConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(deploymentEdge)),
    "nodes": array(Js.Nullable.t(deployment)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and externalIdentityScimAttributes = {
    .
    "__typename": string,
    "username": Js.Nullable.t(string),
  }
  and repositoryCollaboratorConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(repositoryCollaboratorEdge)),
    "nodes": array(Js.Nullable.t(user)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and lockLockablePayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "lockedRecord": Js.Nullable.t(lockable),
  }
  and updatePullRequestReviewCommentPayload = {
    .
    "__typename": string,
    "clientMutationId": Js.Nullable.t(string),
    "pullRequestReviewComment": pullRequestReviewComment,
  }
  and smimeSignature = {
    .
    "__typename": string,
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
    "__typename": string,
    "edges": array(Js.Nullable.t(repositoryTopicEdge)),
    "nodes": array(Js.Nullable.t(repositoryTopic)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and deployKey = {
    .
    "__typename": string,
    "createdAt": dateTime,
    "id": string,
    "key": string,
    "readOnly": bool,
    "title": string,
    "verified": bool,
  }
  and milestone = {
    .
    "__typename": string,
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
  and externalIdentitySamlAttributes = {
    .
    "__typename": string,
    "nameId": Js.Nullable.t(string),
  }
  and subscribedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "id": string,
    "subscribable": subscribable,
  }
  and gistCommentEdge = {
    .
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(gistComment),
  }
  and pullRequestCommitConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(pullRequestCommitEdge)),
    "nodes": array(Js.Nullable.t(pullRequestCommit)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and issueConnection = {
    .
    "__typename": string,
    "edges": array(Js.Nullable.t(issueEdge)),
    "nodes": array(Js.Nullable.t(issue)),
    "pageInfo": pageInfo,
    "totalCount": int,
  }
  and unknownSignature = {
    .
    "__typename": string,
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
    "__typename": string,
    "cursor": string,
    "node": Js.Nullable.t(pullRequestReviewComment),
  }
  and reviewDismissedEvent = {
    .
    "__typename": string,
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
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "closable": closable,
    "createdAt": dateTime,
    "id": string,
  }
  and mentionedEvent = {
    .
    "__typename": string,
    "actor": Js.Nullable.t(actor),
    "createdAt": dateTime,
    "databaseId": Js.Nullable.t(int),
    "id": string,
  }
  and referencedEvent = {
    .
    "__typename": string,
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
  module Queries = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      __typename: resolver(unit, string, string),
      [@bs.optional]
      codeOfConduct:
        resolver(
          {. "key": string},
          codeOfConduct,
          Js.Nullable.t(codeOfConduct),
        ),
      [@bs.optional]
      codesOfConduct:
        resolver(unit, codeOfConduct, array(Js.Nullable.t(codeOfConduct))),
      [@bs.optional]
      license: resolver({. "key": string}, license, Js.Nullable.t(license)),
      [@bs.optional]
      licenses: resolver(unit, license, array(Js.Nullable.t(license))),
      [@bs.optional]
      marketplaceCategories:
        resolver(
          {
            .
            "excludeEmpty": Js.Nullable.t(bool),
            "excludeSubcategories": Js.Nullable.t(bool),
            "includeCategories": array(string),
          },
          marketplaceCategory,
          array(marketplaceCategory),
        ),
      [@bs.optional]
      marketplaceCategory:
        resolver(
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
        resolver(
          {. "slug": string},
          marketplaceListing,
          Js.Nullable.t(marketplaceListing),
        ),
      [@bs.optional]
      marketplaceListings:
        resolver(
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
            "slugs": array(Js.Nullable.t(string)),
            "useTopicAliases": Js.Nullable.t(bool),
            "viewerCanAdmin": Js.Nullable.t(bool),
            "withFreeTrialsOnly": Js.Nullable.t(bool),
          },
          marketplaceListingConnection,
          marketplaceListingConnection,
        ),
      [@bs.optional]
      meta: resolver(unit, gitHubMetadata, gitHubMetadata),
      [@bs.optional]
      node: resolver({. "id": string}, node, Js.Nullable.t(node)),
      [@bs.optional]
      nodes:
        resolver(
          {. "ids": array(string)},
          node,
          array(Js.Nullable.t(node)),
        ),
      [@bs.optional]
      organization:
        resolver(
          {. "login": string},
          organization,
          Js.Nullable.t(organization),
        ),
      [@bs.optional]
      rateLimit:
        resolver(
          {. "dryRun": Js.Nullable.t(bool)},
          rateLimit,
          Js.Nullable.t(rateLimit),
        ),
      [@bs.optional]
      relay: resolver(unit, query, query),
      [@bs.optional]
      repository:
        resolver(
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
        resolver(
          {. "login": string},
          repositoryOwner,
          Js.Nullable.t(repositoryOwner),
        ),
      [@bs.optional]
      resource:
        resolver(
          {. "url": uRI},
          uniformResourceLocatable,
          Js.Nullable.t(uniformResourceLocatable),
        ),
      [@bs.optional]
      search:
        resolver(
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
      topic: resolver({. "name": string}, topic, Js.Nullable.t(topic)),
      [@bs.optional]
      user: resolver({. "login": string}, user, Js.Nullable.t(user)),
      [@bs.optional]
      viewer: resolver(unit, user, user),
    };
  };
  module Mutations = {
    [@bs.deriving abstract]
    type t = {
      [@bs.optional]
      __typename: resolver(unit, string, string),
      [@bs.optional]
      acceptTopicSuggestion:
        resolver(
          {. "input": acceptTopicSuggestionInput},
          acceptTopicSuggestionPayload,
          Js.Nullable.t(acceptTopicSuggestionPayload),
        ),
      [@bs.optional]
      addComment:
        resolver(
          {. "input": addCommentInput},
          addCommentPayload,
          Js.Nullable.t(addCommentPayload),
        ),
      [@bs.optional]
      addProjectCard:
        resolver(
          {. "input": addProjectCardInput},
          addProjectCardPayload,
          Js.Nullable.t(addProjectCardPayload),
        ),
      [@bs.optional]
      addProjectColumn:
        resolver(
          {. "input": addProjectColumnInput},
          addProjectColumnPayload,
          Js.Nullable.t(addProjectColumnPayload),
        ),
      [@bs.optional]
      addPullRequestReview:
        resolver(
          {. "input": addPullRequestReviewInput},
          addPullRequestReviewPayload,
          Js.Nullable.t(addPullRequestReviewPayload),
        ),
      [@bs.optional]
      addPullRequestReviewComment:
        resolver(
          {. "input": addPullRequestReviewCommentInput},
          addPullRequestReviewCommentPayload,
          Js.Nullable.t(addPullRequestReviewCommentPayload),
        ),
      [@bs.optional]
      addReaction:
        resolver(
          {. "input": addReactionInput},
          addReactionPayload,
          Js.Nullable.t(addReactionPayload),
        ),
      [@bs.optional]
      addStar:
        resolver(
          {. "input": addStarInput},
          addStarPayload,
          Js.Nullable.t(addStarPayload),
        ),
      [@bs.optional]
      createBranchProtectionRule:
        resolver(
          {. "input": createBranchProtectionRuleInput},
          createBranchProtectionRulePayload,
          Js.Nullable.t(createBranchProtectionRulePayload),
        ),
      [@bs.optional]
      createProject:
        resolver(
          {. "input": createProjectInput},
          createProjectPayload,
          Js.Nullable.t(createProjectPayload),
        ),
      [@bs.optional]
      declineTopicSuggestion:
        resolver(
          {. "input": declineTopicSuggestionInput},
          declineTopicSuggestionPayload,
          Js.Nullable.t(declineTopicSuggestionPayload),
        ),
      [@bs.optional]
      deleteBranchProtectionRule:
        resolver(
          {. "input": deleteBranchProtectionRuleInput},
          deleteBranchProtectionRulePayload,
          Js.Nullable.t(deleteBranchProtectionRulePayload),
        ),
      [@bs.optional]
      deleteProject:
        resolver(
          {. "input": deleteProjectInput},
          deleteProjectPayload,
          Js.Nullable.t(deleteProjectPayload),
        ),
      [@bs.optional]
      deleteProjectCard:
        resolver(
          {. "input": deleteProjectCardInput},
          deleteProjectCardPayload,
          Js.Nullable.t(deleteProjectCardPayload),
        ),
      [@bs.optional]
      deleteProjectColumn:
        resolver(
          {. "input": deleteProjectColumnInput},
          deleteProjectColumnPayload,
          Js.Nullable.t(deleteProjectColumnPayload),
        ),
      [@bs.optional]
      deletePullRequestReview:
        resolver(
          {. "input": deletePullRequestReviewInput},
          deletePullRequestReviewPayload,
          Js.Nullable.t(deletePullRequestReviewPayload),
        ),
      [@bs.optional]
      dismissPullRequestReview:
        resolver(
          {. "input": dismissPullRequestReviewInput},
          dismissPullRequestReviewPayload,
          Js.Nullable.t(dismissPullRequestReviewPayload),
        ),
      [@bs.optional]
      lockLockable:
        resolver(
          {. "input": lockLockableInput},
          lockLockablePayload,
          Js.Nullable.t(lockLockablePayload),
        ),
      [@bs.optional]
      moveProjectCard:
        resolver(
          {. "input": moveProjectCardInput},
          moveProjectCardPayload,
          Js.Nullable.t(moveProjectCardPayload),
        ),
      [@bs.optional]
      moveProjectColumn:
        resolver(
          {. "input": moveProjectColumnInput},
          moveProjectColumnPayload,
          Js.Nullable.t(moveProjectColumnPayload),
        ),
      [@bs.optional]
      removeOutsideCollaborator:
        resolver(
          {. "input": removeOutsideCollaboratorInput},
          removeOutsideCollaboratorPayload,
          Js.Nullable.t(removeOutsideCollaboratorPayload),
        ),
      [@bs.optional]
      removeReaction:
        resolver(
          {. "input": removeReactionInput},
          removeReactionPayload,
          Js.Nullable.t(removeReactionPayload),
        ),
      [@bs.optional]
      removeStar:
        resolver(
          {. "input": removeStarInput},
          removeStarPayload,
          Js.Nullable.t(removeStarPayload),
        ),
      [@bs.optional]
      requestReviews:
        resolver(
          {. "input": requestReviewsInput},
          requestReviewsPayload,
          Js.Nullable.t(requestReviewsPayload),
        ),
      [@bs.optional]
      submitPullRequestReview:
        resolver(
          {. "input": submitPullRequestReviewInput},
          submitPullRequestReviewPayload,
          Js.Nullable.t(submitPullRequestReviewPayload),
        ),
      [@bs.optional]
      unlockLockable:
        resolver(
          {. "input": unlockLockableInput},
          unlockLockablePayload,
          Js.Nullable.t(unlockLockablePayload),
        ),
      [@bs.optional]
      updateBranchProtectionRule:
        resolver(
          {. "input": updateBranchProtectionRuleInput},
          updateBranchProtectionRulePayload,
          Js.Nullable.t(updateBranchProtectionRulePayload),
        ),
      [@bs.optional]
      updateProject:
        resolver(
          {. "input": updateProjectInput},
          updateProjectPayload,
          Js.Nullable.t(updateProjectPayload),
        ),
      [@bs.optional]
      updateProjectCard:
        resolver(
          {. "input": updateProjectCardInput},
          updateProjectCardPayload,
          Js.Nullable.t(updateProjectCardPayload),
        ),
      [@bs.optional]
      updateProjectColumn:
        resolver(
          {. "input": updateProjectColumnInput},
          updateProjectColumnPayload,
          Js.Nullable.t(updateProjectColumnPayload),
        ),
      [@bs.optional]
      updatePullRequestReview:
        resolver(
          {. "input": updatePullRequestReviewInput},
          updatePullRequestReviewPayload,
          Js.Nullable.t(updatePullRequestReviewPayload),
        ),
      [@bs.optional]
      updatePullRequestReviewComment:
        resolver(
          {. "input": updatePullRequestReviewCommentInput},
          updatePullRequestReviewCommentPayload,
          Js.Nullable.t(updatePullRequestReviewCommentPayload),
        ),
      [@bs.optional]
      updateSubscription:
        resolver(
          {. "input": updateSubscriptionInput},
          updateSubscriptionPayload,
          Js.Nullable.t(updateSubscriptionPayload),
        ),
      [@bs.optional]
      updateTopics:
        resolver(
          {. "input": updateTopicsInput},
          updateTopicsPayload,
          Js.Nullable.t(updateTopicsPayload),
        ),
    };
  };
  module Subscriptions = {};
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
};

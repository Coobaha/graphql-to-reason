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
module MakeSchema:
  (Config: SchemaConfig) =>
  {
    type id = Config.Scalars.id;
    type gitSSHRemote = Config.Scalars.gitSSHRemote;
    type gitTimestamp = Config.Scalars.gitTimestamp;
    type hTML = Config.Scalars.hTML;
    type x509Certificate = Config.Scalars.x509Certificate;
    type gitObjectID = Config.Scalars.gitObjectID;
    type date = Config.Scalars.date;
    type dateTime = Config.Scalars.dateTime;
    type uRI = Config.Scalars.uRI;
    type rootResolver('payload, 'fieldType, 'result) =
      Config.resolver(unit, 'payload, 'fieldType, 'result);
    type directiveResolver('payload) = Config.directiveResolver('payload);
    type pullRequestTimelineItemsItemType = [
      | `ADDED_TO_PROJECT_EVENT
      | `ASSIGNED_EVENT
      | `BASE_REF_CHANGED_EVENT
      | `BASE_REF_FORCE_PUSHED_EVENT
      | `CLOSED_EVENT
      | `COMMENT_DELETED_EVENT
      | `CONVERTED_NOTE_TO_ISSUE_EVENT
      | `CROSS_REFERENCED_EVENT
      | `DEMILESTONED_EVENT
      | `DEPLOYED_EVENT
      | `DEPLOYMENT_ENVIRONMENT_CHANGED_EVENT
      | `HEAD_REF_DELETED_EVENT
      | `HEAD_REF_FORCE_PUSHED_EVENT
      | `HEAD_REF_RESTORED_EVENT
      | `ISSUE_COMMENT
      | `LABELED_EVENT
      | `LOCKED_EVENT
      | `MENTIONED_EVENT
      | `MERGED_EVENT
      | `MILESTONED_EVENT
      | `MOVED_COLUMNS_IN_PROJECT_EVENT
      | `PULL_REQUEST_COMMIT
      | `PULL_REQUEST_COMMIT_COMMENT_THREAD
      | `PULL_REQUEST_REVIEW
      | `PULL_REQUEST_REVIEW_THREAD
      | `PULL_REQUEST_REVISION_MARKER
      | `REFERENCED_EVENT
      | `REMOVED_FROM_PROJECT_EVENT
      | `RENAMED_TITLE_EVENT
      | `REOPENED_EVENT
      | `REVIEW_DISMISSED_EVENT
      | `REVIEW_REQUESTED_EVENT
      | `REVIEW_REQUEST_REMOVED_EVENT
      | `SUBSCRIBED_EVENT
      | `UNASSIGNED_EVENT
      | `UNLABELED_EVENT
      | `UNLOCKED_EVENT
      | `UNSUBSCRIBED_EVENT
    ];
    type abs_pullRequestTimelineItemsItemType;
    let pullRequestTimelineItemsItemTypeToJs:
      pullRequestTimelineItemsItemType => abs_pullRequestTimelineItemsItemType;
    let pullRequestTimelineItemsItemTypeFromJs:
      abs_pullRequestTimelineItemsItemType => pullRequestTimelineItemsItemType;
    type projectCardArchivedState = [ | `ARCHIVED | `NOT_ARCHIVED];
    type abs_projectCardArchivedState;
    let projectCardArchivedStateToJs:
      projectCardArchivedState => abs_projectCardArchivedState;
    let projectCardArchivedStateFromJs:
      abs_projectCardArchivedState => projectCardArchivedState;
    type pullRequestReviewEvent = [
      | `APPROVE
      | `COMMENT
      | `DISMISS
      | `REQUEST_CHANGES
    ];
    type abs_pullRequestReviewEvent;
    let pullRequestReviewEventToJs:
      pullRequestReviewEvent => abs_pullRequestReviewEvent;
    let pullRequestReviewEventFromJs:
      abs_pullRequestReviewEvent => pullRequestReviewEvent;
    type issueOrderField = [ | `COMMENTS | `CREATED_AT | `UPDATED_AT];
    type abs_issueOrderField;
    let issueOrderFieldToJs: issueOrderField => abs_issueOrderField;
    let issueOrderFieldFromJs: abs_issueOrderField => issueOrderField;
    type repositoryContributionType = [
      | `COMMIT
      | `ISSUE
      | `PULL_REQUEST
      | `PULL_REQUEST_REVIEW
      | `REPOSITORY
    ];
    type abs_repositoryContributionType;
    let repositoryContributionTypeToJs:
      repositoryContributionType => abs_repositoryContributionType;
    let repositoryContributionTypeFromJs:
      abs_repositoryContributionType => repositoryContributionType;
    type projectColumnPurpose = [ | `DONE | `IN_PROGRESS | `TODO];
    type abs_projectColumnPurpose;
    let projectColumnPurposeToJs:
      projectColumnPurpose => abs_projectColumnPurpose;
    let projectColumnPurposeFromJs:
      abs_projectColumnPurpose => projectColumnPurpose;
    type collaboratorAffiliation = [ | `ALL | `DIRECT | `OUTSIDE];
    type abs_collaboratorAffiliation;
    let collaboratorAffiliationToJs:
      collaboratorAffiliation => abs_collaboratorAffiliation;
    let collaboratorAffiliationFromJs:
      abs_collaboratorAffiliation => collaboratorAffiliation;
    type teamMemberOrderField = [ | `CREATED_AT | `LOGIN];
    type abs_teamMemberOrderField;
    let teamMemberOrderFieldToJs:
      teamMemberOrderField => abs_teamMemberOrderField;
    let teamMemberOrderFieldFromJs:
      abs_teamMemberOrderField => teamMemberOrderField;
    type teamOrderField = [ | `NAME];
    type abs_teamOrderField;
    let teamOrderFieldToJs: teamOrderField => abs_teamOrderField;
    let teamOrderFieldFromJs: abs_teamOrderField => teamOrderField;
    type gistPrivacy = [ | `ALL | `PUBLIC | `SECRET];
    type abs_gistPrivacy;
    let gistPrivacyToJs: gistPrivacy => abs_gistPrivacy;
    let gistPrivacyFromJs: abs_gistPrivacy => gistPrivacy;
    type issueState = [ | `CLOSED | `OPEN];
    type abs_issueState;
    let issueStateToJs: issueState => abs_issueState;
    let issueStateFromJs: abs_issueState => issueState;
    type pullRequestReviewCommentState = [ | `PENDING | `SUBMITTED];
    type abs_pullRequestReviewCommentState;
    let pullRequestReviewCommentStateToJs:
      pullRequestReviewCommentState => abs_pullRequestReviewCommentState;
    let pullRequestReviewCommentStateFromJs:
      abs_pullRequestReviewCommentState => pullRequestReviewCommentState;
    type teamRole = [ | `ADMIN | `MEMBER];
    type abs_teamRole;
    let teamRoleToJs: teamRole => abs_teamRole;
    let teamRoleFromJs: abs_teamRole => teamRole;
    type reactionOrderField = [ | `CREATED_AT];
    type abs_reactionOrderField;
    let reactionOrderFieldToJs: reactionOrderField => abs_reactionOrderField;
    let reactionOrderFieldFromJs: abs_reactionOrderField => reactionOrderField;
    type pullRequestReviewState = [
      | `APPROVED
      | `CHANGES_REQUESTED
      | `COMMENTED
      | `DISMISSED
      | `PENDING
    ];
    type abs_pullRequestReviewState;
    let pullRequestReviewStateToJs:
      pullRequestReviewState => abs_pullRequestReviewState;
    let pullRequestReviewStateFromJs:
      abs_pullRequestReviewState => pullRequestReviewState;
    type topicSuggestionDeclineReason = [
      | `NOT_RELEVANT
      | `PERSONAL_PREFERENCE
      | `TOO_GENERAL
      | `TOO_SPECIFIC
    ];
    type abs_topicSuggestionDeclineReason;
    let topicSuggestionDeclineReasonToJs:
      topicSuggestionDeclineReason => abs_topicSuggestionDeclineReason;
    let topicSuggestionDeclineReasonFromJs:
      abs_topicSuggestionDeclineReason => topicSuggestionDeclineReason;
    type milestoneState = [ | `CLOSED | `OPEN];
    type abs_milestoneState;
    let milestoneStateToJs: milestoneState => abs_milestoneState;
    let milestoneStateFromJs: abs_milestoneState => milestoneState;
    type reactionContent = [
      | `CONFUSED
      | `HEART
      | `HOORAY
      | `LAUGH
      | `THUMBS_DOWN
      | `THUMBS_UP
    ];
    type abs_reactionContent;
    let reactionContentToJs: reactionContent => abs_reactionContent;
    let reactionContentFromJs: abs_reactionContent => reactionContent;
    type gitSignatureState = [
      | `BAD_CERT
      | `BAD_EMAIL
      | `EXPIRED_KEY
      | `GPGVERIFY_ERROR
      | `GPGVERIFY_UNAVAILABLE
      | `INVALID
      | `MALFORMED_SIG
      | `NOT_SIGNING_KEY
      | `NO_USER
      | `OCSP_ERROR
      | `OCSP_PENDING
      | `OCSP_REVOKED
      | `UNKNOWN_KEY
      | `UNKNOWN_SIG_TYPE
      | `UNSIGNED
      | `UNVERIFIED_EMAIL
      | `VALID
    ];
    type abs_gitSignatureState;
    let gitSignatureStateToJs: gitSignatureState => abs_gitSignatureState;
    let gitSignatureStateFromJs: abs_gitSignatureState => gitSignatureState;
    type orderDirection = [ | `ASC | `DESC];
    type abs_orderDirection;
    let orderDirectionToJs: orderDirection => abs_orderDirection;
    let orderDirectionFromJs: abs_orderDirection => orderDirection;
    type repositoryAffiliation = [
      | `COLLABORATOR
      | `ORGANIZATION_MEMBER
      | `OWNER
    ];
    type abs_repositoryAffiliation;
    let repositoryAffiliationToJs:
      repositoryAffiliation => abs_repositoryAffiliation;
    let repositoryAffiliationFromJs:
      abs_repositoryAffiliation => repositoryAffiliation;
    type refOrderField = [ | `ALPHABETICAL | `TAG_COMMIT_DATE];
    type abs_refOrderField;
    let refOrderFieldToJs: refOrderField => abs_refOrderField;
    let refOrderFieldFromJs: abs_refOrderField => refOrderField;
    type repositoryCollaboratorAffiliation = [ | `ALL | `OUTSIDE];
    type abs_repositoryCollaboratorAffiliation;
    let repositoryCollaboratorAffiliationToJs:
      repositoryCollaboratorAffiliation =>
      abs_repositoryCollaboratorAffiliation;
    let repositoryCollaboratorAffiliationFromJs:
      abs_repositoryCollaboratorAffiliation =>
      repositoryCollaboratorAffiliation;
    type repositoryPermission = [ | `ADMIN | `READ | `WRITE];
    type abs_repositoryPermission;
    let repositoryPermissionToJs:
      repositoryPermission => abs_repositoryPermission;
    let repositoryPermissionFromJs:
      abs_repositoryPermission => repositoryPermission;
    type repositoryOrderField = [
      | `CREATED_AT
      | `NAME
      | `PUSHED_AT
      | `STARGAZERS
      | `UPDATED_AT
    ];
    type abs_repositoryOrderField;
    let repositoryOrderFieldToJs:
      repositoryOrderField => abs_repositoryOrderField;
    let repositoryOrderFieldFromJs:
      abs_repositoryOrderField => repositoryOrderField;
    type pullRequestPubSubTopic = [
      | `HEAD_REF
      | `MARKASREAD
      | `STATE
      | `TIMELINE
      | `UPDATED
    ];
    type abs_pullRequestPubSubTopic;
    let pullRequestPubSubTopicToJs:
      pullRequestPubSubTopic => abs_pullRequestPubSubTopic;
    let pullRequestPubSubTopicFromJs:
      abs_pullRequestPubSubTopic => pullRequestPubSubTopic;
    type teamPrivacy = [ | `SECRET | `VISIBLE];
    type abs_teamPrivacy;
    let teamPrivacyToJs: teamPrivacy => abs_teamPrivacy;
    let teamPrivacyFromJs: abs_teamPrivacy => teamPrivacy;
    type teamMemberRole = [ | `MAINTAINER | `MEMBER];
    type abs_teamMemberRole;
    let teamMemberRoleToJs: teamMemberRole => abs_teamMemberRole;
    let teamMemberRoleFromJs: abs_teamMemberRole => teamMemberRole;
    type releaseOrderField = [ | `CREATED_AT | `NAME];
    type abs_releaseOrderField;
    let releaseOrderFieldToJs: releaseOrderField => abs_releaseOrderField;
    let releaseOrderFieldFromJs: abs_releaseOrderField => releaseOrderField;
    type issuePubSubTopic = [ | `MARKASREAD | `STATE | `TIMELINE | `UPDATED];
    type abs_issuePubSubTopic;
    let issuePubSubTopicToJs: issuePubSubTopic => abs_issuePubSubTopic;
    let issuePubSubTopicFromJs: abs_issuePubSubTopic => issuePubSubTopic;
    type mergeableState = [ | `CONFLICTING | `MERGEABLE | `UNKNOWN];
    type abs_mergeableState;
    let mergeableStateToJs: mergeableState => abs_mergeableState;
    let mergeableStateFromJs: abs_mergeableState => mergeableState;
    type organizationInvitationType = [ | `EMAIL | `USER];
    type abs_organizationInvitationType;
    let organizationInvitationTypeToJs:
      organizationInvitationType => abs_organizationInvitationType;
    let organizationInvitationTypeFromJs:
      abs_organizationInvitationType => organizationInvitationType;
    type repositoryPrivacy = [ | `PRIVATE | `PUBLIC];
    type abs_repositoryPrivacy;
    let repositoryPrivacyToJs: repositoryPrivacy => abs_repositoryPrivacy;
    let repositoryPrivacyFromJs: abs_repositoryPrivacy => repositoryPrivacy;
    type starOrderField = [ | `STARRED_AT];
    type abs_starOrderField;
    let starOrderFieldToJs: starOrderField => abs_starOrderField;
    let starOrderFieldFromJs: abs_starOrderField => starOrderField;
    type pullRequestOrderField = [ | `CREATED_AT | `UPDATED_AT];
    type abs_pullRequestOrderField;
    let pullRequestOrderFieldToJs:
      pullRequestOrderField => abs_pullRequestOrderField;
    let pullRequestOrderFieldFromJs:
      abs_pullRequestOrderField => pullRequestOrderField;
    type projectOrderField = [ | `CREATED_AT | `NAME | `UPDATED_AT];
    type abs_projectOrderField;
    let projectOrderFieldToJs: projectOrderField => abs_projectOrderField;
    let projectOrderFieldFromJs: abs_projectOrderField => projectOrderField;
    type projectState = [ | `CLOSED | `OPEN];
    type abs_projectState;
    let projectStateToJs: projectState => abs_projectState;
    let projectStateFromJs: abs_projectState => projectState;
    type defaultRepositoryPermissionField = [
      | `ADMIN
      | `NONE
      | `READ
      | `WRITE
    ];
    type abs_defaultRepositoryPermissionField;
    let defaultRepositoryPermissionFieldToJs:
      defaultRepositoryPermissionField => abs_defaultRepositoryPermissionField;
    let defaultRepositoryPermissionFieldFromJs:
      abs_defaultRepositoryPermissionField => defaultRepositoryPermissionField;
    type teamRepositoryOrderField = [
      | `CREATED_AT
      | `NAME
      | `PERMISSION
      | `PUSHED_AT
      | `STARGAZERS
      | `UPDATED_AT
    ];
    type abs_teamRepositoryOrderField;
    let teamRepositoryOrderFieldToJs:
      teamRepositoryOrderField => abs_teamRepositoryOrderField;
    let teamRepositoryOrderFieldFromJs:
      abs_teamRepositoryOrderField => teamRepositoryOrderField;
    type deploymentStatusState = [
      | `ERROR
      | `FAILURE
      | `INACTIVE
      | `PENDING
      | `SUCCESS
    ];
    type abs_deploymentStatusState;
    let deploymentStatusStateToJs:
      deploymentStatusState => abs_deploymentStatusState;
    let deploymentStatusStateFromJs:
      abs_deploymentStatusState => deploymentStatusState;
    type repositoryLockReason = [ | `BILLING | `MIGRATING | `MOVING | `RENAME];
    type abs_repositoryLockReason;
    let repositoryLockReasonToJs:
      repositoryLockReason => abs_repositoryLockReason;
    let repositoryLockReasonFromJs:
      abs_repositoryLockReason => repositoryLockReason;
    type issueTimelineItemsItemType = [
      | `ADDED_TO_PROJECT_EVENT
      | `ASSIGNED_EVENT
      | `CLOSED_EVENT
      | `COMMENT_DELETED_EVENT
      | `CONVERTED_NOTE_TO_ISSUE_EVENT
      | `CROSS_REFERENCED_EVENT
      | `DEMILESTONED_EVENT
      | `ISSUE_COMMENT
      | `LABELED_EVENT
      | `LOCKED_EVENT
      | `MENTIONED_EVENT
      | `MILESTONED_EVENT
      | `MOVED_COLUMNS_IN_PROJECT_EVENT
      | `REFERENCED_EVENT
      | `REMOVED_FROM_PROJECT_EVENT
      | `RENAMED_TITLE_EVENT
      | `REOPENED_EVENT
      | `SUBSCRIBED_EVENT
      | `UNASSIGNED_EVENT
      | `UNLABELED_EVENT
      | `UNLOCKED_EVENT
      | `UNSUBSCRIBED_EVENT
    ];
    type abs_issueTimelineItemsItemType;
    let issueTimelineItemsItemTypeToJs:
      issueTimelineItemsItemType => abs_issueTimelineItemsItemType;
    let issueTimelineItemsItemTypeFromJs:
      abs_issueTimelineItemsItemType => issueTimelineItemsItemType;
    type gistOrderField = [ | `CREATED_AT | `PUSHED_AT | `UPDATED_AT];
    type abs_gistOrderField;
    let gistOrderFieldToJs: gistOrderField => abs_gistOrderField;
    let gistOrderFieldFromJs: abs_gistOrderField => gistOrderField;
    type projectCardState = [ | `CONTENT_ONLY | `NOTE_ONLY | `REDACTED];
    type abs_projectCardState;
    let projectCardStateToJs: projectCardState => abs_projectCardState;
    let projectCardStateFromJs: abs_projectCardState => projectCardState;
    type organizationInvitationRole = [
      | `ADMIN
      | `BILLING_MANAGER
      | `DIRECT_MEMBER
      | `REINSTATE
    ];
    type abs_organizationInvitationRole;
    let organizationInvitationRoleToJs:
      organizationInvitationRole => abs_organizationInvitationRole;
    let organizationInvitationRoleFromJs:
      abs_organizationInvitationRole => organizationInvitationRole;
    type commentCannotUpdateReason = [
      | `INSUFFICIENT_ACCESS
      | `LOCKED
      | `LOGIN_REQUIRED
      | `MAINTENANCE
      | `VERIFIED_EMAIL_REQUIRED
    ];
    type abs_commentCannotUpdateReason;
    let commentCannotUpdateReasonToJs:
      commentCannotUpdateReason => abs_commentCannotUpdateReason;
    let commentCannotUpdateReasonFromJs:
      abs_commentCannotUpdateReason => commentCannotUpdateReason;
    type searchType = [ | `ISSUE | `REPOSITORY | `USER];
    type abs_searchType;
    let searchTypeToJs: searchType => abs_searchType;
    let searchTypeFromJs: abs_searchType => searchType;
    type teamMembershipType = [ | `ALL | `CHILD_TEAM | `IMMEDIATE];
    type abs_teamMembershipType;
    let teamMembershipTypeToJs: teamMembershipType => abs_teamMembershipType;
    let teamMembershipTypeFromJs: abs_teamMembershipType => teamMembershipType;
    type statusState = [
      | `ERROR
      | `EXPECTED
      | `FAILURE
      | `PENDING
      | `SUCCESS
    ];
    type abs_statusState;
    let statusStateToJs: statusState => abs_statusState;
    let statusStateFromJs: abs_statusState => statusState;
    type subscriptionState = [ | `IGNORED | `SUBSCRIBED | `UNSUBSCRIBED];
    type abs_subscriptionState;
    let subscriptionStateToJs: subscriptionState => abs_subscriptionState;
    let subscriptionStateFromJs: abs_subscriptionState => subscriptionState;
    type languageOrderField = [ | `SIZE];
    type abs_languageOrderField;
    let languageOrderFieldToJs: languageOrderField => abs_languageOrderField;
    let languageOrderFieldFromJs: abs_languageOrderField => languageOrderField;
    type deploymentState = [
      | `ABANDONED
      | `ACTIVE
      | `DESTROYED
      | `ERROR
      | `FAILURE
      | `INACTIVE
      | `PENDING
    ];
    type abs_deploymentState;
    let deploymentStateToJs: deploymentState => abs_deploymentState;
    let deploymentStateFromJs: abs_deploymentState => deploymentState;
    type pullRequestState = [ | `CLOSED | `MERGED | `OPEN];
    type abs_pullRequestState;
    let pullRequestStateToJs: pullRequestState => abs_pullRequestState;
    let pullRequestStateFromJs: abs_pullRequestState => pullRequestState;
    type lockReason = [ | `OFF_TOPIC | `RESOLVED | `SPAM | `TOO_HEATED];
    type abs_lockReason;
    let lockReasonToJs: lockReason => abs_lockReason;
    let lockReasonFromJs: abs_lockReason => lockReason;
    type commentAuthorAssociation = [
      | `COLLABORATOR
      | `CONTRIBUTOR
      | `FIRST_TIMER
      | `FIRST_TIME_CONTRIBUTOR
      | `MEMBER
      | `NONE
      | `OWNER
    ];
    type abs_commentAuthorAssociation;
    let commentAuthorAssociationToJs:
      commentAuthorAssociation => abs_commentAuthorAssociation;
    let commentAuthorAssociationFromJs:
      abs_commentAuthorAssociation => commentAuthorAssociation;
    type milestoneOrderField = [
      | `CREATED_AT
      | `DUE_DATE
      | `NUMBER
      | `UPDATED_AT
    ];
    type abs_milestoneOrderField;
    let milestoneOrderFieldToJs:
      milestoneOrderField => abs_milestoneOrderField;
    let milestoneOrderFieldFromJs:
      abs_milestoneOrderField => milestoneOrderField;
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
      "edges":
        Js.Nullable.t(array(Js.Nullable.t(branchProtectionRuleEdge))),
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
      "nodes":
        Js.Nullable.t(array(Js.Nullable.t(pullRequestReviewComment))),
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
      "nodes":
        Js.Nullable.t(array(Js.Nullable.t(reviewDismissalAllowance))),
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
        Js.Nullable.t(
          array(Js.Nullable.t(branchProtectionRuleConflictEdge)),
        ),
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
      "deletePullRequestReview":
        Js.Nullable.t(deletePullRequestReviewPayload),
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
      "submitPullRequestReview":
        Js.Nullable.t(submitPullRequestReviewPayload),
      "unlockLockable": Js.Nullable.t(unlockLockablePayload),
      "updateBranchProtectionRule":
        Js.Nullable.t(updateBranchProtectionRulePayload),
      "updateProject": Js.Nullable.t(updateProjectPayload),
      "updateProjectCard": Js.Nullable.t(updateProjectCardPayload),
      "updateProjectColumn": Js.Nullable.t(updateProjectColumnPayload),
      "updatePullRequestReview":
        Js.Nullable.t(updatePullRequestReviewPayload),
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
    and externalIdentityScimAttributes = {
      .
      "username": Js.Nullable.t(string),
    }
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
    external issueToMilestoneItem : issue => milestoneItem = "%identity";
    external pullRequestToMilestoneItem : pullRequest => milestoneItem =
      "%identity";
    external teamToReviewDismissalAllowanceActor :
      team => reviewDismissalAllowanceActor =
      "%identity";
    external userToReviewDismissalAllowanceActor :
      user => reviewDismissalAllowanceActor =
      "%identity";
    external teamToRequestedReviewer : team => requestedReviewer = "%identity";
    external userToRequestedReviewer : user => requestedReviewer = "%identity";
    external issueToProjectCardItem : issue => projectCardItem = "%identity";
    external pullRequestToProjectCardItem : pullRequest => projectCardItem =
      "%identity";
    external issueToReferencedSubject : issue => referencedSubject =
      "%identity";
    external pullRequestToReferencedSubject : pullRequest => referencedSubject =
      "%identity";
    external addedToProjectEventToIssueTimelineItems :
      addedToProjectEvent => issueTimelineItems =
      "%identity";
    external assignedEventToIssueTimelineItems :
      assignedEvent => issueTimelineItems =
      "%identity";
    external closedEventToIssueTimelineItems :
      closedEvent => issueTimelineItems =
      "%identity";
    external commentDeletedEventToIssueTimelineItems :
      commentDeletedEvent => issueTimelineItems =
      "%identity";
    external convertedNoteToIssueEventToIssueTimelineItems :
      convertedNoteToIssueEvent => issueTimelineItems =
      "%identity";
    external crossReferencedEventToIssueTimelineItems :
      crossReferencedEvent => issueTimelineItems =
      "%identity";
    external demilestonedEventToIssueTimelineItems :
      demilestonedEvent => issueTimelineItems =
      "%identity";
    external issueCommentToIssueTimelineItems :
      issueComment => issueTimelineItems =
      "%identity";
    external labeledEventToIssueTimelineItems :
      labeledEvent => issueTimelineItems =
      "%identity";
    external lockedEventToIssueTimelineItems :
      lockedEvent => issueTimelineItems =
      "%identity";
    external mentionedEventToIssueTimelineItems :
      mentionedEvent => issueTimelineItems =
      "%identity";
    external milestonedEventToIssueTimelineItems :
      milestonedEvent => issueTimelineItems =
      "%identity";
    external movedColumnsInProjectEventToIssueTimelineItems :
      movedColumnsInProjectEvent => issueTimelineItems =
      "%identity";
    external referencedEventToIssueTimelineItems :
      referencedEvent => issueTimelineItems =
      "%identity";
    external removedFromProjectEventToIssueTimelineItems :
      removedFromProjectEvent => issueTimelineItems =
      "%identity";
    external renamedTitleEventToIssueTimelineItems :
      renamedTitleEvent => issueTimelineItems =
      "%identity";
    external reopenedEventToIssueTimelineItems :
      reopenedEvent => issueTimelineItems =
      "%identity";
    external subscribedEventToIssueTimelineItems :
      subscribedEvent => issueTimelineItems =
      "%identity";
    external unassignedEventToIssueTimelineItems :
      unassignedEvent => issueTimelineItems =
      "%identity";
    external unlabeledEventToIssueTimelineItems :
      unlabeledEvent => issueTimelineItems =
      "%identity";
    external unlockedEventToIssueTimelineItems :
      unlockedEvent => issueTimelineItems =
      "%identity";
    external unsubscribedEventToIssueTimelineItems :
      unsubscribedEvent => issueTimelineItems =
      "%identity";
    external assignedEventToPullRequestTimelineItem :
      assignedEvent => pullRequestTimelineItem =
      "%identity";
    external baseRefForcePushedEventToPullRequestTimelineItem :
      baseRefForcePushedEvent => pullRequestTimelineItem =
      "%identity";
    external closedEventToPullRequestTimelineItem :
      closedEvent => pullRequestTimelineItem =
      "%identity";
    external commitToPullRequestTimelineItem :
      commit => pullRequestTimelineItem =
      "%identity";
    external commitCommentThreadToPullRequestTimelineItem :
      commitCommentThread => pullRequestTimelineItem =
      "%identity";
    external crossReferencedEventToPullRequestTimelineItem :
      crossReferencedEvent => pullRequestTimelineItem =
      "%identity";
    external demilestonedEventToPullRequestTimelineItem :
      demilestonedEvent => pullRequestTimelineItem =
      "%identity";
    external deployedEventToPullRequestTimelineItem :
      deployedEvent => pullRequestTimelineItem =
      "%identity";
    external deploymentEnvironmentChangedEventToPullRequestTimelineItem :
      deploymentEnvironmentChangedEvent => pullRequestTimelineItem =
      "%identity";
    external headRefDeletedEventToPullRequestTimelineItem :
      headRefDeletedEvent => pullRequestTimelineItem =
      "%identity";
    external headRefForcePushedEventToPullRequestTimelineItem :
      headRefForcePushedEvent => pullRequestTimelineItem =
      "%identity";
    external headRefRestoredEventToPullRequestTimelineItem :
      headRefRestoredEvent => pullRequestTimelineItem =
      "%identity";
    external issueCommentToPullRequestTimelineItem :
      issueComment => pullRequestTimelineItem =
      "%identity";
    external labeledEventToPullRequestTimelineItem :
      labeledEvent => pullRequestTimelineItem =
      "%identity";
    external lockedEventToPullRequestTimelineItem :
      lockedEvent => pullRequestTimelineItem =
      "%identity";
    external mergedEventToPullRequestTimelineItem :
      mergedEvent => pullRequestTimelineItem =
      "%identity";
    external milestonedEventToPullRequestTimelineItem :
      milestonedEvent => pullRequestTimelineItem =
      "%identity";
    external pullRequestReviewToPullRequestTimelineItem :
      pullRequestReview => pullRequestTimelineItem =
      "%identity";
    external pullRequestReviewCommentToPullRequestTimelineItem :
      pullRequestReviewComment => pullRequestTimelineItem =
      "%identity";
    external pullRequestReviewThreadToPullRequestTimelineItem :
      pullRequestReviewThread => pullRequestTimelineItem =
      "%identity";
    external referencedEventToPullRequestTimelineItem :
      referencedEvent => pullRequestTimelineItem =
      "%identity";
    external renamedTitleEventToPullRequestTimelineItem :
      renamedTitleEvent => pullRequestTimelineItem =
      "%identity";
    external reopenedEventToPullRequestTimelineItem :
      reopenedEvent => pullRequestTimelineItem =
      "%identity";
    external reviewDismissedEventToPullRequestTimelineItem :
      reviewDismissedEvent => pullRequestTimelineItem =
      "%identity";
    external reviewRequestRemovedEventToPullRequestTimelineItem :
      reviewRequestRemovedEvent => pullRequestTimelineItem =
      "%identity";
    external reviewRequestedEventToPullRequestTimelineItem :
      reviewRequestedEvent => pullRequestTimelineItem =
      "%identity";
    external subscribedEventToPullRequestTimelineItem :
      subscribedEvent => pullRequestTimelineItem =
      "%identity";
    external unassignedEventToPullRequestTimelineItem :
      unassignedEvent => pullRequestTimelineItem =
      "%identity";
    external unlabeledEventToPullRequestTimelineItem :
      unlabeledEvent => pullRequestTimelineItem =
      "%identity";
    external unlockedEventToPullRequestTimelineItem :
      unlockedEvent => pullRequestTimelineItem =
      "%identity";
    external unsubscribedEventToPullRequestTimelineItem :
      unsubscribedEvent => pullRequestTimelineItem =
      "%identity";
    external assignedEventToIssueTimelineItem :
      assignedEvent => issueTimelineItem =
      "%identity";
    external closedEventToIssueTimelineItem : closedEvent => issueTimelineItem =
      "%identity";
    external commitToIssueTimelineItem : commit => issueTimelineItem =
      "%identity";
    external crossReferencedEventToIssueTimelineItem :
      crossReferencedEvent => issueTimelineItem =
      "%identity";
    external demilestonedEventToIssueTimelineItem :
      demilestonedEvent => issueTimelineItem =
      "%identity";
    external issueCommentToIssueTimelineItem :
      issueComment => issueTimelineItem =
      "%identity";
    external labeledEventToIssueTimelineItem :
      labeledEvent => issueTimelineItem =
      "%identity";
    external lockedEventToIssueTimelineItem : lockedEvent => issueTimelineItem =
      "%identity";
    external milestonedEventToIssueTimelineItem :
      milestonedEvent => issueTimelineItem =
      "%identity";
    external referencedEventToIssueTimelineItem :
      referencedEvent => issueTimelineItem =
      "%identity";
    external renamedTitleEventToIssueTimelineItem :
      renamedTitleEvent => issueTimelineItem =
      "%identity";
    external reopenedEventToIssueTimelineItem :
      reopenedEvent => issueTimelineItem =
      "%identity";
    external subscribedEventToIssueTimelineItem :
      subscribedEvent => issueTimelineItem =
      "%identity";
    external unassignedEventToIssueTimelineItem :
      unassignedEvent => issueTimelineItem =
      "%identity";
    external unlabeledEventToIssueTimelineItem :
      unlabeledEvent => issueTimelineItem =
      "%identity";
    external unlockedEventToIssueTimelineItem :
      unlockedEvent => issueTimelineItem =
      "%identity";
    external unsubscribedEventToIssueTimelineItem :
      unsubscribedEvent => issueTimelineItem =
      "%identity";
    external issueToRenamedTitleSubject : issue => renamedTitleSubject =
      "%identity";
    external pullRequestToRenamedTitleSubject :
      pullRequest => renamedTitleSubject =
      "%identity";
    external commitToCloser : commit => closer = "%identity";
    external pullRequestToCloser : pullRequest => closer = "%identity";
    external teamToPushAllowanceActor : team => pushAllowanceActor =
      "%identity";
    external userToPushAllowanceActor : user => pushAllowanceActor =
      "%identity";
    external issueToIssueOrPullRequest : issue => issueOrPullRequest =
      "%identity";
    external pullRequestToIssueOrPullRequest :
      pullRequest => issueOrPullRequest =
      "%identity";
    external addedToProjectEventToPullRequestTimelineItems :
      addedToProjectEvent => pullRequestTimelineItems =
      "%identity";
    external assignedEventToPullRequestTimelineItems :
      assignedEvent => pullRequestTimelineItems =
      "%identity";
    external baseRefChangedEventToPullRequestTimelineItems :
      baseRefChangedEvent => pullRequestTimelineItems =
      "%identity";
    external baseRefForcePushedEventToPullRequestTimelineItems :
      baseRefForcePushedEvent => pullRequestTimelineItems =
      "%identity";
    external closedEventToPullRequestTimelineItems :
      closedEvent => pullRequestTimelineItems =
      "%identity";
    external commentDeletedEventToPullRequestTimelineItems :
      commentDeletedEvent => pullRequestTimelineItems =
      "%identity";
    external convertedNoteToIssueEventToPullRequestTimelineItems :
      convertedNoteToIssueEvent => pullRequestTimelineItems =
      "%identity";
    external crossReferencedEventToPullRequestTimelineItems :
      crossReferencedEvent => pullRequestTimelineItems =
      "%identity";
    external demilestonedEventToPullRequestTimelineItems :
      demilestonedEvent => pullRequestTimelineItems =
      "%identity";
    external deployedEventToPullRequestTimelineItems :
      deployedEvent => pullRequestTimelineItems =
      "%identity";
    external deploymentEnvironmentChangedEventToPullRequestTimelineItems :
      deploymentEnvironmentChangedEvent => pullRequestTimelineItems =
      "%identity";
    external headRefDeletedEventToPullRequestTimelineItems :
      headRefDeletedEvent => pullRequestTimelineItems =
      "%identity";
    external headRefForcePushedEventToPullRequestTimelineItems :
      headRefForcePushedEvent => pullRequestTimelineItems =
      "%identity";
    external headRefRestoredEventToPullRequestTimelineItems :
      headRefRestoredEvent => pullRequestTimelineItems =
      "%identity";
    external issueCommentToPullRequestTimelineItems :
      issueComment => pullRequestTimelineItems =
      "%identity";
    external labeledEventToPullRequestTimelineItems :
      labeledEvent => pullRequestTimelineItems =
      "%identity";
    external lockedEventToPullRequestTimelineItems :
      lockedEvent => pullRequestTimelineItems =
      "%identity";
    external mentionedEventToPullRequestTimelineItems :
      mentionedEvent => pullRequestTimelineItems =
      "%identity";
    external mergedEventToPullRequestTimelineItems :
      mergedEvent => pullRequestTimelineItems =
      "%identity";
    external milestonedEventToPullRequestTimelineItems :
      milestonedEvent => pullRequestTimelineItems =
      "%identity";
    external movedColumnsInProjectEventToPullRequestTimelineItems :
      movedColumnsInProjectEvent => pullRequestTimelineItems =
      "%identity";
    external pullRequestCommitToPullRequestTimelineItems :
      pullRequestCommit => pullRequestTimelineItems =
      "%identity";
    external pullRequestReviewToPullRequestTimelineItems :
      pullRequestReview => pullRequestTimelineItems =
      "%identity";
    external pullRequestReviewThreadToPullRequestTimelineItems :
      pullRequestReviewThread => pullRequestTimelineItems =
      "%identity";
    external referencedEventToPullRequestTimelineItems :
      referencedEvent => pullRequestTimelineItems =
      "%identity";
    external removedFromProjectEventToPullRequestTimelineItems :
      removedFromProjectEvent => pullRequestTimelineItems =
      "%identity";
    external renamedTitleEventToPullRequestTimelineItems :
      renamedTitleEvent => pullRequestTimelineItems =
      "%identity";
    external reopenedEventToPullRequestTimelineItems :
      reopenedEvent => pullRequestTimelineItems =
      "%identity";
    external reviewDismissedEventToPullRequestTimelineItems :
      reviewDismissedEvent => pullRequestTimelineItems =
      "%identity";
    external reviewRequestRemovedEventToPullRequestTimelineItems :
      reviewRequestRemovedEvent => pullRequestTimelineItems =
      "%identity";
    external reviewRequestedEventToPullRequestTimelineItems :
      reviewRequestedEvent => pullRequestTimelineItems =
      "%identity";
    external subscribedEventToPullRequestTimelineItems :
      subscribedEvent => pullRequestTimelineItems =
      "%identity";
    external unassignedEventToPullRequestTimelineItems :
      unassignedEvent => pullRequestTimelineItems =
      "%identity";
    external unlabeledEventToPullRequestTimelineItems :
      unlabeledEvent => pullRequestTimelineItems =
      "%identity";
    external unlockedEventToPullRequestTimelineItems :
      unlockedEvent => pullRequestTimelineItems =
      "%identity";
    external unsubscribedEventToPullRequestTimelineItems :
      unsubscribedEvent => pullRequestTimelineItems =
      "%identity";
    external organizationToCollectionItemContent :
      organization => collectionItemContent =
      "%identity";
    external repositoryToCollectionItemContent :
      repository => collectionItemContent =
      "%identity";
    external userToCollectionItemContent : user => collectionItemContent =
      "%identity";
    external issueToSearchResultItem : issue => searchResultItem = "%identity";
    external marketplaceListingToSearchResultItem :
      marketplaceListing => searchResultItem =
      "%identity";
    external organizationToSearchResultItem : organization => searchResultItem =
      "%identity";
    external pullRequestToSearchResultItem : pullRequest => searchResultItem =
      "%identity";
    external repositoryToSearchResultItem : repository => searchResultItem =
      "%identity";
    external userToSearchResultItem : user => searchResultItem = "%identity";
    module Query: {
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
    module Mutation: {
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
    module Subscription: {};
    module Directives: {
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

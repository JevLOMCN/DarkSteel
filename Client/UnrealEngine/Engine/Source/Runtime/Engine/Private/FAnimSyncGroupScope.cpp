// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FAnimSyncGroupScope @ 14752f360

FAnimSyncGroupScope * __thiscall
UE::Anim::FAnimSyncGroupScope::FAnimSyncGroupScope
          (FAnimSyncGroupScope *this,FAnimationBaseContext *param_1,FName param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  FAnimSyncGroupScope *pFVar3;
  FAnimInstanceProxy *pFVar4;
  longlong local_res8;
  longlong *local_res10;
  code **local_res18 [2];
  code *local_28;
  undefined8 **local_20;
  code *local_18;
  undefined8 **local_10;
  
  this->_padding_ = (longlong)&___7FAnimSyncGroupScope_Anim_UE__6B_;
  this->NodeId = param_1->CurrentNodeId;
  this->Proxy = param_1->AnimInstanceProxy;
  this->OuterProxy = (FAnimInstanceProxy *)0x0;
  this->SyncGroup = param_2;
  this->GroupRole = param_3;
  if (param_1->SharedContext == (FAnimationUpdateSharedContext *)0x0) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1442789968400351459>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0xe3,"SharedContext != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnimSyncGroupScope *)(*pcVar1)();
      return pFVar3;
    }
  }
  else {
    local_res8 = 0;
    local_res10 = &local_res8;
    local_20 = &local_res10;
    local_28 = Core::Private::Function::
               TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FAnimSyncGroupScope>'::__l5::<lambda_1>,void,UE::Anim::FAnimSyncGroupScope_&>
               ::Call;
    local_res18[0] = &local_28;
    local_10 = local_res18;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
               ::Call;
    FMessageStack::TopMessage
              (&param_1->SharedContext->MessageStack,TypeName,
               (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_18);
    if (local_res8 != 0) {
      pFVar4 = *(FAnimInstanceProxy **)(local_res8 + 0x18);
      if (pFVar4 == (FAnimInstanceProxy *)0x0) {
        pFVar4 = *(FAnimInstanceProxy **)(local_res8 + 0x10);
      }
      this->OuterProxy = pFVar4;
    }
  }
  return this;
}

// AddTickRecord @ 147543600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Anim::FAnimSyncGroupScope::AddTickRecord
          (FAnimSyncGroupScope *this,FAnimTickRecord *param_1,FAnimSyncParams *param_2,
          FAnimSyncDebugInfo *param_3)

{
  EAnimSyncMethod EVar1;
  DWORD DVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  USkeletalMeshComponent *pUVar6;
  UWorld *pUVar7;
  ulong64 uVar8;
  FAnimInstanceProxy *pFVar9;
  undefined1 auStackY_a8 [32];
  FName local_78;
  LARGE_INTEGER local_70;
  FAnimSyncParams local_68;
  LARGE_INTEGER *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_68.GroupName = param_2->GroupName;
  local_68.Role = param_2->Role;
  local_68.Method = param_2->Method;
  local_68.bOverridePositionWhenJoiningSyncGroupAsLeader =
       param_2->bOverridePositionWhenJoiningSyncGroupAsLeader;
  local_68._14_2_ = *(undefined2 *)&param_2->field_0xe;
  EVar1 = param_2->Method;
  if (EVar1 == DoNotSync) {
LAB_1475437ee:
    if (param_2->GroupName == (FName)0x0) goto LAB_14754381a;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSyncParams.GroupName == NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSyncScope.cpp"
                       ,0x28,L"");
  }
  else {
    if (EVar1 != SyncGroup) {
      if (EVar1 == Graph) {
        if ((param_2->GroupName != (FName)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InSyncParams.GroupName == NAME_None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSyncScope.cpp"
                               ,0x2f,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_68.GroupName = this->SyncGroup;
        local_68.Role = this->GroupRole;
        if ((param_3->SourceProxy != (FAnimInstanceProxy *)0x0) && (param_3->SourceNodeId != -1)) {
          FAnimTrace::OutputAnimNodeAttribute
                    (this->Proxy,param_3->SourceProxy,this->NodeId,param_3->SourceNodeId,
                     FAnimSync::Attribute);
          local_78 = this->SyncGroup;
          DVar2 = param_3->SourceNodeId;
          pFVar9 = param_3->SourceProxy;
          if (-1 < AnimationChannel->Enabled) {
            pUVar6 = FAnimInstanceProxy::GetSkelMeshComponent(pFVar9);
            bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
            if (!bVar4) {
              if (pUVar6 == (USkeletalMeshComponent *)0x0) goto LAB_14754381a;
              this_00 = (AActor *)pUVar6->_padding_;
              bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
              if ((!bVar4) || (this_00 == (AActor *)0x0)) goto LAB_14754381a;
              pUVar7 = AActor::GetWorld(this_00);
              bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
              if (!bVar4) goto LAB_14754381a;
            }
            FObjectTrace::OutputObject(pFVar9->AnimInstanceObject);
            uVar5 = FAnimTrace::OutputName(&local_78);
            if (-1 < AnimationChannel->Enabled) {
              Trace::Private::FLogScope::Enter<FAnimationSyncFields>((TLogScope<0> *)&local_58);
              QueryPerformanceCounter(&local_70);
              *local_58 = local_70;
              uVar8 = FObjectTrace::GetObjectId(pFVar9->AnimInstanceObject);
              local_58[1].QuadPart = uVar8;
              local_58[2].s.LowPart = DVar2;
              *(uint *)((longlong)local_58 + 0x14) = uVar5;
              *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
            }
          }
        }
        goto LAB_14754381a;
      }
      goto LAB_1475437ee;
    }
    if (param_2->GroupName != (FName)0x0) goto LAB_14754381a;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSyncParams.GroupName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimSyncScope.cpp"
                       ,0x2b,L"");
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14754381a:
  pFVar9 = this->OuterProxy;
  if (pFVar9 == (FAnimInstanceProxy *)0x0) {
    pFVar9 = this->Proxy;
  }
  FAnimSync::AddTickRecord(&pFVar9->Sync,param_1,&local_68);
  return;
}

// SetMirror @ 147579100

void __thiscall
UE::Anim::FAnimSyncGroupScope::SetMirror(FAnimSyncGroupScope *this,UMirrorDataTable *param_1)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = this->OuterProxy;
  if (pFVar1 == (FAnimInstanceProxy *)0x0) {
    pFVar1 = this->Proxy;
  }
  (pFVar1->Sync).MirrorDataTable = param_1;
  return;
}


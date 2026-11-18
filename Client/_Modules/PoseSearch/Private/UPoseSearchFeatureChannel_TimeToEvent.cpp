// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 9

// StaticClass @ 14a8d5770

UClass * __cdecl UPoseSearchFeatureChannel_TimeToEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_TimeToEvent",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_TimeToEvent,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_TimeToEvent>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_TimeToEvent>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton;
}

// UPoseSearchFeatureChannel_TimeToEvent @ 14a8e2480

UPoseSearchFeatureChannel_TimeToEvent * __thiscall
UPoseSearchFeatureChannel_TimeToEvent::UPoseSearchFeatureChannel_TimeToEvent
          (UPoseSearchFeatureChannel_TimeToEvent *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->Weight = 0.0;
  this->SamplingAttributeId = 0;
  this->bUseBlueprintQueryOverride = false;
  return this;
}

// UPoseSearchFeatureChannel_TimeToEvent @ 14a8e24d0

UPoseSearchFeatureChannel_TimeToEvent * __thiscall
UPoseSearchFeatureChannel_TimeToEvent::UPoseSearchFeatureChannel_TimeToEvent
          (UPoseSearchFeatureChannel_TimeToEvent *this)

{
  int iVar1;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar2);
  lVar4 = this->_padding_;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBoneReferenceSkeletonProvider__;
  this->_padding_ = (longlong)&_vftable__for__IPoseSearchFilter__;
  this->_padding_ = -1;
  this->Weight = 0.0;
  this->SamplingAttributeId = 0;
  this->bUseBlueprintQueryOverride = false;
  if (lVar4 != 0) {
    pUVar3 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14a8e254f;
  }
  lVar4 = 0;
LAB_14a8e254f:
  this->bUseBlueprintQueryOverride = lVar4 != 0;
  return this;
}

// ~UPoseSearchFeatureChannel_TimeToEvent @ 14a8e2ff0

void __thiscall
UPoseSearchFeatureChannel_TimeToEvent::~UPoseSearchFeatureChannel_TimeToEvent
          (UPoseSearchFeatureChannel_TimeToEvent *this)

{
  this->_padding_ = (longlong)&UPoseSearchFeatureChannel::_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IPoseSearchFilter__6B_;
  this->_padding_ = (longlong)&___7IBoneReferenceSkeletonProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BP_GetTimeToEvent @ 14a8e7880

float __thiscall
UPoseSearchFeatureChannel_TimeToEvent::BP_GetTimeToEvent
          (UPoseSearchFeatureChannel_TimeToEvent *this,UAnimInstance *param_1)

{
  UFunction *pUVar1;
  UAnimInstance *local_18;
  float local_10;
  
  local_10 = 0.0;
  local_18 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_18);
  return local_10;
}

// BuildQuery @ 14a8ea300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPoseSearchFeatureChannel_TimeToEvent::BuildQuery
          (UPoseSearchFeatureChannel_TimeToEvent *this,FSearchContext *param_1)

{
  int iVar1;
  uint uVar2;
  FSearchContext *pFVar3;
  longlong lVar4;
  UObject *pUVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  UClass *pUVar9;
  UFunction *pUVar10;
  TArrayView<float,int> *pTVar11;
  uint uVar12;
  FSearchContext *pFVar13;
  UObject *local_48;
  float local_40;
  float *local_38;
  undefined8 uStack_30;
  TArrayView<float,int> local_28 [2];
  
  if (this->bUseBlueprintQueryOverride == false) {
    if ((byte)LogPoseSearch._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    return;
  }
  iVar1 = (param_1->AnimContexts).ArrayNum;
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if ((iVar1 == 0) && (1 < (byte)LogPoseSearch._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  pFVar3 = (FSearchContext *)(param_1->AnimContexts).AllocatorInstance.SecondaryData.Data;
  iVar1 = (param_1->AnimContexts).ArrayNum;
  pFVar13 = param_1;
  if (pFVar3 != (FSearchContext *)0x0) {
    pFVar13 = pFVar3;
  }
  if (iVar1 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
LAB_14a8ea3ec:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if (iVar1 < 1) goto LAB_14a8ea3ec;
  lVar4 = *(longlong *)(pFVar13->AnimContexts).AllocatorInstance.InlineData;
  if (0 < *(int *)(lVar4 + 0x80)) {
    if ((*(int *)(lVar4 + 0x80) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar5 = *(UObject **)(lVar4 + 0x60);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 == (UObject *)0x0) goto LAB_14a8ea599;
      UE::GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5 != (UObject *)0x0) {
      pUVar9 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar9->_padding_)) {
        local_40 = 0.0;
        local_48 = pUVar5;
        pUVar10 = UObject::FindFunctionChecked
                            ((UObject *)this,
                             NAME_UPoseSearchFeatureChannel_TimeToEvent_BP_GetTimeToEvent);
        (**(code **)(this->_padding_ + 0x260))(this,pUVar10,&local_48);
        fVar7 = local_40;
        uVar2 = (uint)this->_padding_;
        pTVar11 = UE::PoseSearch::FSearchContext::EditFeatureVector(param_1,local_28);
        local_38 = pTVar11->DataPtr;
        uStack_30 = *(undefined8 *)&pTVar11->ArrayNum;
        iVar1 = pTVar11->ArrayNum;
        if ((iVar1 < (int)uVar2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Values.Num() >= DataOffset + 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchFeatureChannel.cpp"
                               ,0x7e,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar12 = 0;
        if ((int)uVar2 < iVar1) {
          uVar12 = ~uVar2 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_38[(int)uVar2] = fVar7;
        return;
      }
    }
  }
LAB_14a8ea599:
  if (2 < (byte)LogPoseSearch._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
  }
  return;
}

// Finalize @ 14a8f74c0

bool __thiscall
UPoseSearchFeatureChannel_TimeToEvent::Finalize
          (UPoseSearchFeatureChannel_TimeToEvent *this,UPoseSearchSchema *param_1)

{
  *(int *)&this->_padding_ = param_1->SchemaCardinality;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  param_1->SchemaCardinality = param_1->SchemaCardinality + 1;
  return true;
}

// GetPrivateStaticClass @ 14a8fcab0

UClass * __cdecl UPoseSearchFeatureChannel_TimeToEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchFeatureChannel_TimeToEvent",
               &Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton,
               StaticRegisterNativesUPoseSearchFeatureChannel_TimeToEvent,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPoseSearchFeatureChannel_TimeToEvent>,
               InternalVTableHelperCtorCaller<UPoseSearchFeatureChannel_TimeToEvent>,local_res8,
               UPoseSearchFeatureChannel::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchFeatureChannel_TimeToEvent.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchFeatureChannel_TimeToEvent @ 14a908e20

void __cdecl
UPoseSearchFeatureChannel_TimeToEvent::StaticRegisterNativesUPoseSearchFeatureChannel_TimeToEvent
          (void)

{
  return;
}


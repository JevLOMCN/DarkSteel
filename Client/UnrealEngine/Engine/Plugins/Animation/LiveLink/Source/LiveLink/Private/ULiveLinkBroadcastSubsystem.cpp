// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 10

// StaticClass @ 14cff55f0

UClass * __cdecl ULiveLinkBroadcastSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBroadcastSubsystem",
               &Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton,
               StaticRegisterNativesULiveLinkBroadcastSubsystem,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkBroadcastSubsystem>,
               InternalVTableHelperCtorCaller<ULiveLinkBroadcastSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton;
}

// ULiveLinkBroadcastSubsystem @ 14d013690

ULiveLinkBroadcastSubsystem * __thiscall
ULiveLinkBroadcastSubsystem::ULiveLinkBroadcastSubsystem
          (ULiveLinkBroadcastSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkBroadcastSubsystem__6B_;
  (this->VirtualSourceGUID).A = 0;
  (this->VirtualSourceGUID).B = 0;
  (this->VirtualSourceGUID).C = 0;
  (this->VirtualSourceGUID).D = 0;
  return this;
}

// ULiveLinkBroadcastSubsystem @ 14d0136d0

ULiveLinkBroadcastSubsystem * __thiscall
ULiveLinkBroadcastSubsystem::ULiveLinkBroadcastSubsystem(ULiveLinkBroadcastSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  this->_padding_ = (longlong)&___7ULiveLinkBroadcastSubsystem__6B_;
  (this->VirtualSourceGUID).A = 0;
  (this->VirtualSourceGUID).B = 0;
  (this->VirtualSourceGUID).C = 0;
  (this->VirtualSourceGUID).D = 0;
  return this;
}

// ~ULiveLinkBroadcastSubsystem @ 14d016f80

void __thiscall
ULiveLinkBroadcastSubsystem::~ULiveLinkBroadcastSubsystem(ULiveLinkBroadcastSubsystem *this)

{
  this->_padding_ = (longlong)&___7ULiveLinkBroadcastSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// BroadcastFrameData @ 14d0251b0

void __thiscall
ULiveLinkBroadcastSubsystem::BroadcastFrameData
          (ULiveLinkBroadcastSubsystem *this,FLiveLinkSubjectKey *param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2)

{
  char cVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,ILiveLinkClient::ModularFeatureName,0);
    local_18 = (this->VirtualSourceGUID).A;
    uStack_14 = (this->VirtualSourceGUID).B;
    uStack_10 = (this->VirtualSourceGUID).C;
    uStack_c = (this->VirtualSourceGUID).D;
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    cVar1 = (**(code **)(*plVar5 + 0x70))(plVar5,&local_18);
    if (cVar1 != '\0') {
      (**(code **)(*plVar5 + 0x80))(plVar5,param_1,param_2);
    }
  }
  return;
}

// BroadcastStaticData @ 14d025770

void __thiscall
ULiveLinkBroadcastSubsystem::BroadcastStaticData
          (ULiveLinkBroadcastSubsystem *this,FLiveLinkSubjectKey *param_1,
          TSubclassOf<ULiveLinkRole> param_2,
          FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData> *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  UObject *local_18;
  uint uStack_10;
  uint uStack_c;
  
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar3) {
    pIVar4 = IModularFeatures::Get();
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,ILiveLinkClient::ModularFeatureName,0);
    local_18 = *(UObject **)&this->VirtualSourceGUID;
    uStack_10 = (this->VirtualSourceGUID).C;
    uStack_c = (this->VirtualSourceGUID).D;
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    cVar2 = (**(code **)(*plVar6 + 0x70))(plVar6,&local_18);
    if (cVar2 != '\0') {
      local_18 = *(UObject **)param_2.Class.field0_0x0;
      pcVar1 = *(code **)(*plVar6 + 0x78);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_18);
      }
      (*pcVar1)(plVar6,param_1,&local_18,param_3);
    }
  }
  return;
}

// CreateSubject @ 14d037830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLiveLinkSubjectKey * __thiscall
ULiveLinkBroadcastSubsystem::CreateSubject
          (ULiveLinkBroadcastSubsystem *this,FLiveLinkSubjectKey *__return_storage_ptr__,
          FName param_1,TSubclassOf<ULiveLinkRole> param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  IModularFeatures *pIVar10;
  longlong lVar11;
  TReferenceControllerBase<1> *pTVar12;
  FLiveLinkSubjectKey *pFVar13;
  undefined8 *puVar14;
  UObject *pUVar15;
  UClass *pUVar16;
  FString *pFVar17;
  ForAnyElementType FVar18;
  TReferenceControllerBase<1> *pTVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  TReferenceControllerBase<1> *pTVar22;
  FName local_res10;
  FString local_108;
  FString local_f8;
  TReferenceControllerBase<1> *local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  FName local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  FName local_80;
  undefined1 local_78 [16];
  FString local_68;
  FString local_58;
  FString local_48;
  
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->Source).A = 0;
  (__return_storage_ptr__->Source).B = 0;
  (__return_storage_ptr__->Source).C = 0;
  (__return_storage_ptr__->Source).D = 0;
  (__return_storage_ptr__->SubjectName).Name = (FName)0x0;
  pIVar10 = IModularFeatures::Get();
  iVar9 = (**(code **)((longlong)*pIVar10 + 0x18))(pIVar10,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar9) {
    pIVar10 = IModularFeatures::Get();
    lVar11 = (**(code **)((longlong)*pIVar10 + 0x20))(pIVar10,ILiveLinkClient::ModularFeatureName,0)
    ;
    local_d8._0_4_ = (this->VirtualSourceGUID).A;
    local_d8._4_4_ = (this->VirtualSourceGUID).B;
    uStack_d0._0_4_ = (this->VirtualSourceGUID).C;
    uStack_d0._4_4_ = (this->VirtualSourceGUID).D;
    pTVar22 = (TReferenceControllerBase<1> *)(lVar11 + -8);
    if (lVar11 == 0) {
      pTVar22 = pTVar19;
    }
    cVar7 = (**(code **)(pTVar22->_padding_ + 0x70))(pTVar22,&local_d8);
    pwVar21 = L"";
    if (cVar7 == '\0') {
      pTVar12 = ::operator_new(0x20);
      if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
        lVar11 = pTVar22->_padding_;
        local_e8 = ___xmm_00000000000000000000000000000010;
        pTStack_e0 = _UNK_150651568;
      }
      else {
        pTVar12->SharedReferenceCount = (atomic<int>)0x1;
        pTVar12->WeakReferenceCount = (atomic<int>)0x1;
        pTVar12->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFLiveLinkBroadcastSource___00_SharedPointerInternals__6B_
        ;
        ::FString::FString(&local_f8,L"Live Link Actor Broadcast");
        pTVar12[1]._padding_ = (longlong)&___7FLiveLinkBroadcastSource__6B_;
        pTVar12[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar12[1].WeakReferenceCount = (atomic<int>)0x0;
        ::FString::PrintfImpl(&local_108,L"%s");
        FVar18.Data = (FScriptContainerElement *)L"";
        if (local_108.Data.ArrayNum != 0) {
          FVar18.Data = local_108.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_res10,(wchar_t *)FVar18.Data);
        pTVar12[1].SharedReferenceCount = (atomic<int>)local_res10.ComparisonIndex.Value;
        pTVar12[1].WeakReferenceCount = (atomic<int>)local_res10.Number;
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar8)) {
          pcVar1 = (code *)swi(3);
          pFVar13 = (FLiveLinkSubjectKey *)(*pcVar1)();
          return pFVar13;
        }
        lVar11 = pTVar22->_padding_;
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
        pTVar19 = pTVar12;
        local_e8 = pTVar12 + 1;
        pTStack_e0 = pTVar12;
      }
      puVar14 = (undefined8 *)(**(code **)(lVar11 + 8))(pTVar22,local_78,&local_e8);
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      (this->VirtualSourceGUID).A = (int)uVar2;
      (this->VirtualSourceGUID).B = (int)((ulonglong)uVar2 >> 0x20);
      (this->VirtualSourceGUID).C = (int)uVar3;
      (this->VirtualSourceGUID).D = (int)((ulonglong)uVar3 >> 0x20);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    uVar4 = (this->VirtualSourceGUID).B;
    uVar5 = (this->VirtualSourceGUID).C;
    uVar6 = (this->VirtualSourceGUID).D;
    (__return_storage_ptr__->Source).A = (this->VirtualSourceGUID).A;
    (__return_storage_ptr__->Source).B = uVar4;
    (__return_storage_ptr__->Source).C = uVar5;
    (__return_storage_ptr__->Source).D = uVar6;
    (__return_storage_ptr__->SubjectName).Name = param_1;
    local_80 = param_1;
    lVar11 = (**(code **)(pTVar22->_padding_ + 0x170))(pTVar22,__return_storage_ptr__);
    if (lVar11 == 0) {
      local_b8 = (__return_storage_ptr__->SubjectName).Name;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 1;
      local_c8._0_4_ = (__return_storage_ptr__->Source).A;
      local_c8._4_4_ = (__return_storage_ptr__->Source).B;
      uStack_c0._0_4_ = (__return_storage_ptr__->Source).C;
      uStack_c0._4_4_ = (__return_storage_ptr__->Source).D;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
      }
      local_b0 = *(undefined8 *)param_2.Class.field0_0x0;
      (**(code **)(pTVar22->_padding_ + 0x88))(pTVar22,&local_c8);
      pUVar15 = (UObject *)(**(code **)(pTVar22->_padding_ + 0x170))(pTVar22,__return_storage_ptr__)
      ;
      if (pUVar15 == (UObject *)0x0) {
        pFVar17 = GetTypeName<ULiveLinkSubjectSettings>(&local_68);
        if ((pFVar17->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar21);
      }
      pUVar16 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
      iVar9 = (int)pUVar16->_padding_;
      if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar9) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar16->_padding_)) {
        pFVar17 = GetTypeName<ULiveLinkSubjectSettings>(&local_58);
        if ((pFVar17->Data).ArrayNum == 0) {
          pwVar20 = L"";
        }
        else {
          pwVar20 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
        pFVar17 = GetFullNameForCastLogError<UObject>(&local_48,pUVar15);
        if ((pFVar17->Data).ArrayNum != 0) {
          pwVar21 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar21,pwVar20);
      }
      pUVar15[2].field_0x18 = 1;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d0521f0

UClass * __cdecl ULiveLinkBroadcastSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkBroadcastSubsystem",
               &Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton,
               StaticRegisterNativesULiveLinkBroadcastSubsystem,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULiveLinkBroadcastSubsystem>,
               InternalVTableHelperCtorCaller<ULiveLinkBroadcastSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkBroadcastSubsystem.InnerSingleton;
}

// RemoveSubject @ 14d07a120

void __thiscall
ULiveLinkBroadcastSubsystem::RemoveSubject
          (ULiveLinkBroadcastSubsystem *this,FLiveLinkSubjectKey *param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,ILiveLinkClient::ModularFeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014d07a17a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0xa0))(plVar4,param_1);
    return;
  }
  return;
}

// StaticRegisterNativesULiveLinkBroadcastSubsystem @ 14d080710

void __cdecl ULiveLinkBroadcastSubsystem::StaticRegisterNativesULiveLinkBroadcastSubsystem(void)

{
  return;
}


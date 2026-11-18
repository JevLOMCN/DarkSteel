// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 18

// StaticClass @ 14cff5d00

UClass * __cdecl ULiveLinkPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkPreset",
               &Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
               StaticRegisterNativesULiveLinkPreset,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkPreset>,InternalVTableHelperCtorCaller<ULiveLinkPreset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton;
}

// ULiveLinkPreset @ 14d0140c0

ULiveLinkPreset * __thiscall
ULiveLinkPreset::ULiveLinkPreset(ULiveLinkPreset *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkPreset__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  (this->ApplyToClientEndFrameHandle).ID = 0;
  this->ApplyCount = 0;
  return this;
}

// ULiveLinkPreset @ 14d014100

ULiveLinkPreset * __thiscall
ULiveLinkPreset::ULiveLinkPreset(ULiveLinkPreset *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7ULiveLinkPreset__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  (this->Subjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Subjects).ArrayNum = 0;
  (this->Subjects).ArrayMax = 0;
  (this->ApplyToClientEndFrameHandle).ID = 0;
  this->ApplyCount = 0;
  return this;
}

// ~ULiveLinkPreset @ 14d017360

void __thiscall ULiveLinkPreset::~ULiveLinkPreset(ULiveLinkPreset *this)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  
  FVar1.ID = (this->ApplyToClientEndFrameHandle).ID;
  this->_padding_ = (longlong)&___7ULiveLinkPreset__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               FVar1);
  }
  pFVar2 = (this->Subjects).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FLiveLinkSourcePreset,int>
            ((FLiveLinkSourcePreset *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar2 = (this->Sources).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d018b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `ULiveLinkPreset::ApplyToClientLatent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  FApplyToClientPollingOperation *pFVar2;
  bool bVar3;
  EApplyToClientUpdateResult EVar4;
  undefined8 uVar5;
  UObject *pUVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  FString local_18;
  
  FWeakObjectPtr::Get(this);
  if (ULiveLinkPreset::ApplyToClientPollingOperation.Ptr == (FApplyToClientPollingOperation *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_166006292786183951>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkPreset.cpp"
                       ,0xf1,"WeakThis->ApplyToClientPollingOperation");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FWeakObjectPtr::Get(this);
    EVar4 = FApplyToClientPollingOperation::Update
                      (ULiveLinkPreset::ApplyToClientPollingOperation.Ptr);
    if (EVar4 != Pending) {
      FWeakObjectPtr::Get(this);
      if (ULiveLinkPreset::ApplyToClientPollingOperation.Ptr !=
          (FApplyToClientPollingOperation *)0x0) {
        pFVar2 = ULiveLinkPreset::ApplyToClientPollingOperation.Ptr + -1;
        ULiveLinkPreset::ApplyToClientPollingOperation.Ptr = (FApplyToClientPollingOperation *)0x0;
        (*(code *)pFVar2->RemainingTime)();
      }
      if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
        local_res8[0] = EVar4 == Success;
        UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
        pcVar1 = *(code **)((longlong)this + 0x10);
        plVar7 = (longlong *)((longlong)this + 0x20);
        if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
          plVar7 = *(longlong **)((longlong)this + 0x38);
        }
        uVar5 = (**(code **)(*plVar7 + 8))();
        (*pcVar1)(uVar5,local_res8);
      }
      if (5 < (byte)LogTemp._0_1_) {
        pUVar6 = FWeakObjectPtr::Get(this);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar6,&local_18,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      pUVar6 = FWeakObjectPtr::Get(this);
      if (*(ulong64 *)&pUVar6[1].field_0x20 != 0) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame
                   ,(FDelegateHandle)*(ulong64 *)&pUVar6[1].field_0x20);
      }
    }
  }
  return;
}

// AddToClient @ 14d021dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall ULiveLinkPreset::AddToClient(ULiveLinkPreset *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  IModularFeatures *pIVar11;
  longlong lVar12;
  ForAnyElementType *pFVar13;
  ulong64 uVar14;
  FString *pFVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FSetElementId> FVar18;
  int *piVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  FLiveLinkClient *this_00;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5 [5];
  ForAnyElementType local_1a0;
  int local_198 [4];
  ULiveLinkPreset *local_188;
  undefined8 local_180;
  FLiveLinkSubjectKey local_178;
  FLiveLinkSubjectKey local_160;
  undefined1 local_148 [8];
  int *local_140;
  int local_138;
  void *local_130 [2];
  void *local_120 [3];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  FString local_e8;
  TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator> local_d8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  bVar5 = false;
  local_188 = this;
  pIVar11 = IModularFeatures::Get();
  iVar8 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar8) {
    pIVar11 = IModularFeatures::Get();
    lVar12 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,ILiveLinkClient::ModularFeatureName,0)
    ;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198[0] = 0;
    local_198[1] = 0;
    this_00 = (FLiveLinkClient *)(lVar12 + -8);
    if (lVar12 == 0) {
      this_00 = (FLiveLinkClient *)0x0;
    }
    pFVar13 = (ForAnyElementType *)(**(code **)(this_00->_padding_ + 0x38))(this_00,local_130,0);
    if ((&local_1a0 == pFVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = *(int *)&pFVar13[1].Data;
    if (iVar8 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,iVar8,&local_1a0,local_198,local_198 + 1);
      memmove(local_1a0.Data + (longlong)iVar9 * 0x10,pFVar13->Data,(longlong)iVar8 << 4);
      *(undefined4 *)&pFVar13[1].Data = 0;
    }
    if (local_130[0] != (void *)0x0) {
      FMemory::Free(local_130[0]);
    }
    pFVar13 = (ForAnyElementType *)(**(code **)(this_00->_padding_ + 0x40))(this_00,local_120,0);
    if ((&local_1a0 == pFVar13) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    iVar8 = *(int *)&pFVar13[1].Data;
    if (iVar8 != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,iVar8,&local_1a0,local_198,local_198 + 1);
      memmove(local_1a0.Data + (longlong)iVar9 * 0x10,pFVar13->Data,(longlong)iVar8 << 4);
      *(undefined4 *)&pFVar13[1].Data = 0;
    }
    if (local_120[0] != (void *)0x0) {
      FMemory::Free(local_120[0]);
    }
    (**(code **)(this_00->_padding_ + 0x100))(this_00);
    iVar8 = (this->Sources).ArrayNum;
    pFVar20 = (this->Sources).AllocatorInstance.Data;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    pFVar21 = pFVar20 + (longlong)iVar8 * 0x28;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._44_4_ = 0x80;
    local_d8.Elements._48_4_ = 0xffffffff;
LAB_14d022046:
    if ((this->Sources).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FLiveLinkSourcePreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1a8);
    }
    if (pFVar20 != pFVar21) {
      if (local_1a0.Data == local_1a0.Data + (longlong)local_198[0] * 0x10) {
LAB_14d0220f7:
        pFVar20 = pFVar20 + 0x28;
      }
      else {
        pFVar17 = local_1a0.Data + 8;
        do {
          if (((*(int *)(pFVar20 + 0xc) == *(int *)(pFVar17 + 4) &&
               *(int *)(pFVar20 + 4) == *(int *)(pFVar17 + -4)) &&
              *(int *)pFVar20 == *(int *)(pFVar17 + -8)) && *(int *)(pFVar20 + 8) == *(int *)pFVar17
             ) {
            if (!param_1) {
              TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                        (&local_88,(FGuid *)local_148,(bool *)pFVar20);
              goto LAB_14d0220f7;
            }
            local_108 = *(undefined4 *)pFVar20;
            uStack_104 = *(undefined4 *)(pFVar20 + 4);
            uStack_100 = *(undefined4 *)(pFVar20 + 8);
            uStack_fc = *(undefined4 *)(pFVar20 + 0xc);
            (**(code **)(this_00->_padding_ + 0x20))(this_00);
            pFVar20 = pFVar20 + 0x28;
            goto LAB_14d022046;
          }
          pFVar1 = pFVar17 + 8;
          pFVar17 = pFVar17 + 0x10;
        } while (pFVar1 != local_1a0.Data + (longlong)local_198[0] * 0x10);
        pFVar20 = pFVar20 + 0x28;
      }
      goto LAB_14d022046;
    }
    iVar8 = (this->Subjects).ArrayNum;
    pFVar21 = (this->Subjects).AllocatorInstance.Data;
    pFVar20 = pFVar21 + (longlong)iVar8 * 0x38;
LAB_14d022111:
    if ((this->Subjects).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FLiveLinkSubjectPreset_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1a7);
    }
    if (pFVar21 != pFVar20) {
      if (local_140 == local_140 + (longlong)local_138 * 6) {
LAB_14d0221b0:
        pFVar21 = pFVar21 + 0x38;
      }
      else {
        piVar19 = local_140 + 3;
        do {
          if ((*(longlong *)(piVar19 + 1) == *(longlong *)(pFVar21 + 0x10)) &&
             (((piVar19[-1] == *(int *)(pFVar21 + 8) && piVar19[-2] == *(int *)(pFVar21 + 4)) &&
              piVar19[-3] == *(int *)pFVar21) && *(int *)(pFVar21 + 0xc) == *piVar19)) {
            if (!param_1) {
              TSet<FLiveLinkSubjectKey,DefaultKeyFuncs<FLiveLinkSubjectKey,0>,FDefaultSetAllocator>
              ::Emplace<FLiveLinkSubjectKey_const_&>
                        (&local_d8,(FLiveLinkSubjectKey *)(local_148 + 4),(bool *)pFVar21);
              goto LAB_14d0221b0;
            }
            (**(code **)(this_00->_padding_ + 0xa0))(this_00);
            pFVar21 = pFVar21 + 0x38;
            goto LAB_14d022111;
          }
          piVar2 = piVar19 + 3;
          piVar19 = piVar19 + 6;
        } while (piVar2 != local_140 + (longlong)local_138 * 6);
        pFVar21 = pFVar21 + 0x38;
      }
      goto LAB_14d022111;
    }
    FLiveLinkClient::Tick(this_00,Default);
    iVar8 = (this->Sources).ArrayNum;
    bVar5 = true;
    pFVar20 = (this->Sources).AllocatorInstance.Data;
    pFVar21 = pFVar20 + (longlong)iVar8 * 0x28;
    while( true ) {
      if ((this->Sources).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FLiveLinkSourcePreset_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1a6);
      }
      if (pFVar20 == pFVar21) break;
      uVar14 = CityHash64((char *)pFVar20,0x10);
      if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_88.Hash;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_88.Hash.SecondaryData;
        }
        iVar9 = *(int *)((longlong)FVar18 +
                        ((ulonglong)(local_88.HashSize - 1) & uVar14 & 0xffffffff) * 4);
        if (iVar9 != -1) {
          do {
            piVar19 = (int *)(local_88.Elements._0_8_ + (longlong)iVar9 * 0x18);
            if (((*(int *)(pFVar20 + 0xc) == piVar19[3] &&
                 *(int *)(pFVar20 + 8) ==
                 *(int *)(local_88.Elements._0_8_ + 8 + (longlong)iVar9 * 0x18)) &&
                *(int *)(pFVar20 + 4) == piVar19[1]) && *(int *)pFVar20 == *piVar19)
            goto LAB_14d02229f;
            iVar9 = piVar19[4];
          } while (iVar9 != -1);
        }
      }
      cVar7 = (**(code **)(this_00->_padding_ + 0x18))(this_00,pFVar20);
      if (cVar7 == '\0') {
        bVar5 = false;
        pFVar20 = pFVar20 + 0x28;
      }
      else {
LAB_14d02229f:
        pFVar20 = pFVar20 + 0x28;
      }
    }
    pFVar21 = (this->Subjects).AllocatorInstance.Data;
    iVar8 = (this->Subjects).ArrayNum;
    pFVar20 = pFVar21 + (longlong)iVar8 * 0x38;
    while( true ) {
      this = local_188;
      if ((local_188->Subjects).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FLiveLinkSubjectPreset_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_1a5);
      }
      if (pFVar21 == pFVar20) break;
      uVar14 = CityHash64((char *)pFVar21,0x10);
      uVar3 = *(undefined8 *)(pFVar21 + 0x10);
      uVar10 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      if (local_d8.Elements._8_4_ != local_d8.Elements._52_4_) {
        FVar18 = (ForElementType<FSetElementId>)&local_d8.Hash;
        if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar18 = local_d8.Hash.SecondaryData;
        }
        iVar9 = *(int *)((longlong)FVar18 +
                        (ulonglong)
                        (local_d8.HashSize - 1U &
                        (uVar10 + (int)((ulonglong)uVar3 >> 0x20)) * 0xd + (int)uVar14) * 4);
        if (iVar9 != -1) {
          do {
            piVar19 = (int *)((longlong)iVar9 * 0x20 + local_d8.Elements._0_8_);
            if ((*(longlong *)(piVar19 + 4) == *(longlong *)(pFVar21 + 0x10)) &&
               (((piVar19[3] == *(int *)(pFVar21 + 0xc) && piVar19[2] == *(int *)(pFVar21 + 8)) &&
                piVar19[1] == *(int *)(pFVar21 + 4)) && *(int *)pFVar21 == *piVar19)) {
              if (iVar9 != -1) goto LAB_14d0223a0;
              break;
            }
            iVar9 = piVar19[6];
          } while (iVar9 != -1);
        }
      }
      cVar7 = (**(code **)(this_00->_padding_ + 0x88))(this_00,pFVar21);
      if (cVar7 == '\0') {
        bVar5 = false;
        pFVar21 = pFVar21 + 0x38;
      }
      else {
LAB_14d0223a0:
        pFVar21 = pFVar21 + 0x38;
      }
    }
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FLiveLinkSubjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FLiveLinkSubjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    if (local_140 != (int *)0x0) {
      FMemory::Free(local_140);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
    if (bVar5 != false) {
      pFVar15 = UObjectBaseUtility::GetFullName
                          ((UObjectBaseUtility *)this,&local_f8,(UObject *)0x0,None);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      local_178.Source.A = 0;
      local_178.Source.B = 0;
      local_178.Source.C = 0;
      local_178.Source.D = 0;
      local_178.SubjectName.Name.ComparisonIndex.Value = 0;
      local_178.SubjectName.Name.Number = 0;
      local_198[2] = 0;
      local_198[3] = 0;
      FLiveLinkLog::Log_Internal<wchar_t_const_*>
                (Info,(FName)0x0,&local_178,
                 (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0230,pwVar16);
      goto LAB_14d0224da;
    }
  }
  pwVar16 = L"";
  pFVar15 = UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_e8,(UObject *)0x0,None);
  if ((pFVar15->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  local_180 = 0;
  local_160.Source.A = 0;
  local_160.Source.B = 0;
  local_160.Source.C = 0;
  local_160.Source.D = 0;
  local_160.SubjectName.Name.ComparisonIndex.Value = 0;
  local_160.SubjectName.Name.Number = 0;
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (Error,(FName)0x0,&local_160,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa0248,pwVar16);
  local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
LAB_14d0224da:
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// ApplyToClient @ 14d0231b0

bool __thiscall ULiveLinkPreset::ApplyToClient(ULiveLinkPreset *this)

{
  byte bVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  Type TVar7;
  bool bVar8;
  FLiveLinkClient *this_00;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  wchar_t *pwVar11;
  undefined8 local_res10;
  FString local_58;
  FLiveLinkSubjectKey local_48;
  
  bVar8 = false;
  pIVar3 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
    this_00 = (FLiveLinkClient *)(lVar4 + -8);
    if (lVar4 == 0) {
      this_00 = (FLiveLinkClient *)0x0;
    }
    FLiveLinkClient::RemoveAllSources(this_00);
    FLiveLinkClient::Tick(this_00,Default);
    iVar2 = (this->Sources).ArrayNum;
    bVar8 = true;
    pFVar9 = (this->Sources).AllocatorInstance.Data;
    pFVar10 = pFVar9 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((this->Sources).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLiveLinkSourcePreset_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res10);
      }
      if (pFVar9 == pFVar10) break;
      bVar1 = (**(code **)(this_00->_padding_ + 0x18))(this_00,pFVar9);
      bVar8 = (bool)(bVar8 & bVar1);
      pFVar9 = pFVar9 + 0x28;
    }
    iVar2 = (this->Subjects).ArrayNum;
    pFVar10 = (this->Subjects).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar2 * 0x38;
    while( true ) {
      if ((this->Subjects).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLiveLinkSubjectPreset_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res10);
      }
      if (pFVar10 == pFVar9) break;
      bVar1 = (**(code **)(this_00->_padding_ + 0x88))(this_00,pFVar10);
      bVar8 = (bool)(bVar8 & bVar1);
      pFVar10 = pFVar10 + 0x38;
    }
    if (bVar8 != false) {
      pFVar5 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
        TVar7 = Info;
        pwVar11 = L"Applied \'%s\'";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        pwVar11 = L"Applied \'%s\'";
        TVar7 = Info;
      }
      goto LAB_14d02333d;
    }
  }
  pFVar5 = UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_58,(UObject *)0x0,None)
  ;
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  pwVar11 = L"Could not apply \'%s\'";
  TVar7 = Error;
LAB_14d02333d:
  local_res10 = 0;
  local_48.Source.A = 0;
  local_48.Source.B = 0;
  local_48.Source.C = 0;
  local_48.Source.D = 0;
  local_48.SubjectName.Name.ComparisonIndex.Value = 0;
  local_48.SubjectName.Name.Number = 0;
  FLiveLinkLog::Log_Internal<wchar_t_const_*>
            (TVar7,(FName)0x0,&local_48,
             (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)pwVar11,pwVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar8;
}

// ApplyToClientLatent @ 14d023390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ULiveLinkPreset::ApplyToClientLatent
          (ULiveLinkPreset *this,UObject *param_1,FLatentActionInfo *param_2)

{
  TObjectPtr<UObject>_u_0 TVar1;
  UWorld *this_00;
  FLatentActionManager *this_01;
  FApplyToClientLatentAction *pFVar2;
  FPendingLatentAction *pFVar3;
  TObjectPtr<UObject>_u_0 local_res20;
  
  this_00 = UEngine::GetWorldFromContextObject(GEngine,param_1,ReturnNull);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    pFVar2 = FLatentActionManager::
             FindExistingActionWithPredicate<FApplyToClientLatentAction,_FLatentActionManager::FindExistingAction<FApplyToClientLatentAction>_::__l2::FFirstItemPredicate>
                       (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,
                        (FFirstItemPredicate *)&local_res20.ObjectPtr);
    if (pFVar2 == (FApplyToClientLatentAction *)0x0) {
      pFVar3 = ::operator_new(0x38);
      if (pFVar3 == (FPendingLatentAction *)0x0) {
        pFVar3 = (FPendingLatentAction *)0x0;
      }
      else {
        *pFVar3 = (FPendingLatentAction)&___7FApplyToClientLatentAction__6B_;
        *(FName *)(pFVar3 + 1) = param_2->ExecutionFunction;
        *(int *)(pFVar3 + 2) = param_2->Linkage;
        TVar1 = (TObjectPtr<UObject>_u_0)(param_2->CallbackTarget).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (TVar1.DebugPtr != (UObject *)0x0) {
            UE::GC::MarkAsReachable(TVar1.DebugPtr);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar1.DebugPtr != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(TVar1.DebugPtr);
          }
        }
        *(undefined8 *)&pFVar3[2].field_0x4 = 0;
        local_res20 = TVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar1.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar1.DebugPtr);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar3[2].field_0x4,(FObjectPtr)&local_res20);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULiveLinkPreset *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        pFVar3[4] = (FPendingLatentAction)0x0;
        local_res20 = (TObjectPtr<UObject>_u_0)this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULiveLinkPreset *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar3 + 4),(FObjectPtr)&local_res20);
        pFVar3[5] = (FPendingLatentAction)0x3ff0000000000000;
        pFVar3[6] = (FPendingLatentAction)0x0;
      }
      FLatentActionManager::AddNewAction
                (this_01,(param_2->CallbackTarget).field0_0x0.DebugPtr,param_2->UUID,pFVar3);
    }
  }
  return;
}

// ApplyToClientLatent @ 14d023520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULiveLinkPreset::ApplyToClientLatent(ULiveLinkPreset *this,TFunction<void___cdecl(bool)> *param_1)

{
  code *pcVar1;
  FApplyToClientPollingOperation *pFVar2;
  FApplyToClientPollingOperation *pFVar3;
  TPimplPtr<FApplyToClientPollingOperation,0> TVar4;
  FString *pFVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  FDelegateHandle FVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  FWeakObjectPtr local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [24];
  ULiveLinkPreset *local_90;
  FWeakObjectPtr local_88;
  longlong local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (ApplyToClientPollingOperation.Ptr == (FApplyToClientPollingOperation *)0x0) {
    puVar7 = ::operator_new(0x30);
    puVar10 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0;
      *puVar7 = UE::Core::Private::PimplPtr::DeleterFunc<FApplyToClientPollingOperation>;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULiveLinkPreset *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[2] = 0;
      local_c0 = (FWeakObjectPtr)this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULiveLinkPreset *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 2),(FObjectPtr)&local_c0);
      puVar7[3] = 0x3ff0000000000000;
      puVar7[4] = 0;
      puVar10 = puVar7;
    }
    TVar4.Ptr = (FApplyToClientPollingOperation *)(puVar10 + 2);
    if (ApplyToClientPollingOperation.Ptr != (FApplyToClientPollingOperation *)0x0) {
      pFVar2 = ApplyToClientPollingOperation.Ptr + -1;
      pFVar3 = ApplyToClientPollingOperation.Ptr + -1;
      ApplyToClientPollingOperation.Ptr = (FApplyToClientPollingOperation *)(puVar10 + 2);
      (*(code *)pFVar2->RemainingTime)(&pFVar3->RemainingTime);
      TVar4.Ptr = ApplyToClientPollingOperation.Ptr;
    }
    ApplyToClientPollingOperation.Ptr = TVar4.Ptr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULiveLinkPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_90 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ULiveLinkPreset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_90);
    local_78 = *(longlong *)param_1;
    local_48 = this->ApplyCount;
    local_88 = local_c0;
    local_50 = *(longlong **)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    local_58 = *(undefined8 *)&param_1->field_0x20;
    local_68 = *(longlong *)&param_1->field_0x10;
    uStack_60 = *(undefined8 *)&param_1->field_0x18;
    if (local_78 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddLambda<_ULiveLinkPreset::ApplyToClientLatent_::__l2::<lambda_1>_>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnEndFrame,(<lambda_1> *)local_b8);
                    /* WARNING: Load size is inaccurate */
    (this->ApplyToClientEndFrameHandle).ID = *FVar8.ID;
    if (local_78 != 0) {
      plVar9 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar9 = local_50;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (5 < (byte)LogTemp._0_1_) {
      this->ApplyCount = this->ApplyCount + 1;
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)this,(FString *)local_b8,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_b8._0_8_);
      }
    }
  }
  else {
    pFVar5 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this,(FString *)local_b8,(UObject *)0x0,None);
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_a8._16_4_ = 0;
    local_a8._20_4_ = 0;
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    FLiveLinkLog::Log_Internal<wchar_t_const_*>
              (Error,(FName)0x0,(FLiveLinkSubjectKey *)local_a8,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152aa01c0,pwVar11);
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
    if (*(void **)param_1 != (void *)0x0) {
      local_c8[0] = 0;
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar9 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar9 = *(longlong **)&param_1->field_0x28;
      }
      uVar6 = (**(code **)(*plVar9 + 8))();
      (*pcVar1)(uVar6,local_c8);
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar9 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

// BuildFromClient @ 14d026520

void __thiscall ULiveLinkPreset::BuildFromClient(ULiveLinkPreset *this)

{
  TArray<FLiveLinkSourcePreset,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FLiveLinkSubjectPreset,TSizedDefaultAllocator<32>_> *pTVar3;
  FLiveLinkSourcePreset *pFVar4;
  FScriptContainerElement *pFVar5;
  UObject *pUVar6;
  FLiveLinkSubjectPreset *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  IModularFeatures *pIVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FLiveLinkSubjectPreset *pFVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  UObject *local_138;
  FText local_130;
  undefined4 *local_120;
  ulonglong local_118;
  undefined4 *local_110 [2];
  undefined4 *local_100 [3];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  longlong *local_98;
  undefined1 local_88 [72];
  
  iVar12 = (this->Sources).ArrayNum;
  pTVar1 = &this->Sources;
  piVar2 = &(this->Sources).ArrayMax;
  pFVar4 = (FLiveLinkSourcePreset *)(pTVar1->AllocatorInstance).Data;
  if ((this->Sources).ArrayMax < 0) {
    DestructItems<FLiveLinkSourcePreset,int>(pFVar4,iVar12);
    (this->Sources).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FLiveLinkSourcePreset,int>(pFVar4,iVar12);
    (this->Sources).ArrayNum = 0;
  }
  pTVar3 = &this->Subjects;
  (this->Subjects).ArrayNum = 0;
  if ((this->Subjects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar3->AllocatorInstance,0,&(this->Subjects).ArrayMax);
  }
  pIVar14 = IModularFeatures::Get();
  iVar12 = (**(code **)((longlong)*pIVar14 + 0x18))(pIVar14,ILiveLinkClient::ModularFeatureName);
  if (0 < iVar12) {
    pIVar14 = IModularFeatures::Get();
    lVar15 = (**(code **)((longlong)*pIVar14 + 0x20))(pIVar14,ILiveLinkClient::ModularFeatureName,0)
    ;
    plVar20 = (longlong *)(lVar15 + -8);
    if (lVar15 == 0) {
      plVar20 = (longlong *)0x0;
    }
    (**(code **)(*plVar20 + 0x38))(plVar20,&local_120,0);
    uVar10 = local_118;
    uVar18 = (ulonglong)(int)local_118;
    puVar19 = local_120 + uVar18 * 4;
    puVar21 = local_120;
    while( true ) {
      if ((int)local_118 != (int)uVar18) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar21 == puVar19) break;
      local_e8 = *puVar21;
      uStack_e4 = puVar21[1];
      uStack_e0 = puVar21[2];
      uStack_dc = puVar21[3];
      pFVar16 = (FScriptContainerElement *)
                (**(code **)(*plVar20 + 0x48))(plVar20,local_b0,&local_e8,this);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if ((pFVar5 <= pFVar16) && (pFVar16 < pFVar5 + (longlong)*piVar2 * 0x28)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = (this->Sources).ArrayNum;
      if (iVar12 == *piVar2) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,&pTVar1->AllocatorInstance,piVar2);
      }
      lVar15 = (longlong)iVar12;
      (this->Sources).ArrayNum = iVar12 + 1;
      uVar9 = *(undefined8 *)(pFVar16 + 8);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + lVar15 * 0x28) = *(undefined8 *)pFVar16;
      *(undefined8 *)(pFVar5 + lVar15 * 0x28 + 8) = uVar9;
      pUVar6 = *(UObject **)(pFVar16 + 0x10);
      *(UObject **)(pFVar5 + lVar15 * 0x28 + 0x10) = pUVar6;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FText::FText((FText *)(pFVar5 + lVar15 * 0x28 + 0x18),(FText *)(pFVar16 + 0x18));
      if (local_98 != (longlong *)0x0) {
        (**(code **)(*local_98 + 0x10))();
      }
      puVar21 = puVar21 + 4;
      uVar18 = uVar10 & 0xffffffff;
    }
    if (local_120 != (undefined4 *)0x0) {
      FMemory::Free(local_120);
    }
    (**(code **)(*plVar20 + 0x40))(plVar20,local_110,0);
    iVar12 = (int)local_110[1];
    puVar19 = local_110[0] + (longlong)iVar12 * 4;
    puVar21 = local_110[0];
    while( true ) {
      if ((int)local_110[1] != iVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar21 == puVar19) break;
      local_d8 = *puVar21;
      uStack_d4 = puVar21[1];
      uStack_d0 = puVar21[2];
      uStack_cc = puVar21[3];
      (**(code **)(*plVar20 + 0x48))(plVar20,&local_148,&local_d8,this);
      if (((iStack_13c != 0 || iStack_140 != 0) || iStack_144 != 0) || local_148 != 0) {
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar5 <= (FScriptContainerElement *)&local_148) &&
           ((FScriptContainerElement *)&local_148 < pFVar5 + (longlong)*piVar2 * 0x28)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar13 = (this->Sources).ArrayNum;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&pTVar1->AllocatorInstance,piVar2);
        }
        lVar15 = (longlong)iVar13;
        (this->Sources).ArrayNum = iVar13 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        *(ulonglong *)(pFVar5 + lVar15 * 0x28) = CONCAT44(iStack_144,local_148);
        *(ulonglong *)(pFVar5 + lVar15 * 0x28 + 8) = CONCAT44(iStack_13c,iStack_140);
        *(UObject **)(pFVar5 + lVar15 * 0x28 + 0x10) = local_138;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_138 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_138);
        }
        FText::FText((FText *)(pFVar5 + lVar15 * 0x28 + 0x18),&local_130);
      }
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
      puVar21 = puVar21 + 4;
    }
    if (local_110[0] != (undefined4 *)0x0) {
      FMemory::Free(local_110[0]);
    }
    (**(code **)(*plVar20 + 0x100))(plVar20,local_100,1);
    iVar12 = (int)local_100[1];
    puVar21 = local_100[0] + (longlong)iVar12 * 6;
    puVar19 = local_100[0];
    while( true ) {
      if ((int)local_100[1] != iVar12) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FLiveLinkSubjectKey,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar19 == puVar21) break;
      local_c8 = *puVar19;
      uStack_c4 = puVar19[1];
      uStack_c0 = puVar19[2];
      uStack_bc = puVar19[3];
      local_b8 = *(undefined8 *)(puVar19 + 4);
      pFVar17 = (FLiveLinkSubjectPreset *)
                (**(code **)(*plVar20 + 0xf8))(plVar20,local_88,&local_c8,this);
      pFVar7 = (FLiveLinkSubjectPreset *)(pTVar3->AllocatorInstance).Data;
      if ((pFVar7 <= pFVar17) && (pFVar17 < pFVar7 + (this->Subjects).ArrayMax)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar13 = (this->Subjects).ArrayNum;
      if (iVar13 == (this->Subjects).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&pTVar3->AllocatorInstance,&(this->Subjects).ArrayMax);
      }
      (this->Subjects).ArrayNum = iVar13 + 1;
      FLiveLinkSubjectPreset::FLiveLinkSubjectPreset
                ((FLiveLinkSubjectPreset *)
                 ((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 0x38),pFVar17);
      puVar19 = puVar19 + 6;
    }
    if (local_100[0] != (undefined4 *)0x0) {
      FMemory::Free(local_100[0]);
    }
  }
  return;
}

// CancelLatentAction @ 14d029530

void __thiscall ULiveLinkPreset::CancelLatentAction(ULiveLinkPreset *this)

{
  FDelegateHandle FVar1;
  FApplyToClientPollingOperation *pFVar2;
  
  FVar1.ID = (this->ApplyToClientEndFrameHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               FVar1);
  }
  if (ApplyToClientPollingOperation.Ptr != (FApplyToClientPollingOperation *)0x0) {
    pFVar2 = ApplyToClientPollingOperation.Ptr + -1;
    ApplyToClientPollingOperation.Ptr = (FApplyToClientPollingOperation *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014d02956b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pFVar2->RemainingTime)();
    return;
  }
  return;
}

// ClearApplyToClientTimer @ 14d0296d0

void __thiscall ULiveLinkPreset::ClearApplyToClientTimer(ULiveLinkPreset *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->ApplyToClientEndFrameHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEndFrame,
               FVar1);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 14d052960

UClass * __cdecl ULiveLinkPreset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkPreset",
               &Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton,
               StaticRegisterNativesULiveLinkPreset,0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULiveLinkPreset>,InternalVTableHelperCtorCaller<ULiveLinkPreset>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkPreset.InnerSingleton;
}

// StaticRegisterNativesULiveLinkPreset @ 14d080810

void __cdecl ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULiveLinkPreset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddToClient @ 14d08bb20

void __cdecl ULiveLinkPreset::execAddToClient(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = AddToClient((ULiveLinkPreset *)param_1,local_res10[0] != 0);
  *(bool *)param_3 = bVar2;
  return;
}

// execApplyToClient @ 14d08bbc0

void __cdecl ULiveLinkPreset::execApplyToClient(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = ApplyToClient((ULiveLinkPreset *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execApplyToClientLatent @ 14d08bc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ULiveLinkPreset::execApplyToClientLatent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  int iVar3;
  FPendingLatentAction FVar4;
  UObject *pUVar5;
  UWorld *this;
  FLatentActionManager *this_00;
  FApplyToClientLatentAction *pFVar6;
  FPendingLatentAction *pFVar7;
  FPendingLatentAction *pFVar8;
  UObject *local_res10 [2];
  UObject *local_res20;
  undefined8 local_58;
  FPendingLatentAction local_50;
  UObject *local_48;
  
  pFVar8 = (FPendingLatentAction *)0x0;
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = 0xffffffffffffffff;
  local_50 = (FPendingLatentAction)0x0;
  local_48 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar5 = local_48;
  FVar4 = local_50;
  uVar2 = (undefined4)local_58;
  iVar3 = local_58._4_4_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  this = UEngine::GetWorldFromContextObject(GEngine,local_res20,ReturnNull);
  if (this != (UWorld *)0x0) {
    this_00 = UWorld::GetLatentActionManager(this);
    pFVar6 = FLatentActionManager::
             FindExistingActionWithPredicate<FApplyToClientLatentAction,_FLatentActionManager::FindExistingAction<FApplyToClientLatentAction>_::__l2::FFirstItemPredicate>
                       (this_00,pUVar5,iVar3,(FFirstItemPredicate *)local_res10);
    if (pFVar6 == (FApplyToClientLatentAction *)0x0) {
      pFVar7 = ::operator_new(0x38);
      if (pFVar7 != (FPendingLatentAction *)0x0) {
        pFVar7[1] = FVar4;
        *pFVar7 = (FPendingLatentAction)&___7FApplyToClientLatentAction__6B_;
        *(undefined4 *)(pFVar7 + 2) = uVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar5 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar5);
          }
        }
        *(undefined8 *)&pFVar7[2].field_0x4 = 0;
        local_res10[0] = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar7[2].field_0x4,(FObjectPtr)local_res10);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        pFVar7[4] = (FPendingLatentAction)0x0;
        local_res10[0] = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(param_1);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar7 + 4),(FObjectPtr)local_res10);
        pFVar7[6] = (FPendingLatentAction)0x0;
        pFVar7[5] = (FPendingLatentAction)0x3ff0000000000000;
        pFVar8 = pFVar7;
      }
      FLatentActionManager::AddNewAction(this_00,pUVar5,iVar3,pFVar8);
    }
  }
  return;
}

// execBuildFromClient @ 14d08be60

void __cdecl ULiveLinkPreset::execBuildFromClient(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BuildFromClient((ULiveLinkPreset *)param_1);
  return;
}


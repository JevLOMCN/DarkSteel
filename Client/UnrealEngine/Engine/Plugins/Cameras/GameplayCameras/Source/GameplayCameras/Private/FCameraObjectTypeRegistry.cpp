// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// ConstructObject @ 14d59c310

void __thiscall
UE::Cameras::FCameraObjectTypeRegistry::ConstructObject
          (FCameraObjectTypeRegistry *this,FCameraObjectTypeID param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
  
  if ((-1 < (int)param_1.ID) && ((int)param_1.ID < *(int *)&(this->TypeInfos).field_0x28)) {
    if ((*(int *)&(this->TypeInfos).field_0x28 <= (int)param_1.ID) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar3 = *(undefined1 **)&(this->TypeInfos).field_0x20;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->TypeInfos).field_0x10;
    }
    if ((*(uint *)(puVar3 + (ulonglong)(param_1.ID >> 5) * 4) >> (param_1.ID & 0x1f) & 1) != 0)
    goto LAB_14d59c397;
  }
  bVar2 = `UE::Cameras::FCameraObjectTypeRegistry::ConstructObject'::__l3::<lambda_1>::operator()
                    (local_res10);
  if (!bVar2) {
    return;
  }
LAB_14d59c397:
  (**(code **)((longlong)(int)param_1.ID * 0x20 + 0x10 + *(longlong *)&this->TypeInfos))(param_2);
  return;
}

// FindTypeByName @ 14d5a5660

FCameraObjectTypeID __thiscall
UE::Cameras::FCameraObjectTypeRegistry::FindTypeByName
          (FCameraObjectTypeRegistry *this,FName *param_1)

{
  uint *puVar1;
  FName *in_R8;
  
  puVar1 = TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
           ::Find((TMapBase<FName,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>_>
                   *)this,*in_R8);
  if (puVar1 != (uint *)0x0) {
    (param_1->ComparisonIndex).Value = *puVar1;
    return (FCameraObjectTypeID)(uint)param_1;
  }
  (param_1->ComparisonIndex).Value = 0xffffffff;
  return (FCameraObjectTypeID)(uint)param_1;
}

// Get @ 14d5a5d60

FCameraObjectTypeRegistry * __cdecl UE::Cameras::FCameraObjectTypeRegistry::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Cameras::FCameraObjectTypeRegistry::Get'::__l2::
             _dynamic_atexit_destructor_for__StaticRegistry__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &StaticRegistry;
}

// GetTypeInfo @ 14d5abcb0

FCameraObjectTypeInfo * __thiscall
UE::Cameras::FCameraObjectTypeRegistry::GetTypeInfo
          (FCameraObjectTypeRegistry *this,FCameraObjectTypeID param_1)

{
  code *pcVar1;
  bool bVar2;
  FCameraObjectTypeInfo *pFVar3;
  undefined1 *puVar4;
  undefined1 local_res10 [8];
  
  if (((param_1.ID != 0xffffffff) && (-1 < (int)param_1.ID)) &&
     ((int)param_1.ID < *(int *)&(this->TypeInfos).field_0x28)) {
    if (*(int *)&(this->TypeInfos).field_0x28 <= (int)param_1.ID) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FCameraObjectTypeInfo *)(*pcVar1)();
        return pFVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->TypeInfos).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TypeInfos).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)(param_1.ID >> 5) * 4) >> (param_1.ID & 0x1f) & 1) != 0)
    goto LAB_14d5abd34;
  }
  bVar2 = `UE::Cameras::FCameraObjectTypeRegistry::GetTypeInfo'::__l3::<lambda_1>::operator()
                    (local_res10);
  if (!bVar2) {
    return (FCameraObjectTypeInfo *)0x0;
  }
LAB_14d5abd34:
  return (FCameraObjectTypeInfo *)((longlong)(int)param_1.ID * 0x20 + *(longlong *)&this->TypeInfos)
  ;
}

// GetTypeNameSafe @ 14d5abd60

FName __thiscall
UE::Cameras::FCameraObjectTypeRegistry::GetTypeNameSafe
          (FCameraObjectTypeRegistry *this,FCameraObjectTypeID param_1)

{
  FCameraObjectTypeInfo *pFVar1;
  uint in_register_00000014;
  FName FVar2;
  FCameraObjectTypeID in_R8D;
  
  FVar2.Number = in_register_00000014;
  FVar2.ComparisonIndex.Value = param_1.ID;
  if (in_R8D.ID != 0xffffffff) {
    pFVar1 = GetTypeInfo(this,in_R8D);
    if (pFVar1 != (FCameraObjectTypeInfo *)0x0) {
      *(FName *)FVar2 = pFVar1->TypeName;
      return FVar2;
    }
  }
  *(FName *)FVar2 = (FName)0x0;
  return FVar2;
}

// RegisterType @ 14d5c9c00

void __thiscall
UE::Cameras::FCameraObjectTypeRegistry::RegisterType
          (FCameraObjectTypeRegistry *this,FCameraObjectTypeID param_1,
          FCameraObjectTypeInfo *param_2)

{
  FName FVar1;
  FName *pFVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FSparseArrayAllocationInfo *pFVar6;
  undefined1 *puVar7;
  TPairInitializer<FName_const_&,unsigned_int_&&> local_res8;
  FCameraObjectTypeInfo *local_28;
  uint **local_20;
  
  FVar1 = param_2->TypeName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->TypeIDsByName).field_0x8 != *(int *)&(this->TypeIDsByName).field_0x34) {
    puVar7 = *(undefined1 **)&(this->TypeIDsByName).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->TypeIDsByName).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->TypeIDsByName).field_0x48 - 1U & FVar1.Number + uVar4
                              ) * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->TypeIDsByName + (longlong)iVar5 * 0x14) == FVar1) {
          local_res8.Key = &param_2->TypeName;
          `UE::Cameras::FCameraObjectTypeRegistry::RegisterType'::__l2::<lambda_1>::operator()
                    (&local_res8);
          break;
        }
        iVar5 = *(int *)(*(longlong *)&this->TypeIDsByName + 0xc + (longlong)iVar5 * 0x14);
      } while (iVar5 != -1);
    }
  }
  local_20 = &local_res8.Value;
  local_res8.Value._0_4_ = param_1.ID;
  local_28 = param_2;
  TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<FName,unsigned_int>,TDefaultMapHashableKeyFuncs<FName,unsigned_int,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_28);
  pFVar6 = TSparseArrayBase<32,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                     ((TSparseArrayBase<32,8,FDefaultSparseArrayAllocator> *)&this->TypeInfos,
                      (FSparseArrayAllocationInfo *)&local_28,param_1.ID);
  pFVar2 = pFVar6->Pointer;
  if (pFVar2 != (FName *)0x0) {
    uVar4 = param_2->Sizeof;
    uVar3 = param_2->Alignof;
    *pFVar2 = param_2->TypeName;
    pFVar2[1].ComparisonIndex = (FNameEntryId)uVar4;
    pFVar2[1].Number = uVar3;
    FVar1 = (FName)param_2->Destructor;
    pFVar2[2] = (FName)param_2->Constructor;
    pFVar2[3] = FVar1;
  }
  return;
}

// operator() @ 150582040

bool __thiscall
`UE::Cameras::FCameraObjectTypeRegistry::RegisterType'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2827721019312046056>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2827721019312046056>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1505820a7;
    }
  }
  bVar2 = false;
LAB_1505820a7:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505823b0

bool __thiscall
`UE::Cameras::FCameraObjectTypeRegistry::ConstructObject'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2827721019312046015>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2827721019312046015>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150582470

bool __thiscall
`UE::Cameras::FCameraObjectTypeRegistry::GetTypeInfo'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2827721019312046038>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2827721019312046038>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


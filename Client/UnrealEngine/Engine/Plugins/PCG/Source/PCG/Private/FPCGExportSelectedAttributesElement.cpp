// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 33

// operator()<int> @ 149905cf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<int>
          (void *this,int *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<int,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149905dd7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (int *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<int>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149905dd7;
    }
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<int> @ 149906d00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<int>
          (void *this,int *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// operator()<float> @ 149907ac0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<float>
          (void *this,float *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<float,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149907ba7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (float *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<float>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149907ba7;
    }
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>(*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<float> @ 149908bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<float>
          (void *this,float *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  TArray<float,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<float,int> local_18;
  
  uVar6 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),
     pIVar1 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar5 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar5) {
      iVar5 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar5,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (float *)local_28;
      IPCGAttributeAccessor::GetRange<float>(this_00,&local_18,0,pIVar1,StrictType);
    }
    uVar6 = local_38._8_8_ & 0xffffffff;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  iVar5 = (int)uVar6;
  if (-1 < iVar5) {
    if (*(int *)((longlong)&pFVar2[1].Data + 4) < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,pFVar2,*(int *)&pFVar2[1].Data,(int *)((longlong)&pFVar2[1].Data + 4))
      ;
    }
    Algo::
    Transform<TArray<float,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&,__FPCGExportSelectedAttributesElement::ExecuteInternal_::__l93::<lambda_2>::operator()<float>_::__l3::<lambda_1>_>
              (&local_38,
               *(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 8),*(FAccessorData **)this);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar6);
}

// operator()<double> @ 149909840

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<double>
          (void *this,double *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<double,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<double,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149909927:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (double *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<double>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149909927;
    }
    TArrayPrivateFriend::Serialize<double,TSizedDefaultAllocator<32>_>(*(FArchive **)this,&local_38)
    ;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<double> @ 14990a940

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<double>
          (void *this,double *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  TArray<double,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<double,int> local_18;
  
  uVar6 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48),
     pIVar1 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar5 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar5) {
      iVar5 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<double,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar5,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (double *)local_28;
      IPCGAttributeAccessor::GetRange<double>(this_00,&local_18,0,pIVar1,StrictType);
    }
    uVar6 = local_38._8_8_ & 0xffffffff;
  }
  pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
  iVar5 = (int)uVar6;
  if (-1 < iVar5) {
    if (*(int *)((longlong)&pFVar2[1].Data + 4) < iVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,pFVar2,*(int *)&pFVar2[1].Data,(int *)((longlong)&pFVar2[1].Data + 4))
      ;
    }
    Algo::
    Transform<TArray<double,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&,__FPCGExportSelectedAttributesElement::ExecuteInternal_::__l93::<lambda_2>::operator()<double>_::__l3::<lambda_1>_>
              (&local_38,
               *(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 8),*(FAccessorData **)this);
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar6);
}

// operator()<UE::Math::TQuat<double>_> @ 14990b0d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_38;
  TQuat<double> *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TQuat<double>,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_14990b1b7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = (TQuat<double> *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_14990b1b7;
    }
    TArrayPrivateFriend::Serialize<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TQuat<double>_> @ 14990c050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  TQuat<double> *pTVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  TQuat<double> *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TQuat<double>,int> local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar9 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar9 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar7) {
      iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_68,iVar7,Default);
      uStack_40 = local_68.ArrayNum;
      local_48 = (TQuat<double> *)local_68.AllocatorInstance.Data;
      if (local_68.ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = uStack_40;
      local_38.DataPtr = local_48;
      IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
                (this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar9 = (ulong64)(uint)local_68.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar7 = (int)uVar9;
  if (-1 < iVar7) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    iVar7 = (int)uVar9;
    pTVar11 = (TQuat<double> *)(local_68.AllocatorInstance.Data + (longlong)iVar7 * 0x20);
    FVar10.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TQuat<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((TQuat<double> *)FVar10.Data == pTVar11) break;
      PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_58,(TQuat<double> *)FVar10.Data);
      if (((TSharedPtr<FJsonValue,1> *)pFVar3->Data <= &local_58) &&
         (&local_58 <
          (TSharedPtr<FJsonValue,1> *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
        *(int *)&pFVar3[1].Data = iVar8;
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(FJsonValue **)(pFVar4 + (longlong)iVar8 * 0x10) = local_58.Object;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) =
           local_58.SharedReferenceCount.ReferenceController;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
      FVar10.Data = FVar10.Data + 0x20;
    }
    if ((TQuat<double> *)local_68.AllocatorInstance.Data != (TQuat<double> *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// operator()<UE::Math::TRotator<double>_> @ 14990cb00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_38;
  TRotator<double> *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TRotator<double>,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_14990cbe7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = (TRotator<double> *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_14990cbe7;
    }
    TArrayPrivateFriend::Serialize<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TRotator<double>_> @ 14990da80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  int *piVar1;
  TRotator<double> *pTVar2;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong64 uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  TRotator<double> *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TRotator<double>,int> local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar3 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar3 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3);
      TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_68,iVar8,Default);
      uStack_40 = local_68.ArrayNum;
      local_48 = (TRotator<double> *)local_68.AllocatorInstance.Data;
      if (local_68.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = uStack_40;
      local_38.DataPtr = local_48;
      IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
                (this_00,&local_38,0,pIVar3,StrictType);
    }
    uVar10 = (ulong64)(uint)local_68.ArrayNum;
  }
  pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar10;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
      uVar10 = (ulong64)(uint)local_68.ArrayNum;
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
    iVar8 = (int)uVar10;
    pTVar2 = (TRotator<double> *)(local_68.AllocatorInstance.Data + (longlong)iVar8 * 0x18);
    FVar11.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TRotator<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((TRotator<double> *)FVar11.Data == pTVar2) break;
      PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_58,(TRotator<double> *)FVar11.Data);
      if (((TSharedPtr<FJsonValue,1> *)pFVar4->Data <= &local_58) &&
         (&local_58 <
          (TSharedPtr<FJsonValue,1> *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      if (iVar9 == *(int *)((longlong)&pFVar4[1].Data + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar4,(int *)((longlong)&pFVar4[1].Data + 4));
        *(int *)&pFVar4[1].Data = iVar9;
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      pFVar5 = pFVar4->Data;
      *(FJsonValue **)(pFVar5 + (longlong)iVar9 * 0x10) = local_58.Object;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar9 * 0x10 + 8) =
           local_58.SharedReferenceCount.ReferenceController;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = (ulong64)(uint)local_68.ArrayNum;
      FVar11.Data = FVar11.Data + 0x18;
    }
    if ((TRotator<double> *)local_68.AllocatorInstance.Data != (TRotator<double> *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<UE::Math::TTransform<double>_> @ 14990e3f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_38;
  TTransform<double> *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TTransform<double>,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_14990e4d7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = (TTransform<double> *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_14990e4d7;
    }
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TTransform<double>_> @ 14990f430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  TTransform<double> *pTVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  TTransform<double> *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TTransform<double>,int> local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar9 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar9 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar7) {
      iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_68,iVar7,Default);
      uStack_40 = local_68.ArrayNum;
      local_48 = (TTransform<double> *)local_68.AllocatorInstance.Data;
      if (local_68.ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = uStack_40;
      local_38.DataPtr = local_48;
      IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
                (this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar9 = (ulong64)(uint)local_68.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar7 = (int)uVar9;
  if (-1 < iVar7) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    iVar7 = (int)uVar9;
    pTVar11 = (TTransform<double> *)(local_68.AllocatorInstance.Data + (longlong)iVar7 * 0x60);
    FVar10.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TTransform<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((TTransform<double> *)FVar10.Data == pTVar11) break;
      PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_58,(TTransform<double> *)FVar10.Data);
      if (((TSharedPtr<FJsonValue,1> *)pFVar3->Data <= &local_58) &&
         (&local_58 <
          (TSharedPtr<FJsonValue,1> *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
        *(int *)&pFVar3[1].Data = iVar8;
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(FJsonValue **)(pFVar4 + (longlong)iVar8 * 0x10) = local_58.Object;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) =
           local_58.SharedReferenceCount.ReferenceController;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
      FVar10.Data = FVar10.Data + 0x60;
    }
    if ((TTransform<double> *)local_68.AllocatorInstance.Data != (TTransform<double> *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// operator()<UE::Math::TVector2<double>_> @ 149910190

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TVector2<double>,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149910277:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (TVector2<double> *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149910277;
    }
    TArrayPrivateFriend::Serialize<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TVector2<double>_> @ 1499110f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  FScriptContainerElement *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TVector2<double>,int> local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar9 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar9 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar7) {
      iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_68,iVar7,Default);
      uStack_40 = local_68.ArrayNum;
      local_48 = local_68.AllocatorInstance.Data;
      if (local_68.ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = uStack_40;
      local_38.DataPtr = (TVector2<double> *)local_48;
      IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
                (this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar9 = (ulong64)(uint)local_68.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar7 = (int)uVar9;
  if (-1 < iVar7) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    iVar7 = (int)uVar9;
    pFVar11 = local_68.AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    FVar10.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar10.Data == pFVar11) break;
      PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_58,(TVector2<double> *)FVar10.Data);
      if (((TSharedPtr<FJsonValue,1> *)pFVar3->Data <= &local_58) &&
         (&local_58 <
          (TSharedPtr<FJsonValue,1> *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
        *(int *)&pFVar3[1].Data = iVar8;
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(FJsonValue **)(pFVar4 + (longlong)iVar8 * 0x10) = local_58.Object;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) =
           local_58.SharedReferenceCount.ReferenceController;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
      FVar10.Data = FVar10.Data + 0x10;
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// operator()<UE::Math::TVector4<double>_> @ 149911c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TVector4<double>,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149911d17:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (TVector4<double> *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149911d17;
    }
    TArrayPrivateFriend::Serialize<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TVector4<double>_> @ 149912ad0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong64 uVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  FScriptContainerElement *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TVector4<double>,int> local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar9 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar9 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar7) {
      iVar7 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_68,iVar7,Default);
      uStack_40 = local_68.ArrayNum;
      local_48 = local_68.AllocatorInstance.Data;
      if (local_68.ArrayNum < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = uStack_40;
      local_38.DataPtr = (TVector4<double> *)local_48;
      IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
                (this_00,&local_38,0,pIVar2,StrictType);
    }
    uVar9 = (ulong64)(uint)local_68.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar7 = (int)uVar9;
  if (-1 < iVar7) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar7,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    iVar7 = (int)uVar9;
    pFVar11 = local_68.AllocatorInstance.Data + (longlong)iVar7 * 0x20;
    FVar10.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector4<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar10.Data == pFVar11) break;
      PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_58,(TVector4<double> *)FVar10.Data);
      if (((TSharedPtr<FJsonValue,1> *)pFVar3->Data <= &local_58) &&
         (&local_58 <
          (TSharedPtr<FJsonValue,1> *)pFVar3->Data + *(int *)((longlong)&pFVar3[1].Data + 4))) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
        *(int *)&pFVar3[1].Data = iVar8;
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(FJsonValue **)(pFVar4 + (longlong)iVar8 * 0x10) = local_58.Object;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) =
           local_58.SharedReferenceCount.ReferenceController;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar9 = (ulong64)(uint)local_68.ArrayNum;
      FVar10.Data = FVar10.Data + 0x20;
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar9);
}

// operator()<UE::Math::TVector<double>_> @ 149913810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TVector<double>,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_1499138f7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (TVector<double> *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_1499138f7;
    }
    TArrayPrivateFriend::Serialize<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<UE::Math::TVector<double>_> @ 149914790

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong64 uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FJsonValue,1> local_58;
  FScriptContainerElement *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TVector<double>,int> local_38;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar10 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar3 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar10 = 0,
     pIVar3 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar3->_padding_ + 0x10))(pIVar3);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_68,iVar8,Default);
      uStack_40 = local_68.ArrayNum;
      local_48 = local_68.AllocatorInstance.Data;
      if (local_68.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = uStack_40;
      local_38.DataPtr = (TVector<double> *)local_48;
      IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
                (this_00,&local_38,0,pIVar3,StrictType);
    }
    uVar10 = (ulong64)(uint)local_68.ArrayNum;
  }
  pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar10;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
      uVar10 = (ulong64)(uint)local_68.ArrayNum;
    }
    pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
    iVar8 = (int)uVar10;
    pFVar2 = local_68.AllocatorInstance.Data + (longlong)iVar8 * 0x18;
    FVar11.Data = local_68.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (FVar11.Data == pFVar2) break;
      PCG::IO::Json::Helpers::ConvertFloatingPointType(&local_58,(TVector<double> *)FVar11.Data);
      if (((TSharedPtr<FJsonValue,1> *)pFVar4->Data <= &local_58) &&
         (&local_58 <
          (TSharedPtr<FJsonValue,1> *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      if (iVar9 == *(int *)((longlong)&pFVar4[1].Data + 4)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar4,(int *)((longlong)&pFVar4[1].Data + 4));
        *(int *)&pFVar4[1].Data = iVar9;
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      pFVar5 = pFVar4->Data;
      *(FJsonValue **)(pFVar5 + (longlong)iVar9 * 0x10) = local_58.Object;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar9 * 0x10 + 8) =
           local_58.SharedReferenceCount.ReferenceController;
      local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_58.Object = (FJsonValue *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar10 = (ulong64)(uint)local_68.ArrayNum;
      FVar11.Data = FVar11.Data + 0x18;
    }
    if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar10);
}

// operator()<FSoftClassPath> @ 1499152e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<FSoftClassPath>(void *this,FSoftClassPath *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FSoftClassPath,TSizedDefaultAllocator<32>_> local_38;
  FSoftClassPath *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FSoftClassPath,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_1499153c7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<FSoftClassPath,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = (FSoftClassPath *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<FSoftClassPath>(this_00,&local_18,0,pIVar1,StrictType)
      ;
      if (!bVar3) goto LAB_1499153c7;
    }
    TArrayPrivateFriend::Serialize<FSoftClassPath,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  DestructItems<FSoftClassPath,int>
            ((FSoftClassPath *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FSoftClassPath *)local_38.AllocatorInstance.Data != (FSoftClassPath *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FSoftClassPath> @ 1499161f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<FSoftClassPath>(void *this,FSoftClassPath *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// operator()<FSoftObjectPath> @ 149916da0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
operator()<FSoftObjectPath>(void *this,FSoftObjectPath *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_38;
  FSoftObjectPath *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FSoftObjectPath,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149916e87:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = (FSoftObjectPath *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<FSoftObjectPath>
                        (this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149916e87;
    }
    TArrayPrivateFriend::Serialize<FSoftObjectPath,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FSoftObjectPath *)local_38.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FSoftObjectPath> @ 149917cb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
operator()<FSoftObjectPath>(void *this,FSoftObjectPath *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// operator()<FName> @ 149918d20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<FName>
          (void *this,FName *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  FName *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FName,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_149918e07:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<FName,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = (FName *)local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<FName>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_149918e07;
    }
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>(*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FName> @ 149919d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<FName>
          (void *this,FName *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// operator()<FString> @ 14991aa30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<FString>
          (void *this,FString *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FString,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_14991ab17:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (FString *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<FString>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_14991ab17;
    }
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<FString> @ 14991bb40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<FString>
          (void *this,FString *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// operator()<__int64> @ 14991c920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<__int64>
          (void *this,long64 *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<__int64,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_14991ca07:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (long64 *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<__int64>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_14991ca07;
    }
    TArrayPrivateFriend::Serialize<__int64,TSizedDefaultAllocator<32>_>
              (*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<__int64> @ 14991da10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<__int64>
          (void *this,long64 *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// operator()<bool> @ 14991e7d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::operator()<bool>
          (void *this,bool *param_1)

{
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<bool,TSizedDefaultAllocator<32>_> local_38;
  FScriptContainerElement *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<bool,int> local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)((longlong)this + 8) + 0x40);
  if ((this_00 == (IPCGAttributeAccessor *)0x0) ||
     (pIVar1 = *(IPCGAttributeAccessorKeys **)(*(longlong *)((longlong)this + 8) + 0x48),
     pIVar1 == (IPCGAttributeAccessorKeys *)0x0)) {
LAB_14991e8b7:
    PCGLog::Metadata::LogFailToGetAttributeError
              (*(FPCGAttributePropertySelector **)((longlong)this + 8),
               *(FPCGContext **)((longlong)this + 0x10));
  }
  else {
    iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
    if (0 < iVar4) {
      iVar4 = (**(code **)(pIVar1->_padding_ + 0x10))(pIVar1);
      TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_38,iVar4,Default);
      iStack_20 = local_38.ArrayNum;
      local_28 = local_38.AllocatorInstance.Data;
      if (local_38.ArrayNum < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iStack_20;
      local_18.DataPtr = (bool *)local_28;
      bVar3 = IPCGAttributeAccessor::GetRange<bool>(this_00,&local_18,0,pIVar1,StrictType);
      if (!bVar3) goto LAB_14991e8b7;
    }
    TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>(*(FArchive **)this,&local_38);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

// operator()<bool> @ 14991f7f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::operator()<bool>
          (void *this,bool *param_1)

{
  int *piVar1;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong64 uVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  TJsonValueString<wchar_t> *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FScriptContainerElement *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  TSharedRef<TJsonValueString<wchar_t>,1> local_48;
  TArrayView<FString,int> local_38;
  
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  this_00 = *(IPCGAttributeAccessor **)(*(longlong *)this + 0x40);
  uVar11 = 0;
  if ((this_00 != (IPCGAttributeAccessor *)0x0) &&
     (pIVar2 = *(IPCGAttributeAccessorKeys **)(*(longlong *)this + 0x48), uVar11 = 0,
     pIVar2 != (IPCGAttributeAccessorKeys *)0x0)) {
    iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
    if (0 < iVar8) {
      iVar8 = (**(code **)(pIVar2->_padding_ + 0x10))(pIVar2);
      TArray<FString,TSizedDefaultAllocator<32>_>::SetNum(&local_78,iVar8,Default);
      uStack_50 = local_78.ArrayNum;
      local_58 = local_78.AllocatorInstance.Data;
      if (local_78.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38._12_4_ = uStack_4c;
      local_38.ArrayNum = uStack_50;
      local_38.DataPtr = (FString *)local_58;
      IPCGAttributeAccessor::GetRange<FString>(this_00,&local_38,0,pIVar2,AllowBroadcast);
    }
    uVar11 = (ulong64)(uint)local_78.ArrayNum;
  }
  pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
  iVar8 = (int)uVar11;
  if (-1 < iVar8) {
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (*piVar1 < iVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar8,pFVar3,*(int *)&pFVar3[1].Data,piVar1);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
    }
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    uVar9 = (uint)uVar11;
    pFVar13 = local_78.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    FVar12.Data = local_78.AllocatorInstance.Data;
    while( true ) {
      uVar10 = (uint)uVar11;
      if ((uint)uVar11 != uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
        uVar10 = local_78.ArrayNum;
      }
      if (FVar12.Data == pFVar13) break;
      MakeShared<TJsonValueString<wchar_t>,1,FString_const_&>(&local_48,(FString *)FVar12.Data);
      FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_68 = local_48.Object;
      pTStack_60 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar3->Data <= (FScriptContainerElement *)&local_68) &&
         ((FScriptContainerElement *)&local_68 <
          pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = *(int *)&pFVar3[1].Data;
      if (iVar8 == *(int *)((longlong)&pFVar3[1].Data + 4)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,pFVar3,(int *)((longlong)&pFVar3[1].Data + 4));
      }
      *(int *)&pFVar3[1].Data = iVar8 + 1;
      pFVar4 = pFVar3->Data;
      *(TJsonValueString<wchar_t> **)(pFVar4 + (longlong)iVar8 * 0x10) = local_68;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar8 * 0x10 + 8) = pTStack_60;
      pTStack_60 = (TReferenceControllerBase<1> *)0x0;
      local_68 = (TJsonValueString<wchar_t> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      uVar11 = (ulong64)(uint)local_78.ArrayNum;
      FVar12.Data = FVar12.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,uVar10);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// CanExecuteOnlyOnMainThread @ 1499da3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGExportSelectedAttributesElement::CanExecuteOnlyOnMainThread
          (FPCGExportSelectedAttributesElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 1499e4ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __thiscall
FPCGExportSelectedAttributesElement::ExecuteInternal
          (FPCGExportSelectedAttributesElement *this,FPCGContext *param_1)

{
  char cVar1;
  UPCGNode *this_00;
  void *_Src;
  UPCGData *this_01;
  undefined1 auVar2 [8];
  ITextData *pIVar3;
  code *pcVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  FJsonObject *pFVar8;
  FSharedReferencer<1> FVar9;
  longlong lVar10;
  undefined1 auVar11 [8];
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  UClass *pUVar16;
  UPCGSettings *pUVar17;
  TObjectPtr<UPCGSettings>_u_0 TVar18;
  FPCGTaggedData *pFVar19;
  FText *pFVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  FString *pFVar23;
  IFileManager *pIVar24;
  FArchiveState *pFVar25;
  TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> TVar26;
  TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
  TVar27;
  TSharedRef<FJsonObject,1> *pTVar28;
  FArchiveState *this_02;
  TReferenceControllerBase<1> *pTVar29;
  uint uVar30;
  wchar_t *pwVar31;
  ForAnyElementType FVar32;
  FArchiveState *pFVar33;
  uint uVar34;
  longlong lVar35;
  FPCGAttributePropertyInputSelector *this_03;
  FAccessorData *this_04;
  ForElementType<PCGExportSelectedAttributes::FAccessorData> FVar36;
  FScriptContainerElement *pFVar37;
  FArchiveState *pFVar38;
  uint uVar39;
  ForElementType<PCGExportSelectedAttributes::FAccessorData> FVar40;
  uint uVar41;
  FPCGAttributePropertyInputSelector *pFVar42;
  FPCGAttributePropertySelector *pFVar43;
  bool bVar44;
  undefined1 auStackY_ca8 [32];
  <lambda_1> local_c67 [3];
  uint local_c64;
  undefined1 local_c60;
  undefined1 local_c5f;
  undefined1 local_c5e;
  bool local_c5d [5];
  ForAnyElementType local_c58;
  int local_c50 [2];
  TObjectPtr<UPCGSettings>_u_0 local_c48;
  uint local_c40;
  FJsonObject *local_c38;
  FSharedReferencer<1> FStack_c30;
  TArray<FPCGAttributePropertySelector,TSizedDefaultAllocator<32>_> local_c28;
  FPCGContext *local_c18;
  FPCGAttributePropertySelector *local_c08;
  FScriptContainerElement *pFStack_c00;
  longlong local_bf8;
  FArchiveState *local_bf0;
  FArchiveState *local_be8;
  ForElementType<PCGExportSelectedAttributes::FAccessorData> FStack_be0;
  FPCGContext *local_bd8;
  FString local_bc8;
  longlong local_bb8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_bb0;
  int local_ba0 [2];
  float local_b98;
  int local_b94;
  float local_b90 [2];
  TObjectPtr<UPCGSettings>_u_0 local_b88;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *local_b80;
  wchar_t *local_b78;
  undefined8 local_b70;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b68;
  FPCGAttributePropertySelector local_b58;
  undefined1 local_b18 [8];
  undefined1 auStack_b10 [8];
  uchar *local_b08;
  FString local_b00;
  TSharedPtr<FJsonObject,1> local_af0;
  FName local_ae0;
  FString local_ad8;
  FName local_ac8;
  TSharedPtr<FJsonObject,1> local_ac0;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_ab0;
  double local_aa0;
  double local_a98;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_a90;
  long64 local_a88;
  undefined1 local_a80 [40];
  ulong64 local_a58;
  undefined1 local_a50 [16];
  undefined1 local_a40 [24];
  longlong local_a28;
  longlong local_a20;
  ulong64 local_a18;
  FSoftObjectPath local_a10;
  FSoftClassPath local_9f0;
  FSoftClassPath local_9d0;
  FArchiveState *local_9b0;
  ForElementType<PCGExportSelectedAttributes::FAccessorData> FStack_9a8;
  FPCGContext *local_9a0;
  wchar_t *local_998;
  uint uStack_990;
  undefined4 uStack_98c;
  FString local_988;
  FPCGAttributePropertySelector *local_978;
  FScriptContainerElement *pFStack_970;
  FTextFormat local_968;
  FText local_958;
  TSharedPtr<FCulture,1> local_948;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_938;
  FString local_928;
  FFormatArgumentValue local_918;
  TSharedRef<FJsonObject,1> local_8f8;
  FText local_8e8;
  TVector2<double>_u_0 local_8d8;
  FString local_8c8;
  TVector2<double>_u_0 local_8b8;
  TSharedRef<FJsonObject,1> local_8a8;
  FText local_898;
  TSharedPtr<FJsonObject,1> local_888;
  FText local_878;
  TStringView<wchar_t> local_868;
  FText local_858;
  FText local_848;
  TVector<double>_u_0 local_838;
  TRotator<double> local_820;
  FString local_808;
  FText local_7f8;
  FText local_7e8;
  FText local_7d8;
  TSharedRef<FJsonObject,1> local_7c8;
  FText local_7b8;
  FText local_7a8;
  TVector<double>_u_0 local_798;
  TRotator<double> local_780;
  TVector4<double>_u_0 local_768;
  TQuat<double> local_748;
  TVector4<double>_u_0 local_728;
  TQuat<double> local_708;
  TTransform<double> local_6e8;
  TTransform<double> local_688;
  FText local_628;
  FTextFormat local_618;
  FText local_608;
  FText local_5f8;
  FTextFormat local_5e8;
  FText local_5d8;
  FTextFormat local_5c8;
  undefined1 local_5b8 [48];
  int local_588;
  FTextFormat local_578;
  ForElementType<PCGExportSelectedAttributes::FAccessorData> local_568;
  uint local_60;
  uint local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_ca8;
  bVar44 = -1 < CpuChannel->Enabled;
  local_c18 = param_1;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId141,"FPCGExportSelectedAttributesElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
               ,0x8d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId141);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar17 = UPCGNode::GetSettings(this_00), pUVar17 == (UPCGSettings *)0x0)) {
      pFVar19 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGExportSelectedAttributesSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_c67[0]);
      if (pFVar19 != (FPCGTaggedData *)0x0) {
        local_b88.ObjectPtr.field0_0x0 = (FObjectPtr)(pFVar19->Data).Data.field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_b88.DebugPtr != (UPCGSettings *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_b88.DebugPtr);
        }
        if (local_b88.DebugPtr != (UPCGSettings *)0x0) {
          pUVar16 = UPCGExportSelectedAttributesSettings::StaticClass();
          bVar12 = FObjectPtr::IsA(&local_b88.ObjectPtr,pUVar16);
          if (bVar12) {
            local_c48.DebugPtr = local_b88.DebugPtr;
            TVar18 = local_b88;
            goto LAB_1499e4c43;
          }
        }
      }
    }
    else {
      pUVar17 = UPCGNode::GetSettings(this_00);
      TVar18.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar17);
      if (TVar18.DebugPtr != (UPCGSettings *)0x0) {
        local_c48.DebugPtr = TVar18.DebugPtr;
        pUVar16 = UPCGExportSelectedAttributesSettings::StaticClass();
        iVar15 = (int)pUVar16->_padding_;
        if ((iVar15 <= *(int *)((TVar18.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar18.DebugPtr)->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
            &pUVar16->_padding_)) goto LAB_1499e4c43;
      }
    }
    local_c48.DebugPtr = (UPCGSettings *)0x0;
    TVar18.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar16 = UPCGExportSelectedAttributesSettings::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar16);
    if (bVar12) {
      local_c48 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      TVar18 = local_c48;
    }
    else {
      local_c48.DebugPtr = (UPCGSettings *)0x0;
      TVar18.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_1499e4c43:
  pFVar33 = (FArchiveState *)0x0;
  if ((TVar18.DebugPtr == (UPCGSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                          ,0x94,L""), bVar12)) {
    pcVar4 = (code *)swi(3);
    uVar13 = (*pcVar4)();
    return (bool)uVar13;
  }
  FPCGDataCollection::GetInputsByPin
            (&param_1->InputData,&local_b68,&PCGPinConstants::DefaultInputLabel);
  if ((local_b68.ArrayNum == 0) || ((int)TVar18.DebugPtr[1]._padding_ == 0)) goto LAB_1499e6c27;
  if (1 < local_b68.ArrayNum) {
    PCGLog::InputOutput::LogFirstInputOnlyWarning(PCGPinConstants::DefaultInputLabel,param_1);
  }
  local_bc8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_bc8.Data.ArrayNum = (int)TVar18.DebugPtr[1]._padding_;
  lVar35 = (longlong)local_bc8.Data.ArrayNum;
  _Src = (void *)TVar18.DebugPtr[1]._padding_;
  uVar30 = 0;
  if (local_bc8.Data.ArrayNum == 0) {
    local_bc8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_bc8.Data.ArrayNum,0,(ForAnyElementType *)&local_bc8,local_bc8.Data.ArrayNum
               ,&local_bc8.Data.ArrayMax);
    memcpy(local_bc8.Data.AllocatorInstance.Data,_Src,lVar35 * 2);
  }
  if (local_bc8.Data.ArrayNum < 2) {
    pFVar20 = FText::FromString(&local_628,&local_bc8);
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_7b8,L"PCGExportSelectedAttributesElement",L"InvalidDirectoryError",
                         L"Invalid or empty export directory: {0}");
    pFVar22 = FTextFormat::FTextFormat(&local_618,pFVar21,Default);
    pFVar20 = FText::Format<FText>(&local_7f8,pFVar22,pFVar20);
    PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
    if (local_7f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7f8.TextData.Reference + 0x10))();
    }
    if (local_7b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7b8.TextData.Reference + 0x10))();
    }
  }
  else if ((int)TVar18.DebugPtr[1]._padding_ < 2) {
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_7a8,L"PCGExportSelectedAttributesElement",L"EmptyFileName",
                         L"A valid file name is required.");
    PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
    if (local_7a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7a8.TextData.Reference + 0x10))();
    }
  }
  else {
    cVar1 = (char)TVar18.DebugPtr[1]._padding_;
    local_bf0 = (FArchiveState *)0x0;
    local_c38 = (FJsonObject *)0x0;
    FStack_c30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (cVar1 == '\0') {
      ::FString::FString(&local_988,L".bin");
      pFVar23 = PCGExportSelectedAttributes::Helpers::String::MergeFileName
                          (&local_808,&local_bc8,(FString *)&TVar18.DebugPtr[1]._padding_,&local_988
                          );
      if ((pFVar23->Data).ArrayNum == 0) {
        pwVar31 = L"";
      }
      else {
        pwVar31 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_b00,pwVar31);
      if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_808.Data.AllocatorInstance.Data);
      }
      if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_988.Data.AllocatorInstance.Data);
      }
      pIVar24 = IFileManager::Get();
      FVar32.Data = (FScriptContainerElement *)L"";
      if (local_b00.Data.ArrayNum != 0) {
        FVar32.Data = local_b00.Data.AllocatorInstance.Data;
      }
      pFVar25 = (FArchiveState *)(**(code **)((longlong)*pIVar24 + 0x20))(pIVar24,FVar32.Data);
      local_bf0 = pFVar25;
      if (pFVar25 != (FArchiveState *)0x0) {
        ::FName::FName((FName *)(local_a40 + 8),L"PCG::IO::AttributeExport");
        FArchiveState::SetCustomVersion
                  (pFVar25,&PCG::IO::Constants::Attribute::FCustomExportVersion::GUID,0,
                   (FName)local_a40._8_8_);
        if ((char)TVar18.DebugPtr[1]._padding_ != '\0') {
          local_ba0[0] = *(int *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4);
          ::operator<<((FArchive *)pFVar25,local_ba0);
        }
        if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b00.Data.AllocatorInstance.Data);
        }
        goto LAB_1499e4fe1;
      }
      pFVar20 = FText::FromString(&local_608,&local_b00);
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_7d8,L"PCGExportSelectedAttributesElement",L"FileWriterInvalidPath"
                           ,L"Could not create a valid archive writer with path: {0}");
      pFVar22 = FTextFormat::FTextFormat(&local_578,pFVar21,Default);
      pFVar20 = FText::Format<FText>(&local_7e8,pFVar22,pFVar20);
      PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
      if (local_7e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_7e8.TextData.Reference + 0x10))();
      }
      if (local_7d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
      }
      if (local_b00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b00.Data.AllocatorInstance.Data);
      }
    }
    else {
      if (cVar1 == '\x01') {
        pTVar28 = MakeShared<FJsonObject,1>(&local_7c8);
        local_a80._24_8_ = (pTVar28->SharedReferenceCount).ReferenceController;
        local_c38 = pTVar28->Object;
        if ((TReferenceControllerBase<1> *)local_a80._24_8_ != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)local_a80._24_8_)->SharedReferenceCount =
               (atomic<int>)
               ((int)((TReferenceControllerBase<1> *)local_a80._24_8_)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a80._16_8_ = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_c30,(FSharedReferencer<1> *)(local_a80 + 0x18));
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_a80._24_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_7c8.SharedReferenceCount.ReferenceController);
        pTVar28 = MakeShared<FJsonObject,1>(&local_8f8);
        local_ac0.Object = pTVar28->Object;
        local_ac0.SharedReferenceCount.ReferenceController =
             (pTVar28->SharedReferenceCount).ReferenceController;
        if (local_ac0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_ac0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_ac0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_8f8.SharedReferenceCount.ReferenceController);
        if ((char)TVar18.DebugPtr[1]._padding_ == '\0') {
          iVar15 = -1;
        }
        else {
          iVar15 = *(int *)((longlong)&TVar18.DebugPtr[1]._padding_ + 4);
        }
        PCG::IO::Json::Helpers::AppendHeader(&local_ac0,0,iVar15);
        if ((local_c38 == (FJsonObject *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          uVar13 = (*pcVar4)();
          return (bool)uVar13;
        }
        pFVar20 = FText::AsLocalizable_Advanced_LocText
                            (&local_8e8,L"PCGExportSelectedAttributesElement",L"JsonHeaderField",
                             L"Header");
        pFVar23 = FText::ToString(pFVar20);
        FJsonObject::SetObjectField(local_c38,pFVar23,&local_ac0);
        if (local_8e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_8e8.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_ac0.SharedReferenceCount.ReferenceController);
      }
LAB_1499e4fe1:
      if ((local_b68.ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      this_01 = *(UPCGData **)local_b68.AllocatorInstance.Data;
      if ((this_01 == (UPCGData *)0x0) ||
         (lVar35 = (**(code **)(this_01->_padding_ + 800))(this_01), TVar18 = local_c48, lVar35 == 0
         )) {
        PCGLog::InputOutput::LogInvalidInputDataError(param_1);
      }
      else {
        local_c28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c28.ArrayNum = 0;
        local_c28.ArrayMax = 0;
        if ((char)local_c48.DebugPtr[1]._padding_ == '\0') {
          this_03 = (FPCGAttributePropertyInputSelector *)local_c48.DebugPtr[1]._padding_;
          iVar15 = (int)local_c48.DebugPtr[1]._padding_;
          pFVar42 = this_03 + iVar15;
          while( true ) {
            if ((int)TVar18.DebugPtr[1]._padding_ != iVar15) {
              local_c60 = 0;
              `TCheckedPointerIterator<FPCGAttributePropertyInputSelector_const_,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(&local_c60);
            }
            param_1 = local_c18;
            if (this_03 == pFVar42) break;
            pFVar43 = (FPCGAttributePropertySelector *)
                      FPCGAttributePropertyInputSelector::CopyAndFixLast
                                (this_03,(FPCGAttributePropertyInputSelector *)local_5b8,this_01);
            iVar14 = local_c28.ArrayNum;
            if (local_c28.ArrayNum == local_c28.ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&local_c28.AllocatorInstance,&local_c28.ArrayMax);
            }
            local_c28.ArrayNum = iVar14 + 1;
            FPCGAttributePropertySelector::FPCGAttributePropertySelector
                      ((FPCGAttributePropertySelector *)
                       (local_c28.AllocatorInstance.Data + (longlong)iVar14 * 0x40),pFVar43);
            DestructItems<FString,int>((FString *)local_5b8._40_8_,local_588);
            if ((FString *)local_5b8._40_8_ != (FString *)0x0) {
              FMemory::Free((void *)local_5b8._40_8_);
            }
            this_03 = this_03 + 1;
          }
        }
        else {
          bVar12 = UObjectBaseUtility::IsA<UPCGBasePointData>((UObjectBaseUtility *)this_01);
          if (bVar12) {
            PCGExportSelectedAttributes::Helpers::AddAllPointPropertySelectors(&local_c28);
            PCGExportSelectedAttributes::Helpers::AddAllAttributeSelectors(this_01,&local_c28);
          }
          else {
            pUVar16 = Z_Construct_UClass_UPCGSplineData_NoRegister();
            iVar15 = (int)pUVar16->_padding_;
            if ((iVar15 <= *(int *)(this_01->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
                &pUVar16->_padding_)) {
              PCGExportSelectedAttributes::Helpers::AddAllSplinePropertySelectors(&local_c28);
            }
            PCGExportSelectedAttributes::Helpers::AddAllAttributeSelectors(this_01,&local_c28);
          }
        }
        local_568.SecondaryData = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0;
        local_60 = 0;
        local_5c = 0x10;
        uVar34 = (uint)TVar18.DebugPtr[1]._padding_;
        if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
        }
        if (0x10 < (int)uVar34) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGExportSelectedAttributes::FAccessorData>_>
                    (0x50,8,uVar34,&local_568,0,(int *)&local_5c);
        }
        iVar15 = local_c28.ArrayNum;
        pFVar43 = (FPCGAttributePropertySelector *)
                  (local_c28.AllocatorInstance.Data + (longlong)local_c28.ArrayNum * 0x40);
        FVar32.Data = local_c28.AllocatorInstance.Data;
        while( true ) {
          if (local_c28.ArrayNum != iVar15) {
            local_c5f = 0;
            `TCheckedPointerIterator<FPCGAttributePropertySelector,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_c5f);
          }
          pFVar25 = local_bf0;
          if ((FPCGAttributePropertySelector *)FVar32.Data == pFVar43) break;
          local_b58._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
          local_b18 = (undefined1  [8])0x0;
          auStack_b10 = (undefined1  [8])0x0;
          local_b58.Selection = Attribute;
          local_b58.DomainName.ComparisonIndex.Value = 0;
          local_b58.DomainName.Number = 0;
          local_b58.AttributeName.ComparisonIndex.Value = 0;
          local_b58.AttributeName.Number = 0;
          local_b58.PropertyName.ComparisonIndex.Value = 0;
          local_b58.PropertyName.Number = 0;
          local_b58.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_b58.ExtraNames.ArrayNum = 0;
          local_b58.ExtraNames.ArrayMax = 0;
          local_b58.ExtraProperty = Index;
          FPCGAttributePropertySelector::operator=
                    (&local_b58,(FPCGAttributePropertySelector *)FVar32.Data);
          TVar26 = PCGAttributeAccessorHelpers::CreateConstAccessor
                             ((UPCGData *)local_a40,(FPCGAttributePropertySelector *)this_01,
                              SUB81(&local_b58,0));
          auVar11 = local_b18;
          auVar2 = local_b18;
          if ((IPCGAttributeAccessor *)local_b18 != TVar26.Ptr) {
            auVar2 = (undefined1  [8])(TVar26.Ptr)->_padding_;
            (TVar26.Ptr)->_padding_ = 0;
            if (local_b18 != (undefined1  [8])0x0) {
              plVar5 = (longlong *)local_b18;
              local_b18 = auVar2;
              (**(code **)*plVar5)(auVar11,1);
              auVar2 = local_b18;
            }
          }
          local_b18 = auVar2;
          if ((undefined8 *)local_a40._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_a40._0_8_)(local_a40._0_8_,1);
          }
          TVar27 = PCGAttributeAccessorHelpers::CreateConstKeys
                             ((UPCGData *)local_a80,(FPCGAttributePropertySelector *)this_01);
          auVar11 = auStack_b10;
          auVar2 = auStack_b10;
          if ((IPCGAttributeAccessorKeys *)auStack_b10 != TVar27.Ptr) {
            auVar2 = (undefined1  [8])(TVar27.Ptr)->_padding_;
            (TVar27.Ptr)->_padding_ = 0;
            if (auStack_b10 != (undefined1  [8])0x0) {
              plVar5 = (longlong *)auStack_b10;
              auStack_b10 = auVar2;
              (**(code **)*plVar5)(auVar11,1);
              auVar2 = auStack_b10;
            }
          }
          auStack_b10 = auVar2;
          if ((undefined8 *)local_a80._0_8_ != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)local_a80._0_8_)(local_a80._0_8_,1);
          }
          if ((local_b18 == (undefined1  [8])0x0) || (auStack_b10 == (undefined1  [8])0x0)) {
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_b58,param_1);
          }
          else {
            if (local_60 == local_5c) {
              local_60 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<PCGExportSelectedAttributes::FAccessorData>_>
                                   (0x850,&local_568,(int *)&local_5c);
            }
            FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)&local_568;
            if (local_568.SecondaryData !=
                (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
              FVar36 = local_568.SecondaryData;
            }
            this_04 = (FAccessorData *)((longlong)(int)local_60 * 0x50 + (longlong)FVar36);
            local_60 = local_60 + 1;
            FPCGAttributePropertySelector::FPCGAttributePropertySelector
                      ((FPCGAttributePropertySelector *)this_04,&local_b58);
            (this_04->Accessor).Ptr = (IPCGAttributeAccessor *)local_b18;
            local_b18 = (undefined1  [8])0x0;
            (this_04->Keys).Ptr = (IPCGAttributeAccessorKeys *)auStack_b10;
            auStack_b10 = (undefined1  [8])0x0;
          }
          if (auStack_b10 != (undefined1  [8])0x0) {
            (**(code **)*(longlong *)auStack_b10)(auStack_b10,1);
          }
          if (local_b18 != (undefined1  [8])0x0) {
            (**(code **)*(longlong *)local_b18)(local_b18,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_b58.ExtraNames.AllocatorInstance.Data,
                     local_b58.ExtraNames.ArrayNum);
          if (local_b58.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b58.ExtraNames.AllocatorInstance.Data);
          }
          FVar32.Data = FVar32.Data + 0x40;
        }
        if (local_60 != 0) {
          cVar1 = (char)local_c48.DebugPtr[1]._padding_;
          if (cVar1 == '\0') {
            if ((local_bf0 == (FArchiveState *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Archive",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                    ,0x11c,L""), bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return (bool)uVar13;
            }
            uVar34 = local_60;
            dVar7 = _UNK_15061cbc8;
            dVar6 = ___xmm_3ff00000000000000000000000000000;
            FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)&local_568;
            if (local_568.SecondaryData !=
                (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
              FVar36 = local_568.SecondaryData;
            }
            FVar40 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                     ((longlong)(int)local_60 * 0x50 + (longlong)FVar36);
            while( true ) {
              if (local_60 != uVar34) {
                local_c5e = 0;
                `TCheckedPointerIterator<PCGExportSelectedAttributes::FAccessorData,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_c5e);
              }
              if (FVar36 == FVar40) break;
              local_9b0 = pFVar25;
              local_be8 = pFVar25;
              FStack_be0 = FVar36;
              local_bd8 = param_1;
              FStack_9a8 = FVar36;
              local_9a0 = param_1;
              switch(((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                       *)((longlong)FVar36 + 0x40))->Ptr->UnderlyingType) {
              case 0:
                local_b98 = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<float>(&local_be8,&local_b98);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 1:
                local_a98 = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<double>(&local_be8,&local_a98);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 2:
                local_ba0[1] = 0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<int>(&local_be8,local_ba0 + 1);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 3:
                local_a88 = 0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<__int64>(&local_be8,&local_a88);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 4:
                local_8d8._s_0.X = 0.0;
                local_8d8._s_0.Y = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<UE::Math::TVector2<double>_>
                          (&local_be8,(TVector2<double> *)&local_8d8._s_0);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 5:
                local_798._s_0.X = 0.0;
                local_798._s_0.Y = 0.0;
                local_798._s_0.Z = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<UE::Math::TVector<double>_>
                          (&local_be8,(TVector<double> *)&local_798._s_0);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 6:
                local_768._s_0.Z = dVar6;
                local_768._s_0.W = dVar7;
                local_768._s_0.X = 0.0;
                local_768._s_0.Y = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<UE::Math::TVector4<double>_>
                          (&local_be8,(TVector4<double> *)&local_768._s_0);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 7:
                local_748.X = 0.0;
                local_748.Y = 0.0;
                local_748.Z = 0.0;
                local_748.W = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<UE::Math::TQuat<double>_>(&local_be8,&local_748);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 8:
                local_6e8.Rotation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[0];
                local_6e8.Rotation.XY.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[1];
                local_6e8.Rotation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[2];
                local_6e8.Rotation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float0001.m128_f32[3];
                local_6e8.Translation.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                local_6e8.Translation.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                local_6e8.Translation.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                local_6e8.Translation.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                local_6e8.Translation.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
                local_6e8.Scale3D.ZW.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[2];
                local_6e8.Scale3D.ZW.m128d_f64[1] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[3];
                local_6e8.Scale3D.XY.m128d_f64[1]._0_4_ =
                     SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                local_6e8.Scale3D.XY.m128d_f64[0] =
                     (double)GlobalVectorConstants::Float1110.m128_f32[0];
                local_6e8.Scale3D.XY.m128d_f64[1]._4_4_ =
                     (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<UE::Math::TTransform<double>_>(&local_be8,&local_6e8);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 9:
                local_a80._32_8_ = 0;
                local_a58 = 0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<FString>(&local_be8,(FString *)(local_a80 + 0x20));
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 10:
                local_c5d[0] = false;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<bool>(&local_be8,local_c5d);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 0xb:
                local_780.Pitch = 0.0;
                local_780.Yaw = 0.0;
                local_780.Roll = 0.0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<UE::Math::TRotator<double>_>(&local_be8,&local_780);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 0xc:
                local_ae0.ComparisonIndex.Value = 0;
                local_ae0.Number = 0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<FName>(&local_be8,&local_ae0);
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 0xd:
                local_a40._16_8_ = 0;
                local_a28 = 0;
                local_a20 = 0;
                local_a18 = 0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<FSoftObjectPath>(&local_be8,(FSoftObjectPath *)(local_a40 + 0x10));
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
                break;
              case 0xe:
                local_9d0._0_8_ = 0;
                local_9d0._8_8_ = 0;
                local_9d0._16_8_ = 0;
                local_9d0._24_8_ = 0;
                `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l80::<lambda_1>::
                operator()<FSoftClassPath>(&local_be8,&local_9d0);
              default:
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)
                         ((longlong)FVar36 + 0x50);
              }
            }
          }
          else if (cVar1 == '\x01') {
            if ((local_c38 == (FJsonObject *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("RootJsonObject",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                    ,0x131,L""), bVar12)) {
              pcVar4 = (code *)swi(3);
              uVar13 = (*pcVar4)();
              return (bool)uVar13;
            }
            uVar34 = local_60;
            local_c58.Data = (FScriptContainerElement *)0x0;
            local_c50[0] = 0;
            local_c50[1] = 0;
            if ((int)local_60 < 1) {
              if ((int)local_60 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((ulonglong)local_60);
              }
            }
            else {
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x20,8,local_60,&local_c58,local_c50,local_c50 + 1);
              DefaultConstructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
                        (local_c58.Data + (longlong)iVar15 * 0x20,uVar34);
            }
            dVar7 = _UNK_15061cbc8;
            dVar6 = ___xmm_3ff00000000000000000000000000000;
            if (0 < (int)local_60) {
              local_bf8 = 0;
              pFVar25 = pFVar33;
              do {
                lVar35 = local_bf8;
                uVar39 = (uint)pFVar25;
                uVar41 = ~uVar39 >> 0x1f;
                uVar34 = uVar30;
                if ((int)uVar39 < (int)local_60) {
                  uVar34 = uVar41;
                }
                if ((uVar34 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)&local_568;
                if (local_568.SecondaryData !=
                    (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
                  FVar36 = local_568.SecondaryData;
                }
                pFVar43 = (FPCGAttributePropertySelector *)((longlong)FVar36 + lVar35);
                uVar34 = uVar30;
                if ((int)uVar39 < local_c50[0]) {
                  uVar34 = uVar41;
                }
                if ((uVar34 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                pFVar37 = local_c58.Data + (longlong)(int)uVar39 * 0x20;
                pFVar23 = FPCGAttributePropertySelector::ToString(pFVar43,&local_8c8,false);
                ::FString::operator=((FString *)pFVar37,pFVar23);
                if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
                }
                uVar34 = uVar30;
                if ((int)uVar39 < local_c50[0]) {
                  uVar34 = uVar41;
                }
                if ((uVar34 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                pFStack_c00 = local_c58.Data + (longlong)(int)uVar39 * 0x20 + 0x10;
                local_c08 = pFVar43;
                local_978 = pFVar43;
                pFStack_970 = pFStack_c00;
                switch(*(undefined2 *)(pFVar43[1]._padding_ + 10)) {
                case 0:
                  local_b90[0] = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<float>(&local_c08,local_b90);
                  break;
                case 1:
                  local_aa0 = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<double>(&local_c08,&local_aa0);
                  break;
                case 2:
                  local_b94 = 0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<int>(&local_c08,&local_b94);
                  break;
                case 3:
                  local_a80._8_8_ = 0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<__int64>(&local_c08,(long64 *)(local_a80 + 8));
                  break;
                case 4:
                  local_8b8._s_0.X = 0.0;
                  local_8b8._s_0.Y = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<UE::Math::TVector2<double>_>
                            (&local_c08,(TVector2<double> *)&local_8b8._s_0);
                  break;
                case 5:
                  local_838._s_0.X = 0.0;
                  local_838._s_0.Y = 0.0;
                  local_838._s_0.Z = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<UE::Math::TVector<double>_>
                            (&local_c08,(TVector<double> *)&local_838._s_0);
                  break;
                case 6:
                  local_728._s_0.Z = dVar6;
                  local_728._s_0.W = dVar7;
                  local_728._s_0.X = 0.0;
                  local_728._s_0.Y = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<UE::Math::TVector4<double>_>
                            (&local_c08,(TVector4<double> *)&local_728._s_0);
                  break;
                case 7:
                  local_708.X = 0.0;
                  local_708.Y = 0.0;
                  local_708.Z = 0.0;
                  local_708.W = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<UE::Math::TQuat<double>_>(&local_c08,&local_708);
                  break;
                case 8:
                  local_688.Rotation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[0];
                  local_688.Rotation.XY.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[1];
                  local_688.Rotation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[2];
                  local_688.Rotation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float0001.m128_f32[3];
                  local_688.Translation.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                  local_688.Translation.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
                  local_688.Translation.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
                  local_688.Translation.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                  local_688.Translation.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20
                            );
                  local_688.Scale3D.ZW.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[2];
                  local_688.Scale3D.ZW.m128d_f64[1] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[3];
                  local_688.Scale3D.XY.m128d_f64[1]._0_4_ =
                       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
                  local_688.Scale3D.XY.m128d_f64[0] =
                       (double)GlobalVectorConstants::Float1110.m128_f32[0];
                  local_688.Scale3D.XY.m128d_f64[1]._4_4_ =
                       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20
                            );
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<UE::Math::TTransform<double>_>(&local_c08,&local_688);
                  break;
                case 9:
                  local_a50._0_4_ = 0;
                  local_a50[4] = false;
                  local_a50._5_3_ = 0;
                  local_a50._8_8_ = (UPCGMetadata *)0x0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<FString>(&local_c08,(FString *)local_a50);
                  break;
                case 10:
                  local_c67[0] = (<lambda_1>)0x0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<bool>(&local_c08,(bool *)local_c67);
                  break;
                case 0xb:
                  local_820.Pitch = 0.0;
                  local_820.Yaw = 0.0;
                  local_820.Roll = 0.0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<UE::Math::TRotator<double>_>(&local_c08,&local_820);
                  break;
                case 0xc:
                  local_ac8.ComparisonIndex.Value = 0;
                  local_ac8.Number = 0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<FName>(&local_c08,&local_ac8);
                  break;
                case 0xd:
                  local_a10.AssetPath.PackageName.ComparisonIndex.Value = 0;
                  local_a10.AssetPath.PackageName.Number = 0;
                  local_a10.AssetPath.AssetName = (FName)0x0;
                  local_a10.SubPathString.Data.AllocatorInstance.Data =
                       (FScriptContainerElement *)0x0;
                  local_a10.SubPathString.Data.ArrayNum = 0;
                  local_a10.SubPathString.Data.ArrayMax = 0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<FSoftObjectPath>(&local_c08,&local_a10);
                  break;
                case 0xe:
                  local_9f0._0_8_ = 0;
                  local_9f0._8_8_ = 0;
                  local_9f0._16_8_ = 0;
                  local_9f0._24_8_ = 0;
                  `FPCGExportSelectedAttributesElement::ExecuteInternal'::__l93::<lambda_2>::
                  operator()<FSoftClassPath>(&local_c08,&local_9f0);
                }
                pFVar25 = (FArchiveState *)(ulonglong)(uVar39 + 1);
                local_bf8 = local_bf8 + 0x50;
              } while ((int)(uVar39 + 1) < (int)local_60);
            }
            cVar1 = *(char *)((longlong)&local_c48.DebugPtr[1]._padding_ + 1);
            if (cVar1 == '\0') {
              if ((local_60 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!SourceData.IsEmpty()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                      ,0x15d,L""), bVar12)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              if (((int)local_60 < 1) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
              local_c64 = 0;
              FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)&local_568;
              if (local_568.SecondaryData !=
                  (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
                FVar36 = local_568.SecondaryData;
              }
              iVar15 = (**(code **)(((TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                                      *)((longlong)FVar36 + 0x48))->Ptr->_padding_ + 0x10))();
              local_c18 = (FPCGContext *)(longlong)iVar15;
              if (0 < iVar15) {
                local_bf8 = 0;
                pFVar25 = pFVar33;
                do {
                  lVar35 = local_bf8;
                  uVar34 = (uint)pFVar25;
                  pTVar28 = MakeShared<FJsonObject,1>(&local_8a8);
                  local_af0.Object = pTVar28->Object;
                  local_af0.SharedReferenceCount.ReferenceController =
                       (pTVar28->SharedReferenceCount).ReferenceController;
                  if (local_af0.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_af0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_af0.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_8a8.SharedReferenceCount.ReferenceController)
                  ;
                  lVar10 = local_bf8;
                  if (0 < (int)local_60) {
                    local_c40 = ~uVar34 >> 0x1f;
                    local_bb8 = (longlong)(int)uVar34;
                    local_b80 = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)
                                (local_bb8 << 4);
                    pFVar25 = pFVar33;
                    pFVar38 = pFVar33;
                    do {
                      uVar39 = (uint)pFVar25;
                      if (((int)uVar39 < 0) || (local_c50[0] <= (int)uVar39)) {
                        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("AllSourceJsonValues.IsValidIndex(SourceIndex)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                            ,0x166,L"");
                        if (bVar12) {
                          pcVar4 = (code *)swi(3);
                          uVar13 = (*pcVar4)();
                          return (bool)uVar13;
                        }
                      }
                      uVar34 = uVar30;
                      if ((int)uVar39 < local_c50[0]) {
                        uVar34 = ~uVar39 >> 0x1f;
                      }
                      iVar15 = local_c50[0];
                      if (uVar34 == 0) {
                        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar12) {
                          pcVar4 = (code *)swi(3);
                          uVar13 = (*pcVar4)();
                          return (bool)uVar13;
                        }
                        iVar15 = local_c50[0];
                      }
                      FVar32.Data = local_c58.Data;
                      uVar34 = uVar30;
                      if ((int)uVar39 < iVar15) {
                        uVar34 = ~uVar39 >> 0x1f;
                      }
                      if ((uVar34 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar4 = (code *)swi(3);
                        uVar13 = (*pcVar4)();
                        return (bool)uVar13;
                      }
                      uVar34 = local_c64;
                      pFVar37 = local_c58.Data + (longlong)(int)uVar39 * 0x20;
                      if ((((int)local_c64 < 0) ||
                          (*(int *)(FVar32.Data + 0x18 + (longlong)pFVar38) <= (int)local_c64)) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("SourceValues.IsValidIndex(ElementIndex)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                              ,0x16b,L""), bVar12)) {
                        pcVar4 = (code *)swi(3);
                        uVar13 = (*pcVar4)();
                        return (bool)uVar13;
                      }
                      uVar41 = uVar30;
                      if ((int)uVar34 < *(int *)(FVar32.Data + 0x18 + (longlong)pFVar38)) {
                        uVar41 = local_c40;
                      }
                      if ((uVar41 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar4 = (code *)swi(3);
                        uVar13 = (*pcVar4)();
                        return (bool)uVar13;
                      }
                      lVar35 = *(longlong *)(FVar32.Data + 0x10 + (longlong)pFVar38);
                      if ((*(longlong *)(lVar35 + lVar10) == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar12)) {
                        pcVar4 = (code *)swi(3);
                        uVar13 = (*pcVar4)();
                        return (bool)uVar13;
                      }
                      if (*(int *)(*(longlong *)(lVar35 + lVar10) + 8) != 5) {
                        uVar34 = uVar30;
                        if ((int)local_c64 < *(int *)(FVar32.Data + 0x18 + (longlong)pFVar38)) {
                          uVar34 = local_c40;
                        }
                        if ((uVar34 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar4 = (code *)swi(3);
                          uVar13 = (*pcVar4)();
                          return (bool)uVar13;
                        }
                        lVar35 = *(longlong *)(FVar32.Data + 0x10 + (longlong)pFVar38);
                        if ((*(longlong *)(lVar35 + lVar10) == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar12)) {
                          pcVar4 = (code *)swi(3);
                          uVar13 = (*pcVar4)();
                          return (bool)uVar13;
                        }
                        if (*(int *)(*(longlong *)(lVar35 + lVar10) + 8) != 3) {
                          uVar34 = uVar30;
                          if ((int)local_c64 < *(int *)(FVar32.Data + 0x18 + (longlong)pFVar38)) {
                            uVar34 = local_c40;
                          }
                          if ((uVar34 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar4 = (code *)swi(3);
                            uVar13 = (*pcVar4)();
                            return (bool)uVar13;
                          }
                          lVar35 = *(longlong *)(FVar32.Data + 0x10 + (longlong)pFVar38);
                          if ((*(longlong *)(lVar35 + lVar10) == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar12)) {
                            pcVar4 = (code *)swi(3);
                            uVar13 = (*pcVar4)();
                            return (bool)uVar13;
                          }
                          if (*(int *)(*(longlong *)(lVar35 + lVar10) + 8) != 2) {
                            uVar34 = uVar30;
                            if ((int)local_c64 < *(int *)(FVar32.Data + 0x18 + (longlong)pFVar38)) {
                              uVar34 = local_c40;
                            }
                            if ((uVar34 == 0) &&
                               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar12)) {
                              pcVar4 = (code *)swi(3);
                              uVar13 = (*pcVar4)();
                              return (bool)uVar13;
                            }
                            lVar35 = *(longlong *)(FVar32.Data + 0x10 + (longlong)pFVar38);
                            if ((*(longlong *)(lVar35 + lVar10) == 0) &&
                               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsValid()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar12)) {
                              pcVar4 = (code *)swi(3);
                              uVar13 = (*pcVar4)();
                              return (bool)uVar13;
                            }
                            if ((*(int *)(*(longlong *)(lVar35 + lVar10) + 8) != 6) &&
                               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                   (
                                                  "SourceValues[ElementIndex]->Type == EJson::Array || SourceValues[ElementIndex]->Type == EJson::Number || SourceValues[ElementIndex]->Type == EJson::String || SourceValues[ElementIndex]->Type == EJson::Object"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                                  ,0x170,L""), bVar12)) {
                              pcVar4 = (code *)swi(3);
                              uVar13 = (*pcVar4)();
                              return (bool)uVar13;
                            }
                          }
                        }
                      }
                      if ((local_af0.Object == (FJsonObject *)0x0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar12)) {
                        pcVar4 = (code *)swi(3);
                        uVar13 = (*pcVar4)();
                        return (bool)uVar13;
                      }
                      pFVar8 = local_af0.Object;
                      uVar34 = uVar30;
                      if ((int)local_c64 < *(int *)(FVar32.Data + 0x18 + (longlong)pFVar38)) {
                        uVar34 = local_c40;
                      }
                      if ((uVar34 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar4 = (code *)swi(3);
                        uVar13 = (*pcVar4)();
                        return (bool)uVar13;
                      }
                      FJsonObject::SetField
                                (pFVar8,(FString *)pFVar37,
                                 (TSharedPtr<FJsonValue,1> *)
                                 ((longlong)&local_b80->_padding_ +
                                 *(longlong *)(FVar32.Data + 0x10 + (longlong)pFVar38)));
                      pFVar25 = (FArchiveState *)(ulonglong)(uVar39 + 1);
                      pFVar38 = (FArchiveState *)&(pFVar38->InlineFPLB).OriginalFastPathLoadBuffer;
                      lVar35 = lVar10;
                      uVar34 = local_c64;
                    } while ((int)(uVar39 + 1) < (int)local_60);
                  }
                  if ((local_c38 == (FJsonObject *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  pFVar8 = local_c38;
                  local_948.Object = (FCulture *)0x0;
                  local_948.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  pFVar20 = FText::AsNumber(&local_5f8,uVar34,(FNumberFormattingOptions *)0x0,
                                            &local_948);
                  pFVar21 = FText::AsLocalizable_Advanced_LocText
                                      (&local_898,L"PCGExportSelectedAttributesElement",
                                       L"JsonElementPrefixFormat",L"Element [{0}]");
                  pFVar22 = FTextFormat::FTextFormat(&local_5e8,pFVar21,Default);
                  local_918.Type = Text;
                  FText::FText((FText *)&local_918.TextValue,pFVar20);
                  if ((local_918.TextValue.field0_0x0.TypedValue.TextData.Reference ==
                       (ITextData *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsSet()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                          ,0xbd,
                                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  local_bb0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_bb0.ArrayNum = 1;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,0,&local_bb0.AllocatorInstance,1,&local_bb0.ArrayMax);
                  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                            (local_bb0.AllocatorInstance.Data,&local_918,1);
                  local_968.TextFormatData.Object = (pFVar22->TextFormatData).Object;
                  local_968.TextFormatData.SharedReferenceCount.ReferenceController =
                       (pFVar22->TextFormatData).SharedReferenceCount.ReferenceController;
                  if (local_968.TextFormatData.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_968.TextFormatData.SharedReferenceCount.ReferenceController)->
                    SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_968.TextFormatData.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  FText::Format(&local_958,&local_968,&local_bb0);
                  DestructItems<FFormatArgumentValue,int>
                            ((FFormatArgumentValue *)local_bb0.AllocatorInstance.Data,
                             local_bb0.ArrayNum);
                  if ((FFormatArgumentValue *)local_bb0.AllocatorInstance.Data !=
                      (FFormatArgumentValue *)0x0) {
                    FMemory::Free(local_bb0.AllocatorInstance.Data);
                  }
                  if (local_918.TextValue.field0_0x0.TypedValue.TextData.Reference !=
                      (ITextData *)0x0) {
                    (**(code **)((longlong)
                                 *(ITextData *)
                                  local_918.TextValue.field0_0x0.TypedValue.TextData.Reference +
                                0x10))();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            ((pFVar22->TextFormatData).SharedReferenceCount.ReferenceController);
                  pIVar3 = (pFVar20->TextData).Reference;
                  if (pIVar3 != (ITextData *)0x0) {
                    (**(code **)((longlong)*pIVar3 + 0x10))();
                  }
                  pFVar23 = FText::ToString(&local_958);
                  FJsonObject::SetObjectField(pFVar8,pFVar23,&local_af0);
                  if (local_958.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_958.TextData.Reference + 0x10))();
                  }
                  if (local_898.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_898.TextData.Reference + 0x10))();
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_948.SharedReferenceCount.ReferenceController)
                  ;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_af0.SharedReferenceCount.ReferenceController)
                  ;
                  local_bf8 = lVar35 + 0x10;
                  local_c64 = local_c64 + 1;
                  pFVar25 = (FArchiveState *)(ulonglong)local_c64;
                  local_c18 = (FPCGContext *)&local_c18[-1].StackHandle.field_0x17;
                } while (local_c18 != (FPCGContext *)0x0);
                local_c18 = (FPCGContext *)0x0;
              }
            }
            else {
              if (cVar1 != '\x01') {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                    ,0x188,L"");
                if (bVar12) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
                DestructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
                          ((TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>
                            *)local_c58.Data,local_c50[0]);
                if ((TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *
                    )local_c58.Data !=
                    (TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *
                    )0x0) {
                  FMemory::Free(local_c58.Data);
                }
                goto LAB_1499e6bba;
              }
              pFVar25 = pFVar33;
              if (0 < (int)local_60) {
                do {
                  uVar34 = (uint)pFVar25;
                  if ((((int)uVar34 < 0) || (local_c50[0] <= (int)uVar34)) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("AllSourceJsonValues.IsValidIndex(SourceIndex)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                          ,0x17e,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  uVar39 = uVar30;
                  if ((int)uVar34 < local_c50[0]) {
                    uVar39 = ~uVar34 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  FVar32.Data = local_c58.Data;
                  uVar39 = uVar30;
                  if ((int)uVar34 < local_c50[0]) {
                    uVar39 = ~uVar34 >> 0x1f;
                  }
                  if ((uVar39 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  pFVar37 = local_c58.Data + (longlong)(int)uVar34 * 0x20;
                  if ((local_c38 == (FJsonObject *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  FJsonObject::SetArrayField
                            (local_c38,(FString *)pFVar37,
                             (TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *)
                             (FVar32.Data + (longlong)(int)uVar34 * 0x20 + 0x10));
                  pFVar25 = (FArchiveState *)(ulonglong)(uVar34 + 1);
                } while ((int)(uVar34 + 1) < (int)local_60);
              }
            }
            DestructItems<TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>,int>
                      ((TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_>
                        *)local_c58.Data,local_c50[0]);
            pFVar25 = local_bf0;
            if ((TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *)
                local_c58.Data !=
                (TTuple<FString,TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_> *)0x0
               ) {
              FMemory::Free(local_c58.Data);
              pFVar25 = local_bf0;
            }
          }
          if (pFVar25 == (FArchiveState *)0x0) {
            if (local_c38 == (FJsonObject *)0x0) {
              bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGExportSelectedAttributes.cpp"
                                  ,0x1a7,L"");
              if (bVar12) {
                pcVar4 = (code *)swi(3);
                uVar13 = (*pcVar4)();
                return (bool)uVar13;
              }
            }
            else {
              local_b78 = (wchar_t *)0x0;
              local_b70 = 0;
              pFVar25 = ::operator_new(0x40);
              local_a90.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar33;
              if (pFVar25 != (FArchiveState *)0x0) {
                this_02 = ::operator_new(0xa8);
                pFVar38 = pFVar33;
                if (this_02 != (FArchiveState *)0x0) {
                  local_b08 = (uchar *)0x0;
                  this_02->_padding_ = 0;
                  this_02->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
                  (this_02->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
                  (this_02->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
                  (this_02->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
                  *(undefined8 *)&this_02->field_0x28 = 0;
                  this_02->ArSerializingDefaults = 0;
                  this_02->ArPortFlags = 0;
                  this_02->ArMaxSerializeSize = 0;
                  (this_02->ArUEVer).FileVersionUE4 = 0;
                  (this_02->ArUEVer).FileVersionUE5 = 0;
                  this_02->ArLicenseeUEVer = 0;
                  (this_02->ArEngineVer).Major = 0;
                  (this_02->ArEngineVer).Minor = 0;
                  (this_02->ArEngineVer).Patch = 0;
                  *(undefined2 *)&(this_02->ArEngineVer).field_0x6 = 0;
                  (this_02->ArEngineVer).Changelist = 0;
                  this_02->CustomVersionContainer = (FCustomVersionContainer *)0x0;
                  this_02->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
                  this_02->SavePackageData = (FArchiveSavePackageData *)0x0;
                  this_02->SerializedProperty = (FProperty *)0x0;
                  this_02->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
                  *(undefined8 *)&this_02->bCustomVersionsAreReset = 0;
                  this_02->NextProxy = (FArchiveState *)0x0;
                  FArchiveState::FArchiveState(this_02);
                  this_02[1]._padding_ = 0;
                  this_02->_padding_ =
                       (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
                  this_02[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar25->field_0x28;
                  this_02[1].InlineFPLB.StartFastPathLoadBuffer = local_b08;
                  FArchiveState::SetIsSaving(this_02,true);
                  (**(code **)(this_02->_padding_ + 0x108))(this_02,0);
                  this_02->_padding_ = (longlong)&___7FMemoryWriter__6B_;
                  pFVar38 = this_02;
                }
                pFVar25->ActiveFPLB = (FFastPathLoadBuffer *)pFVar38;
                pFVar25->_padding_ =
                     (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
                pFVar25->ArMaxSerializeSize = (long64)&local_b78;
                (pFVar25->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
                (pFVar25->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
                (pFVar25->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
                *(undefined8 *)&pFVar25->field_0x28 = 0;
                pFVar25->ArSerializingDefaults = 0;
                pFVar25->ArPortFlags = 0;
                local_a90.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar25;
              }
              TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
              TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
                        (&local_938,&local_a90);
              if (local_938.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_938.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_938.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_938.SharedReferenceCount.ReferenceController);
              FVar9.ReferenceController = FStack_c30.ReferenceController;
              if (FStack_c30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FStack_c30.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_c30.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
                LOCK();
                (FStack_c30.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FStack_c30.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_b80 = local_938.Object;
              pTVar29 = ::operator_new(0x38);
              if (pTVar29 == (TReferenceControllerBase<1> *)0x0) {
                local_ab0.Object = ___xmm_00000000000000000000000000000010;
                local_ab0.SharedReferenceCount.ReferenceController = _UNK_150651568;
              }
              else {
                pTVar29->SharedReferenceCount = (atomic<int>)0x1;
                pTVar29->WeakReferenceCount = (atomic<int>)0x1;
                pTVar29->_padding_ =
                     (longlong)
                     &
                     ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
                ;
                pTVar29[1]._padding_ = 0;
                pTVar29[1].SharedReferenceCount = (atomic<int>)0x0;
                pTVar29[1].WeakReferenceCount = (atomic<int>)0x0;
                pFVar25 = ::operator_new(0x30);
                if (pFVar25 == (FArchiveState *)0x0) {
                  pTVar29[2]._padding_ = 0x10;
                  pTVar29[2].SharedReferenceCount = (atomic<int>)0x0;
                  pTVar29[2].WeakReferenceCount = (atomic<int>)0x0;
                }
                else {
                  *(undefined4 *)&pFVar25->ActiveFPLB = 1;
                  *(undefined4 *)((longlong)&pFVar25->ActiveFPLB + 4) = 1;
                  pFVar25->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
                  ;
                  local_888.Object = local_c38;
                  local_888.SharedReferenceCount.ReferenceController =
                       FStack_c30.ReferenceController;
                  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (FVar9.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  FJsonValueObject::FJsonValueObject
                            ((FJsonValueObject *)&pFVar25->InlineFPLB,&local_888);
                  local_c18 = (FPCGContext *)&pFVar25->InlineFPLB;
                  if ((local_c18 == (FPCGContext *)0x0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InObject != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x246,L""), bVar12)) {
                    pcVar4 = (code *)swi(3);
                    uVar13 = (*pcVar4)();
                    return (bool)uVar13;
                  }
                  pTVar29[2]._padding_ = (longlong)local_c18;
                  *(FArchiveState **)&pTVar29[2].SharedReferenceCount = pFVar25;
                  LOCK();
                  *(int *)&pFVar25->ActiveFPLB = *(int *)&pFVar25->ActiveFPLB + 1;
                  UNLOCK();
                  pFVar33 = pFVar25;
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)pFVar33);
                local_ab0.Object = (FElement *)(pTVar29 + 1);
                *(undefined2 *)&pTVar29[3]._padding_ = 0;
                local_ab0.SharedReferenceCount.ReferenceController = pTVar29;
                if ((local_ab0.Object == (FElement *)0x0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InObject != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x246,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  uVar13 = (*pcVar4)();
                  return (bool)uVar13;
                }
              }
              bVar12 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
                       Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                                 (&local_ab0,
                                  (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_b80
                                  ,true);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_ab0.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar9.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (FVar9.ReferenceController);
              if (bVar12) {
                ::FString::FString(&local_928,L".json");
                PCGExportSelectedAttributes::Helpers::String::MergeFileName
                          (&local_ad8,&local_bc8,(FString *)&local_c48.DebugPtr[1]._padding_,
                           &local_928);
                if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_928.Data.AllocatorInstance.Data);
                }
                pIVar24 = IFileManager::Get();
                FVar32.Data = (FScriptContainerElement *)L"";
                if (local_ad8.Data.ArrayNum != 0) {
                  FVar32.Data = local_ad8.Data.AllocatorInstance.Data;
                }
                local_998 = local_b78;
                if ((int)local_b70 != 0) {
                  uVar30 = (int)local_b70 - 1;
                }
                local_868._12_4_ = uStack_98c;
                local_868.Size = uVar30;
                local_868.DataPtr = local_b78;
                uStack_990 = uVar30;
                bVar12 = FFileHelper::SaveStringToFile
                                   (&local_868,(wchar_t *)FVar32.Data,AutoDetect,pIVar24,0);
                if (bVar12) {
                  if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_938.SharedReferenceCount.ReferenceController)
                  ;
                  if (local_b78 != (wchar_t *)0x0) {
                    FMemory::Free(local_b78);
                  }
                  goto LAB_1499e6bba;
                }
                pFVar20 = FText::FromString(&local_5d8,&local_ad8);
                pFVar21 = FText::AsLocalizable_Advanced_LocText
                                    (&local_848,L"PCGExportSelectedAttributesElement",
                                     L"JsonInvalidPath",
                                     L"Could not create a valid Json file with path: {0}");
                pFVar22 = FTextFormat::FTextFormat(&local_5c8,pFVar21,Default);
                pFVar20 = FText::Format<FText>(&local_858,pFVar22,pFVar20);
                PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
                if (local_858.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_858.TextData.Reference + 0x10))();
                }
                if (local_848.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_848.TextData.Reference + 0x10))();
                }
                if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
                }
              }
              else {
                pFVar20 = FText::AsLocalizable_Advanced_LocText
                                    (&local_878,L"PCGExportSelectedAttributesElement",
                                     L"JsonSerializationError",L"Serialization of Json data failed."
                                    );
                PCGLog::LogErrorOnGraph(pFVar20,(FPCGContext *)0x0);
                if (local_878.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_878.TextData.Reference + 0x10))();
                }
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_938.SharedReferenceCount.ReferenceController);
              if (local_b78 != (wchar_t *)0x0) {
                FMemory::Free(local_b78);
              }
            }
          }
          else {
            (**(code **)(pFVar25->_padding_ + 0x210))(pFVar25);
          }
        }
LAB_1499e6bba:
        FVar36 = (ForElementType<PCGExportSelectedAttributes::FAccessorData>)&local_568;
        if (local_568.SecondaryData !=
            (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
          FVar36 = local_568.SecondaryData;
        }
        DestructItems<PCGExportSelectedAttributes::FAccessorData,int>
                  ((FAccessorData *)FVar36,local_60);
        if (local_568.SecondaryData !=
            (ForElementType<PCGExportSelectedAttributes::FAccessorData>)0x0) {
          FMemory::Free((void *)local_568.SecondaryData);
        }
        DestructItems<FPCGAttributePropertySelector,int>
                  ((FPCGAttributePropertySelector *)local_c28.AllocatorInstance.Data,
                   local_c28.ArrayNum);
        if ((FPCGAttributePropertySelector *)local_c28.AllocatorInstance.Data !=
            (FPCGAttributePropertySelector *)0x0) {
          FMemory::Free(local_c28.AllocatorInstance.Data);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_c30.ReferenceController);
  }
  if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
  }
LAB_1499e6c27:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_b68.AllocatorInstance.Data,local_b68.ArrayNum);
  if ((FPCGTaggedData *)local_b68.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_b68.AllocatorInstance.Data);
  }
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// IsCacheable @ 149a003b0

bool __thiscall
FPCGExportSelectedAttributesElement::IsCacheable
          (FPCGExportSelectedAttributesElement *this,UPCGSettings *param_1)

{
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 16

// StaticStruct @ 14a0af3d0

UScriptStruct * __cdecl FRigVMGraphFunctionStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionStore,(UObject *)pUVar1,
                         L"RigVMGraphFunctionStore");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionStore.OuterSingleton;
}

// AddFunction @ 14a0cadd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionStore::AddFunction
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionHeader *param_1,bool param_2)

{
  int *piVar1;
  uint *puVar2;
  FUtf8String *pFVar3;
  FRigVMVariant *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  void *pvVar7;
  bool bVar8;
  uint uVar9;
  FRigVMGraphFunctionData *pFVar10;
  uint uVar11;
  longlong lVar12;
  FRigVMGraphFunctionHeader *pFVar13;
  size_t sVar14;
  undefined1 auStackY_508 [32];
  FRigVMGraphFunctionHeader local_4a8;
  FRigVMFunctionCompilationData local_2b0;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_508;
  pFVar10 = FindFunctionImpl(this,&param_1->LibraryPointer,(bool *)0x0);
  if (pFVar10 == (FRigVMGraphFunctionData *)0x0) {
    FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader(&local_4a8,param_1);
    FRigVMFunctionCompilationData::FRigVMFunctionCompilationData(&local_2b0);
    local_58 = 0xffffffffffffffff;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_50 = 0;
    if (param_2) {
      pFVar13 = (FRigVMGraphFunctionHeader *)(this->PublicFunctions).AllocatorInstance.Data;
      if ((pFVar13 <= &local_4a8) &&
         (&local_4a8 <
          (FRigVMGraphFunctionHeader *)
          ((longlong)pFVar13 + (longlong)(this->PublicFunctions).ArrayMax * 0x460))) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRigVMGraphFunctionData *)(*pcVar6)();
          return pFVar10;
        }
      }
      uVar9 = (this->PublicFunctions).ArrayNum;
      piVar1 = &(this->PublicFunctions).ArrayMax;
      if (uVar9 == *piVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x460,8,(ForAnyElementType *)this,piVar1);
      }
      pFVar5 = (this->PublicFunctions).AllocatorInstance.Data;
      (this->PublicFunctions).ArrayNum = uVar9 + 1;
      pFVar13 = (FRigVMGraphFunctionHeader *)(pFVar5 + (longlong)(int)uVar9 * 0x460);
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader(pFVar13,&local_4a8);
      FRigVMFunctionCompilationData::FRigVMFunctionCompilationData
                ((FRigVMFunctionCompilationData *)(pFVar13 + 1),&local_2b0);
      pvVar7 = local_78;
      pFVar3 = &pFVar13[2].LibraryPointer.HostObject.SubPathString;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &pFVar13[2].LibraryPointer.HostObject.SubPathString.Data.ArrayMax;
      lVar12 = (longlong)(int)local_70;
      pFVar13[2].LibraryPointer.HostObject.SubPathString.Data.ArrayNum = (int)local_70;
      if ((int)local_70 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_70,0,(ForAnyElementType *)pFVar3,(int)local_70,piVar1);
        memcpy((pFVar3->Data).AllocatorInstance.Data,pvVar7,lVar12 * 2);
      }
      pvVar7 = local_68;
      pFVar4 = &pFVar13[2].Variant;
      (pFVar4->Guid).A = 0;
      (pFVar4->Guid).B = 0;
      puVar2 = &pFVar13[2].Variant.Guid.D;
      sVar14 = (size_t)(int)(uint)local_60;
      pFVar13[2].Variant.Guid.C = (uint)local_60;
      if ((uint)local_60 == 0) {
        *puVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(uint)local_60,0,(ForAnyElementType *)pFVar4,(uint)local_60,(int *)puVar2);
        memcpy(*(void **)&pFVar4->Guid,pvVar7,sVar14);
      }
      *(undefined4 *)&pFVar13[2].Variant.Tags.AllocatorInstance.Data = (undefined4)local_58;
      *(undefined4 *)((longlong)&pFVar13[2].Variant.Tags.AllocatorInstance.Data + 4) =
           local_58._4_4_;
      *(undefined1 *)&pFVar13[2].Variant.Tags.ArrayNum = local_50;
      uVar11 = 0;
      if ((int)uVar9 < (this->PublicFunctions).ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRigVMGraphFunctionData *)(*pcVar6)();
          return pFVar10;
        }
      }
      pFVar10 = (FRigVMGraphFunctionData *)
                ((this->PublicFunctions).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x460);
    }
    else {
      pFVar13 = (FRigVMGraphFunctionHeader *)(this->PrivateFunctions).AllocatorInstance.Data;
      if ((pFVar13 <= &local_4a8) &&
         (&local_4a8 <
          (FRigVMGraphFunctionHeader *)
          ((longlong)pFVar13 + (longlong)(this->PrivateFunctions).ArrayMax * 0x460))) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRigVMGraphFunctionData *)(*pcVar6)();
          return pFVar10;
        }
      }
      uVar9 = (this->PrivateFunctions).ArrayNum;
      piVar1 = &(this->PrivateFunctions).ArrayMax;
      if (uVar9 == *piVar1) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x460,8,&(this->PrivateFunctions).AllocatorInstance,piVar1);
      }
      pFVar5 = (this->PrivateFunctions).AllocatorInstance.Data;
      (this->PrivateFunctions).ArrayNum = uVar9 + 1;
      pFVar13 = (FRigVMGraphFunctionHeader *)(pFVar5 + (longlong)(int)uVar9 * 0x460);
      FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader(pFVar13,&local_4a8);
      FRigVMFunctionCompilationData::FRigVMFunctionCompilationData
                ((FRigVMFunctionCompilationData *)(pFVar13 + 1),&local_2b0);
      pvVar7 = local_78;
      pFVar3 = &pFVar13[2].LibraryPointer.HostObject.SubPathString;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      piVar1 = &pFVar13[2].LibraryPointer.HostObject.SubPathString.Data.ArrayMax;
      lVar12 = (longlong)(int)local_70;
      pFVar13[2].LibraryPointer.HostObject.SubPathString.Data.ArrayNum = (int)local_70;
      if ((int)local_70 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,(int)local_70,0,(ForAnyElementType *)pFVar3,(int)local_70,piVar1);
        memcpy((pFVar3->Data).AllocatorInstance.Data,pvVar7,lVar12 * 2);
      }
      pvVar7 = local_68;
      pFVar4 = &pFVar13[2].Variant;
      (pFVar4->Guid).A = 0;
      (pFVar4->Guid).B = 0;
      puVar2 = &pFVar13[2].Variant.Guid.D;
      sVar14 = (size_t)(int)(uint)local_60;
      pFVar13[2].Variant.Guid.C = (uint)local_60;
      if ((uint)local_60 == 0) {
        *puVar2 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,(uint)local_60,0,(ForAnyElementType *)pFVar4,(uint)local_60,(int *)puVar2);
        memcpy(*(void **)&pFVar4->Guid,pvVar7,sVar14);
      }
      *(undefined4 *)&pFVar13[2].Variant.Tags.AllocatorInstance.Data = (undefined4)local_58;
      *(undefined4 *)((longlong)&pFVar13[2].Variant.Tags.AllocatorInstance.Data + 4) =
           local_58._4_4_;
      *(undefined1 *)&pFVar13[2].Variant.Tags.ArrayNum = local_50;
      uVar11 = 0;
      if ((int)uVar9 < (this->PrivateFunctions).ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          pFVar10 = (FRigVMGraphFunctionData *)(*pcVar6)();
          return pFVar10;
        }
      }
      pFVar10 = (FRigVMGraphFunctionData *)
                ((this->PrivateFunctions).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x460);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData(&local_2b0);
    FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_4a8);
  }
  else {
    pFVar10 = (FRigVMGraphFunctionData *)0x0;
  }
  return pFVar10;
}

// ContainsFunction @ 14a0d1270

bool __thiscall
FRigVMGraphFunctionStore::ContainsFunction
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1)

{
  FRigVMGraphFunctionData *pFVar1;
  
  pFVar1 = FindFunctionImpl(this,param_1,(bool *)0x0);
  return pFVar1 != (FRigVMGraphFunctionData *)0x0;
}

// FindFunction @ 14a0d8c40

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionStore::FindFunction
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,bool *param_2)

{
  FRigVMGraphFunctionData *pFVar1;
  FSoftObjectPath FStack_b8;
  FString FStack_98;
  FSoftObjectPath FStack_88;
  <lambda_1> <Stack_68;
  
  FSoftObjectPath::FSoftObjectPath(&FStack_b8,&param_1->LibraryNode_DEPRECATED);
  ::FString::FString(&FStack_98,&param_1->LibraryNodePath);
  FSoftObjectPath::FSoftObjectPath(&FStack_88,&param_1->HostObject);
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)&<Stack_68,&FStack_b8);
  ::FString::FString(&<Stack_68.InLibraryPointer.LibraryNodePath,&FStack_98);
  FSoftObjectPath::FSoftObjectPath(&<Stack_68.InLibraryPointer.HostObject,&FStack_88);
  pFVar1 = TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_1>_>
                     (&this->PublicFunctions,&<Stack_68);
  if (FStack_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
  }
  if (FStack_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (pFVar1 == (FRigVMGraphFunctionData *)0x0) {
    FSoftObjectPath::FSoftObjectPath(&FStack_b8,&param_1->LibraryNode_DEPRECATED);
    ::FString::FString(&FStack_98,&param_1->LibraryNodePath);
    FSoftObjectPath::FSoftObjectPath(&FStack_88,&param_1->HostObject);
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)&<Stack_68,&FStack_b8);
    ::FString::FString(&<Stack_68.InLibraryPointer.LibraryNodePath,&FStack_98);
    FSoftObjectPath::FSoftObjectPath(&<Stack_68.InLibraryPointer.HostObject,&FStack_88);
    pFVar1 = TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_2>_>
                       (&this->PrivateFunctions,(<lambda_2> *)&<Stack_68);
    if (FStack_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.SubPathString.Data.AllocatorInstance.Data);
    }
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    if (FStack_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pFVar1 == (FRigVMGraphFunctionData *)0x0) {
      pFVar1 = (FRigVMGraphFunctionData *)0x0;
    }
    else if (param_2 != (bool *)0x0) {
      *param_2 = false;
    }
  }
  else if (param_2 != (bool *)0x0) {
    *param_2 = true;
  }
  return pFVar1;
}

// FindFunction @ 14a0d8c50

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionStore::FindFunction
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,bool *param_2)

{
  FRigVMGraphFunctionData *pFVar1;
  FSoftObjectPath FStack_b8;
  FString FStack_98;
  FSoftObjectPath FStack_88;
  <lambda_1> <Stack_68;
  
  FSoftObjectPath::FSoftObjectPath(&FStack_b8,&param_1->LibraryNode_DEPRECATED);
  ::FString::FString(&FStack_98,&param_1->LibraryNodePath);
  FSoftObjectPath::FSoftObjectPath(&FStack_88,&param_1->HostObject);
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)&<Stack_68,&FStack_b8);
  ::FString::FString(&<Stack_68.InLibraryPointer.LibraryNodePath,&FStack_98);
  FSoftObjectPath::FSoftObjectPath(&<Stack_68.InLibraryPointer.HostObject,&FStack_88);
  pFVar1 = TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_1>_>
                     (&this->PublicFunctions,&<Stack_68);
  if (FStack_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_88.SubPathString.Data.AllocatorInstance.Data);
  }
  if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
  }
  if (FStack_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (pFVar1 == (FRigVMGraphFunctionData *)0x0) {
    FSoftObjectPath::FSoftObjectPath(&FStack_b8,&param_1->LibraryNode_DEPRECATED);
    ::FString::FString(&FStack_98,&param_1->LibraryNodePath);
    FSoftObjectPath::FSoftObjectPath(&FStack_88,&param_1->HostObject);
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)&<Stack_68,&FStack_b8);
    ::FString::FString(&<Stack_68.InLibraryPointer.LibraryNodePath,&FStack_98);
    FSoftObjectPath::FSoftObjectPath(&<Stack_68.InLibraryPointer.HostObject,&FStack_88);
    pFVar1 = TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_2>_>
                       (&this->PrivateFunctions,(<lambda_2> *)&<Stack_68);
    if (FStack_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_88.SubPathString.Data.AllocatorInstance.Data);
    }
    if (FStack_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_98.Data.AllocatorInstance.Data);
    }
    if (FStack_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_b8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pFVar1 == (FRigVMGraphFunctionData *)0x0) {
      pFVar1 = (FRigVMGraphFunctionData *)0x0;
    }
    else if (param_2 != (bool *)0x0) {
      *param_2 = false;
    }
  }
  else if (param_2 != (bool *)0x0) {
    *param_2 = true;
  }
  return pFVar1;
}

// FindFunctionByName @ 14a0d8c60

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionStore::FindFunctionByName
          (FRigVMGraphFunctionStore *this,FName *param_1,bool *param_2)

{
  FRigVMGraphFunctionData *pFVar1;
  FRigVMGraphFunctionData *pFVar2;
  
  pFVar1 = (FRigVMGraphFunctionData *)(this->PublicFunctions).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PublicFunctions).ArrayNum;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
    if ((pFVar1->Header).Name == *param_1) {
      if (param_2 != (bool *)0x0) {
        *param_2 = true;
      }
      return pFVar1;
    }
  }
  pFVar1 = (FRigVMGraphFunctionData *)(this->PrivateFunctions).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->PrivateFunctions).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FRigVMGraphFunctionData *)0x0;
    }
    if ((pFVar1->Header).Name == *param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  if (param_2 == (bool *)0x0) {
    return pFVar1;
  }
  *param_2 = false;
  return pFVar1;
}

// FindFunctionImpl @ 14a0d9230

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionStore::FindFunctionImpl
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,bool *param_2)

{
  FRigVMGraphFunctionData *pFVar1;
  FSoftObjectPath local_b8;
  FString local_98;
  FSoftObjectPath local_88;
  <lambda_1> local_68;
  
  FSoftObjectPath::FSoftObjectPath(&local_b8,&param_1->LibraryNode_DEPRECATED);
  ::FString::FString(&local_98,&param_1->LibraryNodePath);
  FSoftObjectPath::FSoftObjectPath(&local_88,&param_1->HostObject);
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)&local_68,&local_b8);
  ::FString::FString(&local_68.InLibraryPointer.LibraryNodePath,&local_98);
  FSoftObjectPath::FSoftObjectPath(&local_68.InLibraryPointer.HostObject,&local_88);
  pFVar1 = TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_1>_>
                     (&this->PublicFunctions,&local_68);
  if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (pFVar1 == (FRigVMGraphFunctionData *)0x0) {
    FSoftObjectPath::FSoftObjectPath(&local_b8,&param_1->LibraryNode_DEPRECATED);
    ::FString::FString(&local_98,&param_1->LibraryNodePath);
    FSoftObjectPath::FSoftObjectPath(&local_88,&param_1->HostObject);
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)&local_68,&local_b8);
    ::FString::FString(&local_68.InLibraryPointer.LibraryNodePath,&local_98);
    FSoftObjectPath::FSoftObjectPath(&local_68.InLibraryPointer.HostObject,&local_88);
    pFVar1 = TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>::
             FindByPredicate<_FRigVMGraphFunctionStore::FindFunctionImpl_::__l2::<lambda_2>_>
                       (&this->PrivateFunctions,(<lambda_2> *)&local_68);
    if (local_88.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.SubPathString.Data.AllocatorInstance.Data);
    }
    if (pFVar1 == (FRigVMGraphFunctionData *)0x0) {
      pFVar1 = (FRigVMGraphFunctionData *)0x0;
    }
    else if (param_2 != (bool *)0x0) {
      *param_2 = false;
    }
  }
  else if (param_2 != (bool *)0x0) {
    *param_2 = true;
  }
  return pFVar1;
}

// IsFunctionPublic @ 14a0f9780

bool __thiscall
FRigVMGraphFunctionStore::IsFunctionPublic
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1)

{
  FRigVMGraphFunctionData *pFVar1;
  undefined1 uVar2;
  bool local_res18 [16];
  
  pFVar1 = FindFunctionImpl(this,param_1,local_res18);
  uVar2 = 0;
  if (pFVar1 != (FRigVMGraphFunctionData *)0x0) {
    uVar2 = local_res18[0];
  }
  return (bool)uVar2;
}

// MarkFunctionAsPublic @ 14a0fd2b0

bool __thiscall
FRigVMGraphFunctionStore::MarkFunctionAsPublic
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,bool param_2)

{
  int *piVar1;
  FRigVMGraphFunctionIdentifier *pFVar2;
  FRigVMGraphFunctionData *pFVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FRigVMGraphFunctionIdentifier *this_00;
  FRigVMGraphFunctionHeader *this_01;
  uint uVar13;
  FRigVMGraphFunctionStore *pFVar14;
  FRigVMGraphFunctionData *pFVar15;
  int iVar16;
  FRigVMGraphFunctionIdentifier local_88;
  
  pFVar14 = (FRigVMGraphFunctionStore *)&this->PrivateFunctions;
  if (!param_2) {
    pFVar14 = this;
    this = (FRigVMGraphFunctionStore *)&this->PrivateFunctions;
  }
  FSoftObjectPath::FSoftObjectPath
            (&local_88.LibraryNode_DEPRECATED,&param_1->LibraryNode_DEPRECATED);
  ::FString::FString(&local_88.LibraryNodePath,&param_1->LibraryNodePath);
  FSoftObjectPath::FSoftObjectPath(&local_88.HostObject,&param_1->HostObject);
  pFVar2 = (FRigVMGraphFunctionIdentifier *)(pFVar14->PublicFunctions).AllocatorInstance.Data;
  iVar16 = (pFVar14->PublicFunctions).ArrayNum;
  this_00 = pFVar2;
  while( true ) {
    if (this_00 == pFVar2 + (longlong)iVar16 * 0xe) {
      if (local_88.HostObject.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.HostObject.SubPathString.Data.AllocatorInstance.Data);
      }
      if (local_88.LibraryNodePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.LibraryNodePath.Data.AllocatorInstance.Data);
      }
      if (local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data);
      }
      return false;
    }
    bVar7 = FRigVMGraphFunctionIdentifier::operator==(this_00,&local_88);
    if (bVar7) break;
    this_00 = this_00 + 0xe;
  }
  uVar11 = (uint)(((longlong)this_00 - (longlong)pFVar2) / 0x460);
  if (local_88.HostObject.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.HostObject.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_88.LibraryNodePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.LibraryNodePath.Data.AllocatorInstance.Data);
  }
  if (local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data);
  }
  if (uVar11 == 0xffffffff) {
    return false;
  }
  uVar13 = ~uVar11 >> 0x1f;
  uVar9 = 0;
  if ((int)uVar11 < (pFVar14->PublicFunctions).ArrayNum) {
    uVar9 = uVar13;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar15 = (FRigVMGraphFunctionData *)
            ((pFVar14->PublicFunctions).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x460);
  pFVar3 = (FRigVMGraphFunctionData *)(this->PublicFunctions).AllocatorInstance.Data;
  if (((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (this->PublicFunctions).ArrayMax)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = (this->PublicFunctions).ArrayNum;
  piVar1 = &(this->PublicFunctions).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x460,8,(ForAnyElementType *)this,piVar1);
  }
  lVar12 = (longlong)(int)uVar9 * 0x460;
  (this->PublicFunctions).ArrayNum = uVar9 + 1;
  FRigVMGraphFunctionData::FRigVMGraphFunctionData
            ((FRigVMGraphFunctionData *)((this->PublicFunctions).AllocatorInstance.Data + lVar12),
             pFVar15);
  uVar10 = 0;
  if ((int)uVar11 < (pFVar14->PublicFunctions).ArrayNum) {
    uVar10 = uVar13;
  }
  if ((uVar10 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  this_01 = (FRigVMGraphFunctionHeader *)
            ((pFVar14->PublicFunctions).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x460);
  pvVar4 = *(void **)&this_01[2].Variant.Guid;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pFVar5 = this_01[2].LibraryPointer.HostObject.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData
            ((FRigVMFunctionCompilationData *)(this_01 + 1));
  FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(this_01);
  iVar16 = (pFVar14->PublicFunctions).ArrayNum + ~uVar11;
  if (iVar16 != 0) {
    memmove(this_01,&this_01[2].Name,(longlong)iVar16 * 0x460);
  }
  piVar1 = &(pFVar14->PublicFunctions).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x460,8,(ForAnyElementType *)pFVar14,(pFVar14->PublicFunctions).ArrayNum,
             &(pFVar14->PublicFunctions).ArrayMax);
  uVar11 = 0;
  if ((int)uVar9 < (this->PublicFunctions).ArrayNum) {
    uVar11 = ~uVar9 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (!param_2) {
    pFVar5 = (this->PublicFunctions).AllocatorInstance.Data;
    ::FString::Empty((FString *)(pFVar5 + lVar12 + 0x430));
    *(undefined4 *)(pFVar5 + lVar12 + 0x448) = 0;
    if (*(int *)(pFVar5 + lVar12 + 0x44c) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(pFVar5 + lVar12 + 0x440),0,
                 (int *)(pFVar5 + lVar12 + 0x44c));
    }
    pFVar5[lVar12 + 0x458] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar5 + lVar12 + 0x450) = 0xffffffffffffffff;
  }
  return true;
}

// RemoveAllCompilationData @ 14a107960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FRigVMGraphFunctionStore::RemoveAllCompilationData(FRigVMGraphFunctionStore *this)

{
  int iVar1;
  FRigVMFunctionCompilationData *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStack_288 [32];
  undefined1 local_268 [16];
  FRigVMFunctionCompilationData local_258;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_288;
  iVar1 = (this->PublicFunctions).ArrayNum;
  pFVar3 = (this->PublicFunctions).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x460;
  while( true ) {
    if ((this->PublicFunctions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMGraphFunctionData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_268);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = FRigVMFunctionCompilationData::FRigVMFunctionCompilationData(&local_258);
    FRigVMFunctionCompilationData::operator=
              ((FRigVMFunctionCompilationData *)(pFVar3 + 0x1f8),pFVar2);
    FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData(&local_258);
    pFVar3 = pFVar3 + 0x460;
  }
  iVar1 = (this->PrivateFunctions).ArrayNum;
  pFVar3 = (this->PrivateFunctions).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x460;
  while( true ) {
    if ((this->PrivateFunctions).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMGraphFunctionData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_268);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = FRigVMFunctionCompilationData::FRigVMFunctionCompilationData(&local_258);
    FRigVMFunctionCompilationData::operator=
              ((FRigVMFunctionCompilationData *)(pFVar3 + 0x1f8),pFVar2);
    FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData(&local_258);
    pFVar3 = pFVar3 + 0x460;
  }
  return true;
}

// RemoveFunction @ 14a107e40

bool __thiscall
FRigVMGraphFunctionStore::RemoveFunction
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,bool *param_2)

{
  FRigVMGraphFunctionIdentifier *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  FRigVMGraphFunctionIdentifier local_88;
  
  FSoftObjectPath::FSoftObjectPath
            (&local_88.LibraryNode_DEPRECATED,&param_1->LibraryNode_DEPRECATED);
  ::FString::FString(&local_88.LibraryNodePath,&param_1->LibraryNodePath);
  FSoftObjectPath::FSoftObjectPath(&local_88.HostObject,&param_1->HostObject);
  iVar8 = (this->PublicFunctions).ArrayNum;
  iVar10 = 0;
  iVar9 = 0;
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    pFVar1 = (FRigVMGraphFunctionIdentifier *)(this->PublicFunctions).AllocatorInstance.Data;
    iVar7 = 0;
    bVar3 = FRigVMGraphFunctionIdentifier::operator==(pFVar1,&local_88);
    bVar3 = !bVar3;
    iVar5 = 0;
    do {
      iVar2 = iVar5;
      do {
        iVar2 = iVar2 + 1;
        if (iVar8 <= iVar2) break;
        bVar4 = FRigVMGraphFunctionIdentifier::operator==(pFVar1 + (longlong)iVar2 * 0xe,&local_88);
      } while (bVar3 == !bVar4);
      iVar6 = iVar2 - iVar5;
      if (bVar3 == false) {
        DestructItems<FRigVMGraphFunctionData,int>
                  ((FRigVMGraphFunctionData *)(pFVar1 + (longlong)iVar5 * 0xe),iVar6);
      }
      else {
        if (iVar7 != iVar5) {
          memmove(pFVar1 + (longlong)iVar7 * 0xe,pFVar1 + (longlong)iVar5 * 0xe,
                  (longlong)iVar6 * 0x460);
        }
        iVar7 = iVar7 + iVar6;
      }
      bVar3 = (bool)(bVar3 ^ 1);
      iVar5 = iVar2;
    } while (iVar2 < iVar8);
    iVar8 = iVar8 - iVar7;
    (this->PublicFunctions).ArrayNum = iVar7;
  }
  if (local_88.HostObject.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.HostObject.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_88.LibraryNodePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.LibraryNodePath.Data.AllocatorInstance.Data);
  }
  if (local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((0 < iVar8) && (param_2 != (bool *)0x0)) {
    *param_2 = true;
  }
  if (iVar8 == 0) {
    FSoftObjectPath::FSoftObjectPath
              (&local_88.LibraryNode_DEPRECATED,&param_1->LibraryNode_DEPRECATED);
    ::FString::FString(&local_88.LibraryNodePath,&param_1->LibraryNodePath);
    FSoftObjectPath::FSoftObjectPath(&local_88.HostObject,&param_1->HostObject);
    iVar8 = (this->PrivateFunctions).ArrayNum;
    if (iVar8 != 0) {
      pFVar1 = (FRigVMGraphFunctionIdentifier *)(this->PrivateFunctions).AllocatorInstance.Data;
      bVar3 = FRigVMGraphFunctionIdentifier::operator==(pFVar1,&local_88);
      bVar3 = !bVar3;
      iVar9 = 0;
      do {
        iVar5 = iVar9;
        do {
          iVar5 = iVar5 + 1;
          if (iVar8 <= iVar5) break;
          bVar4 = FRigVMGraphFunctionIdentifier::operator==
                            (pFVar1 + (longlong)iVar5 * 0xe,&local_88);
        } while (bVar3 == !bVar4);
        iVar7 = iVar5 - iVar9;
        if (bVar3 == false) {
          DestructItems<FRigVMGraphFunctionData,int>
                    ((FRigVMGraphFunctionData *)(pFVar1 + (longlong)iVar9 * 0xe),iVar7);
        }
        else {
          if (iVar10 != iVar9) {
            memmove(pFVar1 + (longlong)iVar10 * 0xe,pFVar1 + (longlong)iVar9 * 0xe,
                    (longlong)iVar7 * 0x460);
          }
          iVar10 = iVar10 + iVar7;
        }
        bVar3 = (bool)(bVar3 ^ 1);
        iVar9 = iVar5;
      } while (iVar5 < iVar8);
      (this->PrivateFunctions).ArrayNum = iVar10;
      iVar9 = iVar8 - iVar10;
    }
    if (local_88.HostObject.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.HostObject.SubPathString.Data.AllocatorInstance.Data);
    }
    if (local_88.LibraryNodePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.LibraryNodePath.Data.AllocatorInstance.Data);
    }
    if (local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.LibraryNode_DEPRECATED.SubPathString.Data.AllocatorInstance.Data);
    }
    iVar8 = iVar9;
    if ((0 < iVar9) && (param_2 != (bool *)0x0)) {
      *param_2 = false;
    }
  }
  return 0 < iVar8;
}

// RemoveFunctionCompilationData @ 14a108100

bool __thiscall
FRigVMGraphFunctionStore::RemoveFunctionCompilationData
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1)

{
  FRigVMGraphFunctionData *this_00;
  
  this_00 = FindFunctionImpl(this,param_1,(bool *)0x0);
  if (this_00 != (FRigVMGraphFunctionData *)0x0) {
    FRigVMGraphFunctionData::ClearCompilationData(this_00);
    return true;
  }
  return false;
}

// UpdateDependencies @ 14a114d70

bool __thiscall
FRigVMGraphFunctionStore::UpdateDependencies
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,
          TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
          *param_2)

{
  TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  FRigVMGraphFunctionData *pFVar9;
  longlong lVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  FRigVMGraphFunctionIdentifier *pFVar14;
  undefined1 *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 local_res20 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pFVar9 = FindFunctionImpl(this,param_1,(bool *)0x0);
  if (pFVar9 == (FRigVMGraphFunctionData *)0x0) {
LAB_14a115065:
    bVar4 = false;
  }
  else {
    this_00 = &(pFVar9->Header).Dependencies;
    iVar17 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    if (*(int *)&(pFVar9->Header).Dependencies.field_0x8 -
        *(int *)&(pFVar9->Header).Dependencies.field_0x34 == iVar17) {
      iVar2 = *(int *)&param_2->field_0x28;
      iVar6 = 0;
      uVar7 = 1;
      iVar8 = iVar6;
      iVar16 = iVar6;
      if (iVar2 != 0) {
        puVar12 = *(uint **)&param_2->field_0x20;
        if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
          puVar12 = (uint *)&param_2->field_0x10;
        }
        uVar13 = *puVar12;
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar6;
          iVar16 = iVar16 + 0x20;
          iVar6 = iVar6 + 1;
          iVar8 = iVar2;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_14a114e51;
          uVar13 = puVar12[lVar10 + 1];
        }
        uVar7 = -uVar13 & uVar13;
        uVar1 = (ulonglong)uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar8 = (int)lVar10 + -1 + iVar16;
        if (iVar2 < iVar8) {
          iVar8 = iVar2;
        }
      }
LAB_14a114e51:
      TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10;
      uVar13 = *(uint *)&param_2->field_0x28;
      uVar18 = uVar13 & 0xffffffe0;
      TStack_50._padding_ = CONCAT44(uVar7,iVar6);
      TStack_50.CurrentBitIndex = iVar8;
      TStack_50.UnvisitedBitMask = 0xffffffff;
      TStack_50._28_4_ = iVar8;
      TStack_50.BaseBitIndex = iVar16;
      uStack_30 = CONCAT44(uStack_5c,iVar17);
      iVar17 = (int)uVar13 >> 5;
      if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = *(uint *)&param_2->field_0x28;
      if (uVar13 != uVar7) {
        puVar15 = *(undefined1 **)&param_2->field_0x20;
        if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
          puVar15 = &param_2->field_0x10;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar13 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14a114f4b;
          uVar13 = *(uint *)(puVar15 + lVar10 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar13 = (int)lVar10 + -1 + uVar18;
        if ((int)uVar7 < (int)uVar13) {
          uVar13 = uVar7;
        }
      }
LAB_14a114f4b:
      while( true ) {
        if (*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34 != (int)uStack_30) {
          `TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((TStack_50.CurrentBitIndex == uVar13) &&
           (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10))
        goto LAB_14a115065;
        pFVar14 = (FRigVMGraphFunctionIdentifier *)
                  ((longlong)TStack_50.CurrentBitIndex * 0x60 + *(longlong *)param_2);
        uVar7 = ::GetTypeHash(pFVar14);
        if (*(int *)&(pFVar9->Header).Dependencies.field_0x8 ==
            *(int *)&(pFVar9->Header).Dependencies.field_0x34) break;
        puVar15 = *(undefined1 **)&(pFVar9->Header).Dependencies.field_0x40;
        puVar11 = &(pFVar9->Header).Dependencies.field_0x38;
        if (puVar15 != (undefined1 *)0x0) {
          puVar11 = puVar15;
        }
        iVar17 = *(int *)(puVar11 +
                         (ulonglong)(*(int *)&(pFVar9->Header).Dependencies.field_0x48 - 1U & uVar7)
                         * 4);
        while( true ) {
          if (iVar17 == -1) goto LAB_14a115008;
          lVar10 = (longlong)iVar17 * 0x60;
          bVar4 = FRigVMGraphFunctionIdentifier::operator==
                            ((FRigVMGraphFunctionIdentifier *)(*(longlong *)this_00 + lVar10),
                             pFVar14);
          if (bVar4) break;
          iVar17 = *(int *)(lVar10 + 0x58 + *(longlong *)this_00);
        }
        puVar12 = (uint *)(*(longlong *)this_00 + lVar10 + 0x50);
        if (*(longlong *)this_00 + lVar10 == 0) {
          puVar12 = (uint *)0x0;
        }
        if ((puVar12 == (uint *)0x0) ||
           (*puVar12 !=
            pFVar14[1].LibraryNode_DEPRECATED.AssetPath.PackageName.ComparisonIndex.Value)) break;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      }
    }
LAB_14a115008:
    if (this_00 != param_2) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(pFVar9->Header).Dependencies.field_0x38,
                 (int *)&(pFVar9->Header).Dependencies.field_0x48,
                 (ForElementType<FSetElementId> *)&param_2->field_0x38,*(int *)&param_2->field_0x48)
      ;
      TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,
                  (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)param_2);
    }
    bVar4 = true;
  }
  return bVar4;
}

// UpdateExternalVariables @ 14a115090

bool __thiscall
FRigVMGraphFunctionStore::UpdateExternalVariables
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  longlong lVar2;
  FRigVMGraphFunctionData *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res20 [8];
  int iStack_34;
  
  pFVar3 = FindFunctionImpl(this,param_1,(bool *)0x0);
  if (pFVar3 != (FRigVMGraphFunctionData *)0x0) {
    iVar1 = param_2->ArrayNum;
    this_00 = &(pFVar3->Header).ExternalVariables;
    if ((pFVar3->Header).ExternalVariables.ArrayNum != iVar1) {
LAB_14a115183:
      TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>::operator=(this_00,param_2);
      pFVar6 = (param_2->AllocatorInstance).Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      return true;
    }
    pFVar6 = (param_2->AllocatorInstance).Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FRigVMExternalVariable,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar6 == pFVar7) break;
      pFVar4 = (this_00->AllocatorInstance).Data;
      lVar2 = *(longlong *)(pFVar6 + 0x20);
      pFVar5 = pFVar4 + (longlong)(pFVar3->Header).ExternalVariables.ArrayNum * 0x30;
      iStack_34 = (int)((ulonglong)lVar2 >> 0x20);
      while( true ) {
        if (pFVar4 == pFVar5) goto LAB_14a115183;
        if ((((*(longlong *)pFVar6 == *(longlong *)pFVar4) &&
             (*(longlong *)(pFVar6 + 0x10) == *(longlong *)(pFVar4 + 0x10))) &&
            (*(longlong *)(pFVar6 + 0x18) == *(longlong *)(pFVar4 + 0x18))) &&
           (((SUB81(lVar2,0) == pFVar4[0x20] && (SUB81((ulonglong)lVar2 >> 8,0) == pFVar4[0x21])) &&
            ((SUB81((ulonglong)lVar2 >> 0x10,0) == pFVar4[0x22] &&
             (iStack_34 == *(int *)(pFVar4 + 0x24))))))) break;
        pFVar4 = pFVar4 + 0x30;
      }
      pFVar6 = pFVar6 + 0x30;
    }
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return false;
}

// UpdateFunctionCompilationData @ 14a1151f0

bool __thiscall
FRigVMGraphFunctionStore::UpdateFunctionCompilationData
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionIdentifier *param_1,
          FRigVMFunctionCompilationData *param_2)

{
  FRigVMGraphFunctionData *pFVar1;
  
  pFVar1 = FindFunctionImpl(this,param_1,(bool *)0x0);
  if ((pFVar1 != (FRigVMGraphFunctionData *)0x0) &&
     ((pFVar1->CompilationData).Hash != param_2->Hash)) {
    FRigVMFunctionCompilationData::operator=(&pFVar1->CompilationData,param_2);
    return true;
  }
  return false;
}

// UpdateFunctionInterface @ 14a115240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionStore::UpdateFunctionInterface
          (FRigVMGraphFunctionStore *this,FRigVMGraphFunctionHeader *param_1)

{
  TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
  *pTVar1;
  FScriptContainerElement *_Src;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FRigVMGraphFunctionData *pFVar6;
  void *_Dst;
  ForElementType<FSetElementId> _Src_00;
  longlong lVar7;
  uint uVar8;
  undefined1 auStackY_e8 [32];
  bool local_a8 [8];
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> local_a0;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  uint local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar6 = FindFunctionImpl(this,&param_1->LibraryPointer,(bool *)0x0);
  if (pFVar6 == (FRigVMGraphFunctionData *)0x0) {
    return (FRigVMGraphFunctionData *)0x0;
  }
  local_5c = 0x80;
  pTVar1 = &(pFVar6->Header).Dependencies;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_40[0] = 0;
  if ((TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
       *)local_88 != pTVar1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&local_50,(int *)local_40,
               (ForElementType<FSetElementId> *)&(pFVar6->Header).Dependencies.field_0x38,
               *(int *)&(pFVar6->Header).Dependencies.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_88,
                (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pTVar1);
  }
  local_a0.ArrayNum = (pFVar6->Header).ExternalVariables.ArrayNum;
  lVar7 = (longlong)local_a0.ArrayNum;
  _Src = (pFVar6->Header).ExternalVariables.AllocatorInstance.Data;
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a0.ArrayNum == 0) {
    local_a0.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,local_a0.ArrayNum,0,&local_a0.AllocatorInstance,local_a0.ArrayNum,
               &local_a0.ArrayMax);
    memcpy(local_a0.AllocatorInstance.Data,_Src,lVar7 * 0x30);
  }
  bVar5 = RemoveFunction(this,&param_1->LibraryPointer,local_a8);
  if ((!bVar5) ||
     (pFVar6 = AddFunction(this,param_1,local_a8[0]), pFVar6 == (FRigVMGraphFunctionData *)0x0)) {
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
    local_40[0] = 0;
    if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_50.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,0,local_88._8_4_);
    iVar2 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ == (FScriptContainerElement *)0x0) {
      return (FRigVMGraphFunctionData *)0x0;
    }
    FMemory::Free((void *)local_88._0_8_);
    return (FRigVMGraphFunctionData *)0x0;
  }
  uVar3 = (param_1->Variant).Guid.B;
  uVar8 = (param_1->Variant).Guid.C;
  uVar4 = (param_1->Variant).Guid.D;
  (pFVar6->Header).Variant.Guid.A = (param_1->Variant).Guid.A;
  (pFVar6->Header).Variant.Guid.B = uVar3;
  (pFVar6->Header).Variant.Guid.C = uVar8;
  (pFVar6->Header).Variant.Guid.D = uVar4;
  TArray<FRigVMTag,TSizedDefaultAllocator<32>_>::operator=
            (&(pFVar6->Header).Variant.Tags,&(param_1->Variant).Tags);
  uVar3 = local_40[0];
  pTVar1 = &(pFVar6->Header).Dependencies;
  if (pTVar1 == (TMap<FRigVMGraphFunctionIdentifier,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigVMGraphFunctionIdentifier,unsigned_int,0>_>
                 *)local_88) goto LAB_14a11540d;
  lVar7 = (longlong)(int)local_40[0];
  uVar8 = local_40[0];
  if (local_40[0] < 2) {
    if (*(longlong *)&(pFVar6->Header).Dependencies.field_0x40 != 0) {
      uVar8 = 0;
      goto LAB_14a1153ba;
    }
  }
  else {
LAB_14a1153ba:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(pFVar6->Header).Dependencies.field_0x40,0,uVar8,4);
  }
  _Dst = *(void **)&(pFVar6->Header).Dependencies.field_0x40;
  _Src_00 = (ForElementType<FSetElementId>)&local_50;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    _Src_00 = local_50.SecondaryData;
  }
  if (uVar3 != 0) {
    if (_Dst == (void *)0x0) {
      _Dst = &(pFVar6->Header).Dependencies.field_0x38;
    }
    memcpy(_Dst,(void *)_Src_00,lVar7 << 2);
  }
  *(uint *)&(pFVar6->Header).Dependencies.field_0x48 = uVar3;
  TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)pTVar1,
              (TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_88);
LAB_14a11540d:
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_>::operator=
            (&(pFVar6->Header).ExternalVariables,&local_a0);
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  local_40[0] = 0;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FRigVMGraphFunctionIdentifier,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
    return pFVar6;
  }
  return pFVar6;
}


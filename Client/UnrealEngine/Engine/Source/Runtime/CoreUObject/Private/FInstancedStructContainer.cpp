// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 28

// StaticStruct @ 141f51540

UScriptStruct * __cdecl FInstancedStructContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStructContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FInstancedStructContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStructContainer,(UObject *)pUVar1,
                         L"InstancedStructContainer");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedStructContainer.OuterSingleton;
}

// FInstancedStructContainer @ 141f65c90

FInstancedStructContainer * __thiscall
FInstancedStructContainer::FInstancedStructContainer
          (FInstancedStructContainer *this,FInstancedStructContainer *param_1)

{
  this->Memory = param_1->Memory;
  this->AllocatedSize = param_1->AllocatedSize;
  this->NumItems = param_1->NumItems;
  param_1->Memory = (uchar *)0x0;
  param_1->AllocatedSize = 0;
  param_1->NumItems = 0;
  return this;
}

// FInstancedStructContainer @ 141f65cc0

FInstancedStructContainer * __thiscall
FInstancedStructContainer::FInstancedStructContainer
          (FInstancedStructContainer *this,FInstancedStructContainer *param_1)

{
  this->Memory = (uchar *)0x0;
  this->AllocatedSize = 0;
  this->NumItems = 0;
  Append(this,param_1);
  return this;
}

// FInstancedStructContainer @ 141f65cf0

FInstancedStructContainer * __thiscall
FInstancedStructContainer::FInstancedStructContainer(FInstancedStructContainer *this)

{
  this->Memory = (uchar *)0x0;
  this->AllocatedSize = 0;
  this->NumItems = 0;
  return this;
}

// operator= @ 141f695c0

FInstancedStructContainer * __thiscall
FInstancedStructContainer::operator=
          (FInstancedStructContainer *this,FInstancedStructContainer *param_1)

{
  if (this != param_1) {
    Reset(this);
    FMemory::Free(this->Memory);
    this->Memory = (uchar *)0x0;
    this->AllocatedSize = 0;
    this->Memory = param_1->Memory;
    this->AllocatedSize = param_1->AllocatedSize;
    this->NumItems = param_1->NumItems;
    param_1->Memory = (uchar *)0x0;
    param_1->AllocatedSize = 0;
    param_1->NumItems = 0;
  }
  return this;
}

// operator= @ 141f69620

FInstancedStructContainer * __thiscall
FInstancedStructContainer::operator=
          (FInstancedStructContainer *this,FInstancedStructContainer *param_1)

{
  if (this != param_1) {
    Reset(this);
    Append(this,param_1);
  }
  return this;
}

// operator= @ 141f69660

FInstancedStructContainer * __thiscall
FInstancedStructContainer::operator=
          (FInstancedStructContainer *this,TArrayView<FConstStructView_const_,int> *param_1)

{
  TArrayView<FConstStructView_const_,int> local_18;
  
  Reset(this);
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  InsertAt(this,0,&local_18);
  return this;
}

// operator= @ 141f696a0

FInstancedStructContainer * __thiscall
FInstancedStructContainer::operator=
          (FInstancedStructContainer *this,TArrayView<FInstancedStruct_const_,int> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInstancedStructContainer *pFVar5;
  FInstancedStruct *pFVar6;
  FInstancedStruct *pFVar7;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_30;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FConstStructView_const_,int> local_18;
  
  Reset(this);
  uVar1 = param_1->ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iStack_3c = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_48,0,&iStack_3c);
  }
  pFVar7 = param_1->DataPtr;
  pFVar6 = pFVar7 + (int)uVar1;
  iVar4 = local_40;
  while( true ) {
    local_40 = iVar4;
    if (pFVar7 == pFVar6) {
      local_28 = (TObjectPtr<UScriptStruct_const_>_u_0 *)local_48.Data;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FInstancedStructContainer *)(*pcVar2)();
        return pFVar5;
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar4;
      local_18.DataPtr = (FConstStructView *)local_28;
      iStack_20 = iVar4;
      InsertAt(this,0,&local_18);
      if ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_48.Data !=
          (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return this;
    }
    local_38 = (pFVar7->ScriptStruct).field0_0x0;
    TStack_30 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar7->StructMemory;
    if (((local_48.Data <= &local_38) &&
        (&local_38 <
         (TObjectPtr<UScriptStruct_const_>_u_0 *)
         ((longlong)local_48.Data + (longlong)iStack_3c * 2 * 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    if (local_40 == iStack_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_48,&iStack_3c);
    }
    iVar4 = local_40 + 1;
    pFVar7 = pFVar7 + 1;
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)(local_48.Data + (longlong)local_40 * 0x10) = local_38;
    ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_48.Data + (longlong)local_40 * 0x10))[1] =
         TStack_30;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FInstancedStructContainer *)(*pcVar2)();
  return pFVar5;
}

// operator= @ 141f69870

FInstancedStructContainer * __thiscall
FInstancedStructContainer::operator=
          (FInstancedStructContainer *this,TArrayView<FStructView_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FInstancedStructContainer *pFVar4;
  FStructView *pFVar5;
  FStructView *pFVar6;
  ForAnyElementType local_78;
  int local_70;
  int iStack_6c;
  FConstStructView local_68;
  FConstStructView *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FConstStructView_const_,int> local_48;
  FStructView *local_38;
  ulonglong uStack_30;
  UScriptStruct *local_28;
  uchar *puStack_20;
  
  Reset(this);
  pFVar6 = param_1->DataPtr;
  uStack_30 = *(ulonglong *)&param_1->ArrayNum;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  iStack_6c = 0;
  iVar3 = (int)uStack_30;
  local_38 = pFVar6;
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uStack_30 & 0xffffffff);
  }
  if (0 < iVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,&local_78,0,&iStack_6c);
  }
  pFVar5 = pFVar6 + iVar3;
  iVar3 = local_70;
  while( true ) {
    local_70 = iVar3;
    if (pFVar6 == pFVar5) {
      local_58 = (FConstStructView *)local_78.Data;
      if ((iVar3 < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FInstancedStructContainer *)(*pcVar1)();
        return pFVar4;
      }
      local_48._12_4_ = uStack_4c;
      local_48.ArrayNum = iVar3;
      local_48.DataPtr = local_58;
      iStack_50 = iVar3;
      InsertAt(this,0,&local_48);
      if ((FConstStructView *)local_78.Data != (FConstStructView *)0x0) {
        FMemory::Free(local_78.Data);
      }
      return this;
    }
    local_68.ScriptStruct = pFVar6->ScriptStruct;
    local_68.StructMemory = pFVar6->StructMemory;
    local_28 = local_68.ScriptStruct;
    puStack_20 = local_68.StructMemory;
    if (((local_78.Data <= &local_68) &&
        (&local_68 < (FConstStructView *)((longlong)local_78.Data + (longlong)iStack_6c * 0x10))) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) break;
    if (local_70 == iStack_6c) {
      local_70 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_78,&iStack_6c);
    }
    iVar3 = local_70 + 1;
    pFVar6 = pFVar6 + 1;
    *(UScriptStruct **)(local_78.Data + (longlong)local_70 * 0x10) = local_68.ScriptStruct;
    *(uchar **)(local_78.Data + (longlong)local_70 * 0x10 + 8) = local_68.StructMemory;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FInstancedStructContainer *)(*pcVar1)();
  return pFVar4;
}

// AddStructReferencedObjects @ 141f6e040

void __thiscall
FInstancedStructContainer::AddStructReferencedObjects
          (FInstancedStructContainer *this,FReferenceCollector *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = this->NumItems;
  iVar6 = 0;
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      if (((this->NumItems < 1) || (this->NumItems <= iVar6)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = this->AllocatedSize - iVar7;
      puVar2 = this->Memory;
      if (*(longlong *)(puVar2 + (longlong)iVar5 + -0x10) != 0) {
        (**(code **)(param_1->_padding_ + 0x88))(param_1,puVar2 + (longlong)iVar5 + -0x10,0);
        FReferenceCollector::AddPropertyReferencesWithStructARO
                  (param_1,*(UScriptStruct **)(puVar2 + (longlong)iVar5 + -0x10),
                   this->Memory + *(int *)(puVar2 + (longlong)iVar5 + -8),(UObject *)0x0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar6 < iVar1);
  }
  return;
}

// Append @ 141f6f050

void __thiscall
FInstancedStructContainer::Append
          (FInstancedStructContainer *this,FInstancedStructContainer *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  uchar *puStack_30;
  FConstStructView *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FConstStructView_const_,int> local_18;
  
  iVar4 = param_1->NumItems;
  iVar6 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iStack_3c = 0;
  iVar7 = iVar6;
  if (0 < iVar4) {
    do {
      if ((((iVar4 < 1) || (iVar6 < 0)) || (iVar4 <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x7c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((param_1->NumItems < 1) || (param_1->NumItems <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = param_1->Memory;
      iVar4 = param_1->AllocatedSize - iVar7;
      puStack_30 = puVar1 + *(int *)(puVar1 + (longlong)iVar4 + -8);
      local_38 = *(undefined8 *)(puVar1 + (longlong)iVar4 + -0x10);
      if (((local_48.Data <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 < local_48.Data + (longlong)iStack_3c * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_40 == iStack_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_48,&iStack_3c);
      }
      lVar5 = (longlong)local_40;
      iVar6 = iVar6 + 1;
      local_40 = local_40 + 1;
      *(undefined8 *)(local_48.Data + lVar5 * 0x10) = local_38;
      *(uchar **)(local_48.Data + lVar5 * 0x10 + 8) = puStack_30;
      iVar4 = param_1->NumItems;
      iVar7 = iVar7 + 0x10;
    } while (iVar6 < iVar4);
  }
  iVar4 = local_40;
  local_28 = (FConstStructView *)local_48.Data;
  if ((local_40 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_20 = iVar4;
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar4;
  local_18.DataPtr = local_28;
  InsertAt(this,this->NumItems,&local_18);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// Append @ 141f6f260

void __thiscall
FInstancedStructContainer::Append
          (FInstancedStructContainer *this,TArrayView<FConstStructView_const_,int> *param_1)

{
  TArrayView<FConstStructView_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  InsertAt(this,this->NumItems,&local_18);
  return;
}

// Append @ 141f6f290

void __thiscall
FInstancedStructContainer::Append
          (FInstancedStructContainer *this,TArrayView<FInstancedStruct_const_,int> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInstancedStruct *pFVar5;
  FInstancedStruct *pFVar6;
  ForAnyElementType local_48;
  int local_40;
  int iStack_3c;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_30;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<FConstStructView_const_,int> local_18;
  
  uVar1 = param_1->ArrayNum;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  iStack_3c = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_48,0,&iStack_3c);
  }
  pFVar6 = param_1->DataPtr;
  pFVar5 = pFVar6 + (int)uVar1;
  iVar4 = local_40;
  while( true ) {
    local_40 = iVar4;
    if (pFVar6 == pFVar5) {
      local_28 = (TObjectPtr<UScriptStruct_const_>_u_0 *)local_48.Data;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar4;
      local_18.DataPtr = (FConstStructView *)local_28;
      iStack_20 = iVar4;
      InsertAt(this,this->NumItems,&local_18);
      if ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_48.Data !=
          (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        FMemory::Free(local_48.Data);
      }
      return;
    }
    local_38 = (pFVar6->ScriptStruct).field0_0x0;
    TStack_30 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6->StructMemory;
    if (((local_48.Data <= &local_38) &&
        (&local_38 <
         (TObjectPtr<UScriptStruct_const_>_u_0 *)
         ((longlong)local_48.Data + (longlong)iStack_3c * 2 * 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    if (local_40 == iStack_3c) {
      local_40 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_48,&iStack_3c);
    }
    iVar4 = local_40 + 1;
    pFVar6 = pFVar6 + 1;
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)(local_48.Data + (longlong)local_40 * 0x10) = local_38;
    ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_48.Data + (longlong)local_40 * 0x10))[1] =
         TStack_30;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Empty @ 141f79b20

void __thiscall FInstancedStructContainer::Empty(FInstancedStructContainer *this)

{
  Reset(this);
  FMemory::Free(this->Memory);
  this->Memory = (uchar *)0x0;
  this->AllocatedSize = 0;
  return;
}

// ExportTextItem @ 141f7a5b0

bool __thiscall
FInstancedStructContainer::ExportTextItem
          (FInstancedStructContainer *this,FString *param_1,FInstancedStructContainer *param_2,
          UObject *param_3,int param_4,UObject *param_5)

{
  int iVar1;
  uchar *puVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  FString local_48;
  
  ::FString::AppendChar(param_1,L'(');
  iVar8 = 0;
  if (0 < this->NumItems) {
    iVar9 = 0;
    do {
      if (0 < iVar8) {
        ::FString::AppendChar(param_1,L',');
      }
      if (((this->NumItems < 1) || (this->NumItems <= iVar8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar6 = this->AllocatedSize - iVar9;
      puVar2 = this->Memory;
      if (*(UObjectBaseUtility **)(puVar2 + (longlong)iVar6 + -0x10) == (UObjectBaseUtility *)0x0) {
        ::FString::AppendChars(param_1,L"None",4);
      }
      else {
        pFVar7 = UObjectBaseUtility::GetPathName
                           (*(UObjectBaseUtility **)(puVar2 + (longlong)iVar6 + -0x10),&local_48,
                            (UObject *)0x0);
        iVar1 = (pFVar7->Data).ArrayNum;
        iVar10 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar10 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,iVar10);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        this_00 = *(UScriptStruct **)(puVar2 + (longlong)iVar6 + -0x10);
        if (iVar8 < 0) {
LAB_141f7a734:
          puVar11 = (uchar *)0x0;
        }
        else {
          if (param_2->NumItems <= iVar8) goto LAB_141f7a734;
          if ((param_2->NumItems < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumItems > 0 && Index < NumItems",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                 ,0x100,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          if (*(longlong *)(puVar2 + (longlong)iVar6 + -0x10) !=
              *(longlong *)(param_2->Memory + (longlong)(param_2->AllocatedSize - iVar9) + -0x10))
          goto LAB_141f7a734;
          if (((param_2->NumItems < 1) || (param_2->NumItems <= iVar8)) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumItems > 0 && Index < NumItems",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                 ,0x100,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
          puVar11 = param_2->Memory +
                    *(int *)(param_2->Memory + (longlong)(param_2->AllocatedSize - iVar9) + -8);
        }
        UScriptStruct::ExportText
                  (this_00,param_1,this->Memory + *(int *)(puVar2 + (longlong)iVar6 + -8),puVar11,
                   param_3,param_4,param_5,true);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x10;
    } while (iVar8 < this->NumItems);
  }
  ::FString::AppendChar(param_1,L')');
  return true;
}

// GetItem @ 141f81fa0

FItem * __thiscall FInstancedStructContainer::GetItem(FInstancedStructContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FItem *pFVar3;
  
  if ((this->NumItems < 1) || (this->NumItems <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumItems > 0 && Index < NumItems",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                       ,0x100,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FItem *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FItem *)(this->Memory + (this->AllocatedSize + (param_1 + 1) * -0x10));
}

// GetPreloadDependencies @ 141f841a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedStructContainer::GetPreloadDependencies
          (FInstancedStructContainer *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uchar *puVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  UObjectBaseUtility *pUVar4;
  uint *puVar5;
  uchar *puVar6;
  UStruct *pUVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FFieldClass *pFVar14;
  TTuple<FProperty_const_*,void_const_*> *pTVar15;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined1 auStackY_7d8 [32];
  longlong local_788;
  FString local_780;
  FString local_770;
  FPropertyValueIterator local_760;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  iVar12 = this->NumItems;
  iVar18 = 0;
  if (0 < iVar12) {
    iVar20 = 0;
    do {
      if (((iVar12 < 1) || (iVar12 <= iVar18)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumItems > 0 && Index < NumItems",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                              ,0x100,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar12 = this->AllocatedSize - iVar20;
      puVar1 = this->Memory;
      lVar2 = *(longlong *)(puVar1 + (longlong)iVar12 + -0x10);
      if (lVar2 != 0) {
        pFVar3 = (param_1->AllocatorInstance).Data;
        local_788 = lVar2;
        if (((pFVar3 <= (FScriptContainerElement *)&local_788) &&
            ((FScriptContainerElement *)&local_788 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = param_1->ArrayNum;
        if (iVar13 == param_1->ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar13 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_788;
        pUVar4 = *(UObjectBaseUtility **)(puVar1 + (longlong)iVar12 + -0x10);
        if (pUVar4[4].field_0x14 == '\0') {
          UObjectBaseUtility::GetPathName(pUVar4,&local_780,(UObject *)0x0);
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("bPrepareCppStructOpsCompleted",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x8f6,
                              L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                             );
          if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_780.Data.AllocatorInstance.Data);
          }
          if (bVar11) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if (*(undefined8 **)&pUVar4[4].field_0x18 != (undefined8 *)0x0) {
          puVar5 = (uint *)**(undefined8 **)&pUVar4[4].field_0x18;
          iVar13 = *(int *)(puVar1 + (longlong)iVar12 + -8);
          puVar6 = this->Memory;
          if ((*(byte *)((longlong)puVar5 + 0x17) & 4) != 0) {
            if (((*puVar5 & 0x200) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!!(this->Flags & FuncFlag)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                    ,0x660,L""), bVar11)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            uVar19 = 0;
            for (uVar17 = *puVar5 & 0x1ff; uVar17 != 0; uVar17 = uVar17 & uVar17 - 1) {
              uVar19 = uVar19 + 1;
            }
            (**(code **)(puVar5 + (ulonglong)uVar19 * 2 + 6))(puVar6 + iVar13,param_1);
          }
        }
        iVar13 = *(int *)(puVar1 + (longlong)iVar12 + -8);
        puVar6 = this->Memory;
        pUVar7 = *(UStruct **)(puVar1 + (longlong)iVar12 + -0x10);
        pFVar14 = FStructProperty::StaticClass();
        FPropertyValueIterator::FPropertyValueIterator
                  (&local_760,pFVar14,pUVar7,puVar6 + iVar13,FullRecursion,IncludeDeprecated);
        while( true ) {
          if (local_760.PropertyIteratorStack.ArrayNum < 1) break;
          pTVar15 = FPropertyValueIterator::operator->(&local_760);
          pUVar4 = *(UObjectBaseUtility **)(*(longlong *)pTVar15 + 0x70);
          if (pUVar4[4].field_0x14 == '\0') {
            UObjectBaseUtility::GetPathName(pUVar4,&local_770,(UObject *)0x0);
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("bPrepareCppStructOpsCompleted",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                ,0x8f6,
                                L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                               );
            if (local_770.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_770.Data.AllocatorInstance.Data);
            }
            if (bVar11) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          puVar8 = *(undefined8 **)&pUVar4[4].field_0x18;
          if (puVar8 != (undefined8 *)0x0) {
            pTVar15 = FPropertyValueIterator::operator->(&local_760);
            puVar5 = (uint *)*puVar8;
            uVar9 = *(undefined8 *)&pTVar15->field_0x8;
            if ((*(byte *)((longlong)puVar5 + 0x17) & 4) != 0) {
              if (((*puVar5 & 0x200) == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!!(this->Flags & FuncFlag)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                      ,0x660,L""), bVar11)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              uVar19 = 0;
              for (uVar17 = *puVar5 & 0x1ff; uVar17 != 0; uVar17 = uVar17 & uVar17 - 1) {
                uVar19 = uVar19 + 1;
              }
              (**(code **)(puVar5 + (ulonglong)uVar19 * 2 + 6))(uVar9,param_1);
            }
          }
          FPropertyValueIterator::IterateToNext(&local_760);
        }
        FVar16 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_760;
        if (local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
            (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
          FVar16 = local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData;
        }
        DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                  ((FPropertyValueStackEntry *)FVar16,local_760.PropertyIteratorStack.ArrayNum);
        if (local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
            (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
          FMemory::Free((void *)local_760.PropertyIteratorStack.AllocatorInstance.SecondaryData);
        }
      }
      iVar12 = this->NumItems;
      iVar18 = iVar18 + 1;
      iVar20 = iVar20 + 0x10;
    } while (iVar18 < iVar12);
  }
  return;
}

// Identical @ 141f8c2e0

bool __thiscall
FInstancedStructContainer::Identical
          (FInstancedStructContainer *this,FInstancedStructContainer *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  UScriptStruct *this_00;
  FStructOpsFakeVTable *pFVar4;
  code *pcVar5;
  FField *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  ICppStructOps *pIVar11;
  EStructOpsFakeVTableFlags EVar12;
  uint uVar13;
  longlong lVar14;
  uchar *puVar15;
  uchar *puVar16;
  char local_res20 [8];
  int local_68;
  int local_64;
  TFieldIterator<FProperty> local_58;
  
  if (param_1 != (FInstancedStructContainer *)0x0) {
    iVar10 = this->NumItems;
    piVar1 = &param_1->NumItems;
    if ((iVar10 < 1) && (*piVar1 < 1)) {
      return true;
    }
    if ((0 < iVar10 == 0 < *piVar1) && (iVar10 == *piVar1)) {
      local_68 = 0;
      if (iVar10 < 1) {
        return true;
      }
      local_64 = 0;
      do {
        if (((iVar10 < 1) || (iVar10 <= local_68)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar10 = this->AllocatedSize - local_64;
        puVar16 = this->Memory;
        if (((*piVar1 < 1) || (*piVar1 <= local_68)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        puVar15 = param_1->Memory;
        this_00 = *(UScriptStruct **)(puVar16 + (longlong)iVar10 + -0x10);
        lVar14 = (longlong)(param_1->AllocatedSize - local_64);
        if (this_00 != *(UScriptStruct **)(puVar15 + lVar14 + -0x10)) {
          return false;
        }
        if ((this_00 != (UScriptStruct *)0x0) &&
           (*(UScriptStruct **)(puVar15 + lVar14 + -0x10) != (UScriptStruct *)0x0)) {
          puVar16 = this->Memory + *(int *)(puVar16 + (longlong)iVar10 + -8);
          puVar15 = puVar15 + *(int *)(puVar15 + lVar14 + -8);
          if ((puVar16 == (uchar *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("A",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                 ,0xe72,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            uVar8 = (*pcVar5)();
            return (bool)uVar8;
          }
          if (puVar15 == (uchar *)0x0) {
            return false;
          }
          if ((this_00->StructFlags & STRUCT_IdenticalNative) != STRUCT_NoFlags) {
            pIVar11 = UScriptStruct::GetCppStructOps(this_00);
            if ((pIVar11 == (ICppStructOps *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TheCppStructOps",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                                   ,0xe7c,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            local_res20[0] = '\0';
            pFVar4 = pIVar11->FakeVPtr;
            if (((~(byte)(pFVar4->Flags >> 0xb) & 1) != 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!(this->Flags & FuncFlag)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x660,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            uVar13 = 0;
            for (EVar12 = pFVar4->Flags &
                          (Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                           NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|
                           ConstructForTests|Construct); EVar12 != None;
                EVar12 = EVar12 & EVar12 - Construct) {
              uVar13 = uVar13 + 1;
            }
            cVar9 = (**(code **)(&pFVar4[1].Flags + (ulonglong)uVar13 * 2))
                              (puVar16,puVar15,param_2,local_res20);
            if (cVar9 != '\0') {
              if (local_res20[0] == '\0') {
                return false;
              }
              goto LAB_141f8c6ba;
            }
          }
          local_58.Field = (FField *)this_00->_padding_;
          local_58.InterfaceIndex = -1;
          local_58.bIncludeSuper = true;
          local_58.bIncludeDeprecated = true;
          local_58.bIncludeInterface = false;
          local_58.Struct = (UStruct *)this_00;
          TFieldIterator<FProperty>::IterateToNext(&local_58);
          pFVar6 = local_58.Field;
          while (local_58.Field = pFVar6, pFVar6 != (FField *)0x0) {
            iVar10 = 0;
            if (0 < (int)pFVar6[1]._padding_) {
              do {
                pcVar5 = *(code **)(pFVar6->_padding_ + 0xb8);
                if (((iVar10 < 0) || ((int)pFVar6[1]._padding_ <= iVar10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                iVar2 = *(int *)((longlong)&pFVar6[1]._padding_ + 4);
                iVar3 = *(int *)((longlong)&pFVar6[1].Owner.Container + 4);
                if (((iVar10 < 0) || ((int)pFVar6[1]._padding_ <= iVar10)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2dd,
                                       L"Array index out of bounds: %i from an array of size %i"),
                   bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                if ((puVar16 == (uchar *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("ContainerPtr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                       ,0x2de,L""), bVar7)) {
                  pcVar5 = (code *)swi(3);
                  uVar8 = (*pcVar5)();
                  return (bool)uVar8;
                }
                cVar9 = (*pcVar5)(pFVar6,puVar16 + (longlong)
                                                   *(int *)((longlong)&pFVar6[1].Owner.Container + 4
                                                           ) +
                                                   (longlong)iVar10 *
                                                   (longlong)
                                                   *(int *)((longlong)&pFVar6[1]._padding_ + 4),
                                  puVar15 + (longlong)iVar3 + (longlong)iVar10 * (longlong)iVar2,
                                  param_2);
                if (cVar9 == '\0') {
                  return false;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < (int)pFVar6[1]._padding_);
            }
            local_58.Field = pFVar6->Next;
            TFieldIterator<FProperty>::IterateToNext(&local_58);
            pFVar6 = local_58.Field;
          }
        }
LAB_141f8c6ba:
        local_68 = local_68 + 1;
        iVar10 = this->NumItems;
        local_64 = local_64 + 0x10;
        if (iVar10 <= local_68) {
          return true;
        }
      } while( true );
    }
  }
  return false;
}

// ImportTextItem @ 141f8d1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstancedStructContainer::ImportTextItem
          (FInstancedStructContainer *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  code *pcVar1;
  ForAnyElementType this_00;
  uint uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  wchar_t *pwVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  FInstancedStruct *this_01;
  ForElementType<FInstancedStruct> FVar10;
  ForElementType<FInstancedStruct> FVar11;
  ulonglong uVar12;
  undefined1 auStackY_4f8 [32];
  ForAnyElementType local_4a8;
  undefined8 local_4a0;
  undefined1 local_498 [16];
  FInstancedStructContainer *local_488;
  uint uStack_480;
  undefined4 uStack_47c;
  TArrayView<FConstStructView_const_,int> local_478;
  ForElementType<FInstancedStruct> local_468;
  uint local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4f8;
  uVar12 = 0;
  local_468.SecondaryData = (ForElementType<FInstancedStruct>)0x0;
  local_60 = 0;
  local_5c = 0x40;
  local_4a8.Data = (FScriptContainerElement *)this;
  if (**param_1 == L'(') {
    pwVar6 = *param_1 + 1;
    *param_1 = pwVar6;
    uVar9 = uVar12;
    if (*pwVar6 == L')') {
LAB_141f8d307:
      uVar2 = local_60;
      this_00.Data = local_4a8.Data;
      FVar11 = (ForElementType<FInstancedStruct>)&local_468;
      if (local_468.SecondaryData != (ForElementType<FInstancedStruct>)0x0) {
        FVar11 = local_468.SecondaryData;
      }
      if (((int)local_60 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      Reset((FInstancedStructContainer *)this_00.Data);
      local_4a8.Data = (FScriptContainerElement *)0x0;
      local_4a0 = 0;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (0 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar2,&local_4a8,0,(int *)((longlong)&local_4a0 + 4));
        uVar12 = local_4a0 & 0xffffffff;
      }
      uVar7 = (uint)uVar12;
      FVar10 = (ForElementType<FInstancedStruct>)((longlong)(int)uVar2 * 0x10 + (longlong)FVar11);
      for (; FVar11 != FVar10; FVar11 = (ForElementType<FInstancedStruct>)((longlong)FVar11 + 0x10))
      {
        local_498._0_8_ = *(undefined8 *)FVar11;
        local_498._8_8_ = *(uchar **)((longlong)FVar11 + 8);
        iVar5 = (int)uVar12;
        if ((local_4a8.Data <= (FInstancedStructContainer *)local_498) &&
           (local_4a0._4_4_ = (int)(local_4a0 >> 0x20), lVar8 = (longlong)local_4a0._4_4_,
           (FInstancedStructContainer *)local_498 <
           (FInstancedStructContainer *)((longlong)local_4a8.Data + lVar8 * 0x10))) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          iVar5 = (int)local_4a0;
        }
        if (iVar5 == local_4a0._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_4a8,(int *)((longlong)&local_4a0 + 4));
        }
        uVar7 = iVar5 + 1;
        local_4a0 = CONCAT44(local_4a0._4_4_,uVar7);
        *(undefined8 *)&local_4a8.Data[(longlong)iVar5 * 0x10].field_0x0 = local_498._0_8_;
        *(undefined8 *)(local_4a8.Data + (longlong)iVar5 * 0x10 + 8) = local_498._8_8_;
        uVar12 = (ulonglong)uVar7;
      }
      local_488 = (FInstancedStructContainer *)local_4a8.Data;
      if (((int)uVar7 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_478._12_4_ = uStack_47c;
      local_478.ArrayNum = uVar7;
      local_478.DataPtr = (FConstStructView *)local_488;
      uStack_480 = uVar7;
      InsertAt((FInstancedStructContainer *)this_00.Data,0,&local_478);
      if ((FInstancedStructContainer *)local_4a8.Data != (FInstancedStructContainer *)0x0) {
        FMemory::Free(local_4a8.Data);
      }
      bVar3 = true;
    }
    else {
      while( true ) {
        iVar5 = (int)uVar9;
        if (iVar5 == local_5c) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FInstancedStruct>_>
                            (0x810,&local_468,&local_5c);
        }
        local_60 = iVar5 + 1;
        FVar11 = (ForElementType<FInstancedStruct>)&local_468;
        if (local_468.SecondaryData != (ForElementType<FInstancedStruct>)0x0) {
          FVar11 = local_468.SecondaryData;
        }
        this_01 = (FInstancedStruct *)((longlong)iVar5 * 0x10 + (longlong)FVar11);
        DefaultConstructItems<FInstancedStruct,int>(this_01,1);
        bVar3 = FInstancedStruct::ImportTextItem(this_01,param_1,param_2,param_3,param_4,param_5);
        if (!bVar3) goto LAB_141f8d2ee;
        pwVar6 = *param_1;
        if (*pwVar6 == L')') goto LAB_141f8d307;
        if (*pwVar6 != L',') break;
        *param_1 = pwVar6 + 1;
        uVar9 = (ulonglong)local_60;
      }
      FOutputDevice::LogfImpl
                (param_4,Warning,L"FInstancedStructContainer: Missing \',\' after item.");
LAB_141f8d2ee:
      bVar3 = false;
    }
  }
  else {
    FOutputDevice::LogfImpl
              (param_4,Warning,
               L"FInstancedStructContainer: Missing opening \'(\' while importing property values.")
    ;
    bVar3 = false;
  }
  FVar11 = (ForElementType<FInstancedStruct>)&local_468;
  if (local_468.SecondaryData != (ForElementType<FInstancedStruct>)0x0) {
    FVar11 = local_468.SecondaryData;
  }
  DestructItems<FInstancedStruct,int>((FInstancedStruct *)FVar11,local_60);
  if (local_468.SecondaryData != (ForElementType<FInstancedStruct>)0x0) {
    FMemory::Free((void *)local_468.SecondaryData);
  }
  return bVar3;
}

// InsertAt @ 141f8ee80

void __thiscall
FInstancedStructContainer::InsertAt
          (FInstancedStructContainer *this,int param_1,FInstancedStructContainer *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  uchar *puStack_40;
  FConstStructView *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FConstStructView_const_,int> local_28;
  
  iVar4 = param_2->NumItems;
  iVar6 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  iVar7 = iVar6;
  if (0 < iVar4) {
    do {
      if ((((iVar4 < 1) || (iVar6 < 0)) || (iVar4 <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid() && IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x7c,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((param_2->NumItems < 1) || (param_2->NumItems <= iVar6)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar1 = param_2->Memory;
      iVar4 = param_2->AllocatedSize - iVar7;
      puStack_40 = puVar1 + *(int *)(puVar1 + (longlong)iVar4 + -8);
      local_48 = *(undefined8 *)(puVar1 + (longlong)iVar4 + -0x10);
      if (((local_58.Data <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < local_58.Data + (longlong)iStack_4c * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_50 == iStack_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_58,&iStack_4c);
      }
      lVar5 = (longlong)local_50;
      iVar6 = iVar6 + 1;
      local_50 = local_50 + 1;
      *(undefined8 *)(local_58.Data + lVar5 * 0x10) = local_48;
      *(uchar **)(local_58.Data + lVar5 * 0x10 + 8) = puStack_40;
      iVar4 = param_2->NumItems;
      iVar7 = iVar7 + 0x10;
    } while (iVar6 < iVar4);
  }
  iVar4 = local_50;
  local_38 = (FConstStructView *)local_58.Data;
  if ((local_50 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iStack_30 = iVar4;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar4;
  local_28.DataPtr = local_38;
  InsertAt(this,param_1,&local_28);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// InsertAt @ 141f8f0a0

void __thiscall
FInstancedStructContainer::InsertAt
          (FInstancedStructContainer *this,int param_1,
          TArrayView<FConstStructView_const_,int> *param_2)

{
  longlong *plVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  uchar *puVar4;
  code *pcVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  int iVar20;
  FConstStructView *pFVar21;
  FConstStructView *pFVar22;
  longlong lVar23;
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  longlong local_60;
  void *pvStack_58;
  
  iVar9 = this->NumItems - param_1;
  local_70.Data = (FScriptContainerElement *)0x0;
  uVar17 = param_2->ArrayNum;
  local_68 = 0;
  iStack_64 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&local_70,0,&iStack_64);
  }
  iVar10 = this->NumItems;
  iVar12 = 8;
  iVar15 = 0;
  if (0 < iVar10) {
    iVar19 = 0;
    do {
      if (((iVar10 < 1) || (iVar10 <= iVar15)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)(this->Memory + (longlong)(this->AllocatedSize - iVar19) + -0x10) == 0) {
        iVar10 = 1;
      }
      else {
        iVar10 = (int)*(short *)(*(longlong *)
                                  (this->Memory + (longlong)(this->AllocatedSize - iVar19) + -0x10)
                                + 0x5c);
      }
      if (iVar10 < iVar12) {
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      iVar15 = iVar15 + 1;
      iVar19 = iVar19 + 0x10;
      iVar10 = this->NumItems;
    } while (iVar15 < iVar10);
  }
  uVar13 = 0;
  if (0 < param_1) {
    if (((iVar10 < 1) || (iVar10 <= param_1 + -1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = this->AllocatedSize + (param_1 + -1) * -0x10;
    lVar23 = *(longlong *)(this->Memory + (longlong)iVar10 + -0x10);
    if (lVar23 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(short *)(lVar23 + 0x5c) + -1 + *(int *)(lVar23 + 0x58) &
               -(int)*(short *)(lVar23 + 0x5c);
    }
    uVar13 = *(int *)(this->Memory + (longlong)iVar10 + -8) + uVar13;
  }
  pFVar22 = param_2->DataPtr;
  pFVar21 = pFVar22 + param_2->ArrayNum;
  iVar10 = iVar12;
  for (; pFVar22 != pFVar21; pFVar22 = pFVar22 + 1) {
    pUVar2 = pFVar22->ScriptStruct;
    if (local_68 == iStack_64) {
      local_68 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_70,&iStack_64);
    }
    pFVar18 = local_70.Data + (longlong)local_68 * 0x10;
    local_68 = local_68 + 1;
    *(UScriptStruct **)pFVar18 = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    *(undefined4 *)(pFVar18 + 8) = 0;
    lVar23 = *(longlong *)pFVar18;
    if (lVar23 == 0) {
      uVar14 = 0;
      *(uint *)(pFVar18 + 8) = uVar13;
      iVar15 = 1;
      if (1 < iVar10) {
        iVar15 = iVar10;
      }
    }
    else {
      iVar15 = (int)*(short *)(lVar23 + 0x5c);
      if (*(short *)(lVar23 + 0x5c) < iVar10) {
        iVar15 = iVar10;
      }
      uVar13 = (uVar13 - 1) + (int)*(short *)(lVar23 + 0x5c) & -(int)*(short *)(lVar23 + 0x5c);
      *(uint *)(pFVar18 + 8) = uVar13;
      uVar14 = *(short *)(lVar23 + 0x5c) + -1 + *(int *)(lVar23 + 0x58) &
               -(int)*(short *)(lVar23 + 0x5c);
    }
    uVar13 = uVar13 + uVar14;
    iVar10 = iVar15;
  }
  uVar14 = 0;
  iVar15 = 0;
  if (iVar9 < 1) {
    iVar12 = 0;
  }
  else {
    uVar14 = iVar12 + -1 + uVar13 & -iVar12;
    if (((this->NumItems < 1) || (this->NumItems <= param_1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar12 = *(int *)(this->Memory + (longlong)(this->AllocatedSize + param_1 * -0x10) + -8);
    iVar15 = this->NumItems;
    if (((iVar15 < 1) || (iVar15 <= iVar15 + -1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar15 = this->AllocatedSize + (iVar15 + -1) * -0x10;
    lVar23 = *(longlong *)(this->Memory + (longlong)iVar15 + -0x10);
    if (lVar23 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(short *)(lVar23 + 0x5c) + -1 + *(int *)(lVar23 + 0x58) &
               -(int)*(short *)(lVar23 + 0x5c);
    }
    iVar15 = (*(int *)(this->Memory + (longlong)iVar15 + -8) - iVar12) + uVar13;
    if (((this->NumItems < 1) || (this->NumItems <= param_1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = param_1 * 0x10;
    iVar19 = *(int *)(this->Memory + (longlong)(this->AllocatedSize + param_1 * -0x10) + -8);
    iVar11 = this->NumItems;
    iVar20 = param_1;
    if (param_1 < iVar11) {
      do {
        if (((iVar11 < 1) || (iVar11 <= iVar20)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar20 = iVar20 + 1;
        iVar11 = this->AllocatedSize - iVar16;
        iVar16 = iVar16 + 0x10;
        *(uint *)(this->Memory + (longlong)iVar11 + -8) =
             *(int *)(this->Memory + (longlong)iVar11 + -8) + (uVar14 - iVar19);
        iVar11 = this->NumItems;
      } while (iVar20 < iVar11);
    }
    if (((iVar11 < 1) || (iVar11 <= iVar11 + -1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar19 = this->AllocatedSize + (iVar11 + -1) * -0x10;
    puVar3 = this->Memory;
    lVar23 = *(longlong *)(puVar3 + (longlong)iVar19 + -0x10);
    if (lVar23 == 0) {
      uVar13 = *(uint *)(puVar3 + (longlong)iVar19 + -8);
    }
    else {
      uVar13 = *(int *)(puVar3 + (longlong)iVar19 + -8) +
               (*(short *)(lVar23 + 0x5c) + -1 + *(int *)(lVar23 + 0x58) &
               -(int)*(short *)(lVar23 + 0x5c));
    }
  }
  iVar11 = this->NumItems + local_68;
  iVar19 = 8;
  if (8 < iVar10) {
    iVar19 = iVar10;
  }
  ReserveBytes(this,iVar11 * 0x10 + 7 + uVar13 & 0xfffffff8,iVar19);
  this->NumItems = iVar11;
  if (0 < iVar9) {
    memmove(this->Memory + (int)uVar14,this->Memory + iVar12,(longlong)iVar15);
    iVar12 = this->NumItems;
    iVar10 = iVar12 + -1;
    if (iVar12 - iVar9 <= iVar10) {
      iVar15 = iVar10 - uVar17;
      iVar19 = iVar10 * 0x10;
      do {
        if (((iVar12 < 1) || (iVar12 <= iVar15)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar12 = (this->AllocatedSize + uVar17 * 0x10) - iVar19;
        puVar3 = this->Memory;
        if (((this->NumItems < 1) || (this->NumItems <= iVar10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = this->AllocatedSize - iVar19;
        puVar4 = this->Memory;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(puVar3 + (longlong)iVar12 + -0x10) != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)(puVar3 + (longlong)iVar12 + -0x10));
        }
        iVar10 = iVar10 + -1;
        *(undefined8 *)(puVar4 + (longlong)iVar11 + -0x10) =
             *(undefined8 *)(puVar3 + (longlong)iVar12 + -0x10);
        iVar15 = iVar15 + -1;
        iVar19 = iVar19 + -0x10;
        *(undefined4 *)(puVar4 + (longlong)iVar11 + -8) =
             *(undefined4 *)(puVar3 + (longlong)iVar12 + -8);
        iVar12 = this->NumItems;
      } while (iVar12 - iVar9 <= iVar10);
    }
  }
  uVar17 = 0;
  if (0 < local_68) {
    lVar23 = 0;
    iVar9 = param_1 << 4;
    do {
      uVar13 = 0;
      if ((int)uVar17 < local_68) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar7.Data = local_70.Data;
      if (((this->NumItems < 1) || (this->NumItems <= (int)(uVar17 + param_1))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = this->AllocatedSize - iVar9;
      puVar3 = this->Memory;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)(FVar7.Data + lVar23) != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)(FVar7.Data + lVar23));
      }
      uVar17 = uVar17 + 1;
      *(undefined8 *)(puVar3 + (longlong)iVar10 + -0x10) = *(undefined8 *)(FVar7.Data + lVar23);
      iVar9 = iVar9 + 0x10;
      lVar6 = lVar23 + 8;
      lVar23 = lVar23 + 0x10;
      *(undefined4 *)(puVar3 + (longlong)iVar10 + -8) = *(undefined4 *)(FVar7.Data + lVar6);
    } while ((int)uVar17 < local_68);
  }
  uVar17 = 0;
  iVar9 = param_2->ArrayNum;
  if (0 < iVar9) {
    lVar23 = 0;
    iVar10 = param_1 << 4;
    do {
      uVar13 = 0;
      if ((int)uVar17 < iVar9) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar1 = (longlong *)((longlong)&param_2->DataPtr->ScriptStruct + lVar23);
      local_60 = *plVar1;
      pvStack_58 = (void *)plVar1[1];
      if (((this->NumItems < 1) || (this->NumItems <= (int)(uVar17 + param_1))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = this->AllocatedSize - iVar10;
      puVar3 = this->Memory;
      if (*(longlong *)(puVar3 + (longlong)iVar9 + -0x10) != 0) {
        if ((*(longlong *)(puVar3 + (longlong)iVar9 + -0x10) != local_60) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Item.ScriptStruct == NewItemValue.GetScriptStruct()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\InstancedStructContainer.cpp"
                               ,0xf9,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (**(code **)(**(longlong **)(puVar3 + (longlong)iVar9 + -0x10) + 0x2f8))
                  (*(longlong **)(puVar3 + (longlong)iVar9 + -0x10),
                   this->Memory + *(int *)(puVar3 + (longlong)iVar9 + -8),1);
        if (pvStack_58 != (void *)0x0) {
          UScriptStruct::CopyScriptStruct
                    (*(UScriptStruct **)(puVar3 + (longlong)iVar9 + -0x10),
                     this->Memory + *(int *)(puVar3 + (longlong)iVar9 + -8),pvStack_58,1);
        }
      }
      iVar9 = param_2->ArrayNum;
      uVar17 = uVar17 + 1;
      iVar10 = iVar10 + 0x10;
      lVar23 = lVar23 + 0x10;
    } while ((int)uVar17 < iVar9);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// InsertAt @ 141f8f8a0

void __thiscall
FInstancedStructContainer::InsertAt
          (FInstancedStructContainer *this,int param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FInstancedStruct *pFVar5;
  FInstancedStruct *pFVar6;
  ForAnyElementType local_58;
  int local_50;
  int iStack_4c;
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_40;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FConstStructView_const_,int> local_28;
  
  uVar1 = param_2->ArrayNum;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iStack_4c = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_58,0,&iStack_4c);
  }
  pFVar6 = param_2->DataPtr;
  pFVar5 = pFVar6 + (int)uVar1;
  iVar4 = local_50;
  while( true ) {
    local_50 = iVar4;
    if (pFVar6 == pFVar5) {
      local_38 = (TObjectPtr<UScriptStruct_const_>_u_0 *)local_58.Data;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_28._12_4_ = uStack_2c;
      local_28.ArrayNum = iVar4;
      local_28.DataPtr = (FConstStructView *)local_38;
      iStack_30 = iVar4;
      InsertAt(this,param_1,&local_28);
      if ((TObjectPtr<UScriptStruct_const_>_u_0 *)local_58.Data !=
          (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
        FMemory::Free(local_58.Data);
      }
      return;
    }
    local_48 = (pFVar6->ScriptStruct).field0_0x0;
    TStack_40 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar6->StructMemory;
    if (((local_58.Data <= &local_48) &&
        (&local_48 <
         (TObjectPtr<UScriptStruct_const_>_u_0 *)
         ((longlong)local_58.Data + (longlong)iStack_4c * 2 * 8))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    if (local_50 == iStack_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_58,&iStack_4c);
    }
    iVar4 = local_50 + 1;
    pFVar6 = pFVar6 + 1;
    *(TObjectPtr<UScriptStruct_const_>_u_0 *)(local_58.Data + (longlong)local_50 * 0x10) = local_48;
    ((TObjectPtr<UScriptStruct_const_>_u_0 *)(local_58.Data + (longlong)local_50 * 0x10))[1] =
         TStack_40;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// InsertAt @ 141f8fa70

void __thiscall
FInstancedStructContainer::InsertAt
          (FInstancedStructContainer *this,int param_1,TArrayView<FStructView_const_,int> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FStructView *pFVar5;
  FStructView *pFVar6;
  ForAnyElementType local_68;
  int local_60;
  int iStack_5c;
  FConstStructView local_58;
  FConstStructView *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FConstStructView_const_,int> local_38;
  UScriptStruct *local_28;
  uchar *puStack_20;
  
  uVar1 = param_2->ArrayNum;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  iStack_5c = 0;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar1,&local_68,0,&iStack_5c);
  }
  pFVar6 = param_2->DataPtr;
  pFVar5 = pFVar6 + (int)uVar1;
  iVar4 = local_60;
  while( true ) {
    local_60 = iVar4;
    if (pFVar6 == pFVar5) {
      local_48 = (FConstStructView *)local_68.Data;
      if ((iVar4 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_38._12_4_ = uStack_3c;
      local_38.ArrayNum = iVar4;
      local_38.DataPtr = local_48;
      iStack_40 = iVar4;
      InsertAt(this,param_1,&local_38);
      if ((FConstStructView *)local_68.Data != (FConstStructView *)0x0) {
        FMemory::Free(local_68.Data);
      }
      return;
    }
    local_58.ScriptStruct = pFVar6->ScriptStruct;
    local_58.StructMemory = pFVar6->StructMemory;
    local_28 = local_58.ScriptStruct;
    puStack_20 = local_58.StructMemory;
    if (((local_68.Data <= &local_58) &&
        (&local_58 < (FConstStructView *)((longlong)local_68.Data + (longlong)iStack_5c * 0x10))) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) break;
    if (local_60 == iStack_5c) {
      local_60 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_68,&iStack_5c);
    }
    iVar4 = local_60 + 1;
    pFVar6 = pFVar6 + 1;
    *(UScriptStruct **)(local_68.Data + (longlong)local_60 * 0x10) = local_58.ScriptStruct;
    *(uchar **)(local_68.Data + (longlong)local_60 * 0x10 + 8) = local_58.StructMemory;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RemoveAt @ 141f97fc0

void __thiscall
FInstancedStructContainer::RemoveAt(FInstancedStructContainer *this,int param_1,int param_2)

{
  int *piVar1;
  uchar *puVar2;
  longlong *plVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  uVar15 = 0;
  piVar1 = &this->NumItems;
  iVar12 = 0;
  if (0 < param_2) {
    iVar11 = param_1 << 4;
    do {
      if (((*piVar1 < 1) || (*piVar1 <= iVar12 + param_1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar2 = this->Memory;
      lVar8 = (longlong)(this->AllocatedSize - iVar11);
      plVar3 = *(longlong **)(puVar2 + lVar8 + -0x10);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x300))(plVar3,puVar2 + *(int *)(puVar2 + lVar8 + -8),1);
      }
      iVar12 = iVar12 + 1;
      iVar11 = iVar11 + 0x10;
    } while (iVar12 < param_2);
  }
  iVar11 = *piVar1;
  iVar12 = param_1 + param_2;
  if (0 < iVar11 - iVar12) {
    iVar16 = 8;
    if (iVar12 < iVar11) {
      iVar10 = iVar12 * 0x10;
      iVar13 = iVar12;
      do {
        if (((iVar11 < 1) || (iVar11 <= iVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(this->Memory + (longlong)(this->AllocatedSize - iVar10) + -0x10) == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = (int)*(short *)(*(longlong *)
                                   (this->Memory + (longlong)(this->AllocatedSize - iVar10) + -0x10)
                                 + 0x5c);
        }
        iVar11 = *piVar1;
        if (iVar7 < iVar16) {
          iVar7 = iVar16;
        }
        iVar16 = iVar7;
        iVar13 = iVar13 + 1;
        iVar10 = iVar10 + 0x10;
      } while (iVar13 < iVar11);
    }
    if (param_1 < 1) {
      iVar11 = 0;
    }
    else {
      if (((iVar11 < 1) || (iVar11 <= param_1 + -1)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumItems > 0 && Index < NumItems",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                             ,0x100,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = this->AllocatedSize + (param_1 + -1) * -0x10;
      puVar2 = this->Memory;
      lVar8 = *(longlong *)(puVar2 + (longlong)iVar11 + -0x10);
      if (lVar8 == 0) {
        iVar11 = *(int *)(puVar2 + (longlong)iVar11 + -8);
      }
      else {
        iVar11 = *(int *)(puVar2 + (longlong)iVar11 + -8) +
                 (*(short *)(lVar8 + 0x5c) + -1 + *(int *)(lVar8 + 0x58) &
                 -(int)*(short *)(lVar8 + 0x5c));
      }
    }
    iVar13 = this->NumItems;
    uVar14 = iVar11 + -1 + iVar16 & -iVar16;
    if (((iVar13 < 1) || (iVar13 <= iVar12)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar16 = *(int *)(this->Memory + (longlong)(this->AllocatedSize + iVar12 * -0x10) + -8);
    iVar11 = this->NumItems;
    if (((iVar11 < 1) || (iVar11 <= iVar11 + -1)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumItems > 0 && Index < NumItems",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                           ,0x100,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar2 = this->Memory;
    lVar9 = (longlong)(this->AllocatedSize + (iVar11 + -1) * -0x10);
    lVar8 = *(longlong *)(puVar2 + lVar9 + -0x10);
    if (lVar8 != 0) {
      uVar15 = *(short *)(lVar8 + 0x5c) + -1 + *(int *)(lVar8 + 0x58) &
               -(int)*(short *)(lVar8 + 0x5c);
    }
    iVar11 = (*(int *)(puVar2 + lVar9 + -8) - iVar16) + uVar15;
    if (0 < iVar11) {
      memmove(puVar2 + (int)uVar14,puVar2 + iVar16,(longlong)iVar11);
    }
    iVar11 = this->NumItems;
    if (iVar12 < iVar11) {
      iVar13 = iVar12 * 0x10;
      do {
        if (((iVar11 < 1) || (iVar11 <= iVar12 - param_2)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar11 = (this->AllocatedSize + param_2 * 0x10) - iVar13;
        puVar2 = this->Memory;
        if (((this->NumItems < 1) || (this->NumItems <= iVar12)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems > 0 && Index < NumItems",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                               ,0x100,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = this->AllocatedSize - iVar13;
        puVar4 = this->Memory;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)(puVar4 + (longlong)iVar10 + -0x10) != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)(puVar4 + (longlong)iVar10 + -0x10));
        }
        iVar12 = iVar12 + 1;
        *(undefined8 *)(puVar2 + (longlong)iVar11 + -0x10) =
             *(undefined8 *)(puVar4 + (longlong)iVar10 + -0x10);
        iVar13 = iVar13 + 0x10;
        *(uint *)(puVar2 + (longlong)iVar11 + -8) =
             *(int *)(puVar4 + (longlong)iVar10 + -8) + (uVar14 - iVar16);
        iVar11 = this->NumItems;
      } while (iVar12 < iVar11);
    }
  }
  this->NumItems = iVar11 - param_2;
  return;
}

// ReserveBytes @ 141f99ad0

void __thiscall
FInstancedStructContainer::ReserveBytes(FInstancedStructContainer *this,int param_1,int param_2)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  uchar *_Dst;
  FItem *pFVar4;
  int iVar5;
  uint uVar6;
  size_t _Size;
  int iVar7;
  
  iVar5 = this->AllocatedSize;
  if ((iVar5 < param_1) || (((ulonglong)this->Memory & (longlong)param_2 - 1U) != 0)) {
    iVar7 = param_1;
    if (param_1 < iVar5) {
      iVar7 = iVar5;
    }
    _Dst = FMemory::Malloc((longlong)iVar7,param_2);
    if (0 < this->NumItems) {
      if (this->Memory == (uchar *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Memory != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\InstancedStructContainer.cpp"
                           ,0x140,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = GetItem(this,this->NumItems + -1);
      pUVar1 = (pFVar4->ScriptStruct).field0_0x0.DebugPtr;
      if (pUVar1 == (UScriptStruct *)0x0) {
        uVar6 = 0;
      }
      else {
        iVar5 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
        uVar6 = iVar5 + -1 + (int)pUVar1->_padding_ & -iVar5;
      }
      iVar5 = pFVar4->Offset + uVar6;
      if (this->AllocatedSize < iVar5) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValuesSize <= AllocatedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\InstancedStructContainer.cpp"
                           ,0x143,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      memcpy(_Dst,this->Memory,(longlong)iVar5);
      iVar5 = this->NumItems * 0x10;
      if (this->AllocatedSize < iVar5) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemsSize <= AllocatedSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\InstancedStructContainer.cpp"
                           ,0x147,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      _Size = (size_t)iVar5;
      memcpy(_Dst + ((longlong)param_1 - _Size),
             this->Memory + ((longlong)this->AllocatedSize - _Size),_Size);
    }
    FMemory::Free(this->Memory);
    this->Memory = _Dst;
    this->AllocatedSize = iVar7;
  }
  return;
}

// Reset @ 141f99d30

void __thiscall FInstancedStructContainer::Reset(FInstancedStructContainer *this)

{
  uchar *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = this->NumItems;
  iVar7 = 0;
  if (iVar5 < 1) {
    this->NumItems = 0;
    return;
  }
  iVar8 = 0;
  do {
    if ((iVar5 < 1) || (iVar5 <= iVar7)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumItems > 0 && Index < NumItems",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                         ,0x100,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = this->Memory;
    lVar6 = (longlong)(this->AllocatedSize - iVar8);
    plVar2 = *(longlong **)(puVar1 + lVar6 + -0x10);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x300))(plVar2,puVar1 + *(int *)(puVar1 + lVar6 + -8),1);
    }
    iVar5 = this->NumItems;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar7 < iVar5);
  this->NumItems = 0;
  return;
}

// Serialize @ 141f9b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstancedStructContainer::Serialize(FInstancedStructContainer *this,FArchive *param_1)

{
  longlong *plVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FStructuredArchiveFromArchive *pFVar10;
  FStructuredArchiveSlot FVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStackY_5e8 [32];
  char local_598 [4];
  uint local_594;
  uint local_590;
  uint local_58c;
  ForAnyElementType local_588;
  undefined8 local_580;
  ulonglong local_578;
  UScriptStruct *local_570;
  FConstStructView local_568;
  FString local_558;
  undefined8 local_548;
  FConstStructView *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  TArrayView<FConstStructView_const_,int> local_508;
  FStructuredArchiveFromArchive local_4f8;
  FStructuredArchiveFromArchive local_368;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5e8;
  iVar16 = 0;
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_598[0] = '\0';
  local_578 = local_578 & 0xffffffff00000000;
  if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_598,1);
  }
  else {
    local_598[0] = *(char *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (local_598[0] == '\0') {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_594 = this->NumItems;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_594,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_594);
      }
    }
    else {
      local_594 = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (0 < (int)local_594) {
      if ((param_1->field_0x28 & 1) == 0) {
        if ((param_1->field_0x28 & 4) == 0) {
          if ((param_1->field_0x2b & 6) != 0) {
            iVar13 = this->NumItems;
            iVar7 = iVar16;
            iVar14 = iVar16;
            if (0 < iVar13) {
              do {
                if (((iVar13 < 1) || (iVar13 <= iVar14)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NumItems > 0 && Index < NumItems",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                       ,0x100,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                (**(code **)(*(longlong *)param_1 + 0x150))
                          (param_1,this->Memory + ((this->AllocatedSize - iVar7) + -0x10));
                iVar13 = this->NumItems;
                iVar14 = iVar14 + 1;
                iVar7 = iVar7 + 0x10;
              } while (iVar14 < iVar13);
            }
            iVar13 = iVar16;
            if (0 < (int)local_594) {
              do {
                if (((this->NumItems < 1) || (this->NumItems <= iVar16)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("NumItems > 0 && Index < NumItems",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                       ,0x100,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                puVar2 = this->Memory;
                lVar8 = (longlong)(this->AllocatedSize - iVar13);
                pUVar3 = *(UScriptStruct **)(puVar2 + lVar8 + -0x10);
                if (pUVar3 != (UScriptStruct *)0x0) {
                  iVar7 = *(int *)(puVar2 + lVar8 + -8);
                  pFVar10 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                                      (&local_1d8,param_1);
                  FVar11 = FStructuredArchiveFromArchive::GetSlot(pFVar10);
                  UScriptStruct::SerializeItem
                            (pUVar3,*(FStructuredArchiveSlot *)FVar11,puVar2 + iVar7,(void *)0x0);
                  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
                }
                iVar16 = iVar16 + 1;
                iVar13 = iVar13 + 0x10;
              } while (iVar16 < (int)local_594);
            }
          }
        }
        else {
          iVar13 = this->NumItems;
          iVar7 = iVar16;
          iVar14 = iVar16;
          if (0 < iVar13) {
            do {
              if (((iVar13 < 1) || (iVar13 <= iVar14)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NumItems > 0 && Index < NumItems",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                     ,0x100,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              (**(code **)(*(longlong *)param_1 + 0x150))
                        (param_1,this->Memory + ((this->AllocatedSize - iVar7) + -0x10));
              iVar13 = this->NumItems;
              iVar14 = iVar14 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar14 < iVar13);
          }
          iVar13 = iVar16;
          if (0 < (int)local_594) {
            do {
              if (((this->NumItems < 1) || (this->NumItems <= iVar16)) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NumItems > 0 && Index < NumItems",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                     ,0x100,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                uVar6 = (*pcVar4)();
                return (bool)uVar6;
              }
              iVar7 = this->AllocatedSize - iVar13;
              puVar2 = this->Memory;
              local_578 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
              plVar1 = *(longlong **)&param_1->field_0x8;
              local_590 = 0;
              if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_590,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,&local_590);
                }
              }
              else {
                local_590 = *(uint *)*plVar1;
                *plVar1 = *plVar1 + 4;
              }
              local_548 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
              pUVar3 = *(UScriptStruct **)(puVar2 + (longlong)iVar7 + -0x10);
              if (pUVar3 != (UScriptStruct *)0x0) {
                iVar7 = *(int *)(puVar2 + (longlong)iVar7 + -8);
                puVar2 = this->Memory;
                pFVar10 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                                    (&local_368,param_1);
                FVar11 = FStructuredArchiveFromArchive::GetSlot(pFVar10);
                UScriptStruct::SerializeItem
                          (pUVar3,*(FStructuredArchiveSlot *)FVar11,puVar2 + iVar7,(void *)0x0);
                FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_368);
              }
              uVar12 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
              (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,local_578);
              plVar1 = *(longlong **)&param_1->field_0x8;
              local_590 = (int)uVar12 - (int)local_548;
              if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_590,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,&local_590);
                }
              }
              else {
                local_590 = *(uint *)*plVar1;
                *plVar1 = *plVar1 + 4;
              }
              (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar12);
              iVar16 = iVar16 + 1;
              iVar13 = iVar13 + 0x10;
            } while (iVar16 < (int)local_594);
          }
        }
      }
      else {
        local_588.Data = (FScriptContainerElement *)0x0;
        local_580 = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_594,&local_588,0,(int *)((longlong)&local_580 + 4));
        iVar13 = iVar16;
        if (0 < (int)local_594) {
          do {
            local_570 = (UScriptStruct *)0x0;
            (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_570);
            if (local_570 != (UScriptStruct *)0x0) {
              (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1,local_570);
            }
            local_568.ScriptStruct = local_570;
            local_568.StructMemory = (uchar *)0x0;
            if (((local_588.Data <= &local_568) &&
                (&local_568 <
                 (FConstStructView *)(local_588.Data + (longlong)local_580._4_4_ * 0x10))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            iVar7 = (int)local_580;
            if ((int)local_580 == local_580._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_588,(int *)((longlong)&local_580 + 4));
            }
            iVar13 = iVar13 + 1;
            local_580 = CONCAT44(local_580._4_4_,iVar7 + 1);
            *(UScriptStruct **)&local_588.Data[(longlong)iVar7 * 0x10].field_0x0 =
                 local_568.ScriptStruct;
            *(uchar **)(local_588.Data + (longlong)iVar7 * 0x10 + 8) = local_568.StructMemory;
          } while (iVar13 < (int)local_594);
        }
        Reset(this);
        FMemory::Free(this->Memory);
        iStack_530 = (int)local_580;
        local_538 = (FConstStructView *)local_588.Data;
        this->Memory = (uchar *)0x0;
        this->AllocatedSize = 0;
        if (((int)local_580 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        local_508._12_4_ = uStack_52c;
        local_508.ArrayNum = iStack_530;
        local_508.DataPtr = local_538;
        InsertAt(this,0,&local_508);
        if ((this->NumItems != local_594) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumItems == NumItemsSerialized",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\InstancedStructContainer.cpp"
                               ,0x227,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        if (0 < (int)local_594) {
          local_578 = local_578 & 0xffffffff00000000;
          iVar13 = iVar16;
          iVar7 = iVar16;
          do {
            if (((this->NumItems < 1) || (this->NumItems <= iVar16)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumItems > 0 && Index < NumItems",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                                   ,0x100,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            plVar1 = *(longlong **)&param_1->field_0x8;
            iVar13 = this->AllocatedSize - iVar13;
            local_58c = 0;
            puVar2 = this->Memory;
            if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
              if ((param_1->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)param_1 + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped(param_1,&local_58c);
              }
            }
            else {
              local_58c = *(uint *)*plVar1;
              *plVar1 = *plVar1 + 4;
            }
            pUVar3 = *(UScriptStruct **)(puVar2 + (longlong)iVar13 + -0x10);
            if (pUVar3 == (UScriptStruct *)0x0) {
              if (0 < (int)local_58c) {
                if (2 < (byte)LogCore._0_1_) {
                  lVar8 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                  if (lVar8 != 0) {
                    iVar7 = 1;
                    lVar8 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
                    if (*(UObjectBaseUtility **)(lVar8 + 0xc0) == (UObjectBaseUtility *)0x0) {
                      ::FString::FString(&local_558,L"None");
                    }
                    else {
                      UObjectBaseUtility::GetPathName
                                (*(UObjectBaseUtility **)(lVar8 + 0xc0),&local_558,(UObject *)0x0);
                    }
                  }
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
                  if ((iVar7 != 0) &&
                     (iVar7 = 0,
                     local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                    FMemory::Free(local_558.Data.AllocatorInstance.Data);
                  }
                }
                lVar8 = *(longlong *)param_1;
                lVar15 = (longlong)(int)local_58c;
                lVar9 = (**(code **)(lVar8 + 0x28))(param_1);
                (**(code **)(lVar8 + 0x1b8))(param_1,lVar15 + lVar9);
              }
            }
            else {
              iVar13 = *(int *)(puVar2 + (longlong)iVar13 + -8);
              puVar2 = this->Memory;
              pFVar10 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                                  (&local_4f8,param_1);
              FVar11 = FStructuredArchiveFromArchive::GetSlot(pFVar10);
              UScriptStruct::SerializeItem
                        (pUVar3,*(FStructuredArchiveSlot *)FVar11,puVar2 + iVar13,(void *)0x0);
              FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_4f8);
            }
            iVar16 = iVar16 + 1;
            iVar13 = (int)local_578 + 0x10;
            local_578 = CONCAT44(local_578._4_4_,iVar13);
          } while (iVar16 < (int)local_594);
        }
        if ((FConstStructView *)local_588.Data != (FConstStructView *)0x0) {
          FMemory::Free(local_588.Data);
        }
      }
    }
    bVar5 = true;
  }
  else {
    if (1 < (byte)LogCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    bVar5 = false;
  }
  return bVar5;
}

// SetNum @ 141fa9ba0

void __thiscall FInstancedStructContainer::SetNum(FInstancedStructContainer *this,int param_1)

{
  uchar *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = this->NumItems;
  if (iVar5 <= param_1) {
    this->NumItems = param_1;
    return;
  }
  iVar8 = param_1 << 4;
  iVar7 = param_1;
  do {
    if ((iVar5 < 1) || (iVar5 <= iVar7)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumItems > 0 && Index < NumItems",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStructContainer.h"
                         ,0x100,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = this->Memory;
    lVar6 = (longlong)(this->AllocatedSize - iVar8);
    plVar2 = *(longlong **)(puVar1 + lVar6 + -0x10);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x300))(plVar2,puVar1 + *(int *)(puVar1 + lVar6 + -8),1);
    }
    iVar5 = this->NumItems;
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 0x10;
  } while (iVar7 < iVar5);
  this->NumItems = param_1;
  return;
}


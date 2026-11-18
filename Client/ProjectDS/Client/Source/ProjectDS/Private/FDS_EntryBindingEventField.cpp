// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticStruct @ 14b463550

UScriptStruct * __cdecl FDS_EntryBindingEventField::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_EntryBindingEventField.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_EntryBindingEventField.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_EntryBindingEventField,(UObject *)pUVar1,
                         L"DS_EntryBindingEventField");
  }
  return Z_Registration_Info_UScriptStruct_FDS_EntryBindingEventField.OuterSingleton;
}

// Add @ 14bc87000

void __thiscall
FDS_EntryBindingEventField::Add
          (FDS_EntryBindingEventField *this,TObjectPtr<UDS_UserObjectListItem> param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  int iVar4;
  
  iVar4 = (this->UserObjectList).ArrayNum;
  piVar1 = &(this->UserObjectList).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->UserObjectList).AllocatorInstance.Data;
  (this->UserObjectList).ArrayNum = iVar4 + 1;
  pUVar3 = *(UObject **)param_1.field0_0x0;
  *(UObject **)(pFVar2 + (longlong)iVar4 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return;
}

// GetAt @ 14bc9ed50

TObjectPtr<UDS_UserObjectListItem> __thiscall
FDS_EntryBindingEventField::GetAt(FDS_EntryBindingEventField *this,int param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UDS_UserObjectListItem> TVar4;
  undefined4 in_register_00000014;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar5;
  int in_R8D;
  
  TVar5._4_4_ = in_register_00000014;
  TVar5._0_4_ = param_1;
  if ((in_R8D < 0) || ((this->UserObjectList).ArrayNum <= in_R8D)) {
    (TVar5.DebugPtr)->_padding_ = 0;
  }
  else {
    if (in_R8D < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.field0_0x0 = (TObjectPtr<UDS_UserObjectListItem>_u_0)(*pcVar2)();
        return (TObjectPtr<UDS_UserObjectListItem>)TVar4.field0_0x0;
      }
    }
    pUVar1 = *(UObject **)((this->UserObjectList).AllocatorInstance.Data + (longlong)in_R8D * 8);
    (TVar5.DebugPtr)->_padding_ = (longlong)pUVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
      return (TObjectPtr<UDS_UserObjectListItem>)TVar5;
    }
  }
  return (TObjectPtr<UDS_UserObjectListItem>)TVar5.DebugPtr;
}

// GetUserObjectList @ 14bca25d0

TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_EntryBindingEventField::GetUserObjectList(FDS_EntryBindingEventField *this)

{
  return &this->UserObjectList;
}

// GetUserObjectList @ 14bca25e0

TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> * __thiscall
FDS_EntryBindingEventField::GetUserObjectList(FDS_EntryBindingEventField *this)

{
  return &this->UserObjectList;
}

// Insert @ 14bca6ac0

void __thiscall
FDS_EntryBindingEventField::Insert
          (FDS_EntryBindingEventField *this,TObjectPtr<UDS_UserObjectListItem> param_1,int param_2)

{
  int *piVar1;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  
  iVar6 = (this->UserObjectList).ArrayNum;
  TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(this->UserObjectList).AllocatorInstance.Data;
  if (param_2 < iVar6) {
    iVar6 = param_2;
  }
  iVar8 = 0;
  if (0 < iVar6) {
    iVar8 = iVar6;
  }
  if ((TVar2.DebugPtr <= (ulonglong)param_1.field0_0x0) &&
     ((ulonglong)param_1.field0_0x0 <
      (UDS_UserObjectListItem *)(&(TVar2.DebugPtr)->_padding_ + (this->UserObjectList).ArrayMax))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->UserObjectList).ArrayNum;
  piVar1 = &(this->UserObjectList).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar7 = (this->UserObjectList).AllocatorInstance.Data;
  (this->UserObjectList).ArrayNum = iVar6 + 1;
  pFVar7 = pFVar7 + (longlong)iVar8 * 8;
  memmove(pFVar7 + 8,pFVar7,(longlong)(iVar6 - iVar8) << 3);
  pUVar3 = *(UObject **)param_1.field0_0x0;
  *(UObject **)((this->UserObjectList).AllocatorInstance.Data + (longlong)iVar8 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return;
}

// IsEmpty @ 14bca76b0

bool __thiscall FDS_EntryBindingEventField::IsEmpty(FDS_EntryBindingEventField *this)

{
  return (this->UserObjectList).ArrayNum == 0;
}

// Num @ 14bcaf070

int __thiscall FDS_EntryBindingEventField::Num(FDS_EntryBindingEventField *this)

{
  return (this->UserObjectList).ArrayNum;
}

// RemoveAt @ 14bcc3ca0

void __thiscall FDS_EntryBindingEventField::RemoveAt(FDS_EntryBindingEventField *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  if ((-1 < param_1) && (param_1 < (this->UserObjectList).ArrayNum)) {
    pUVar2 = *(UObject **)((this->UserObjectList).AllocatorInstance.Data + (longlong)param_1 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    (**(code **)(*(longlong *)pUVar2 + 0x2b0))(pUVar2);
    uVar5 = 0;
    if (param_1 < (this->UserObjectList).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->UserObjectList).ArrayNum + ~param_1;
    _Dst = (this->UserObjectList).AllocatorInstance.Data + (longlong)param_1 * 8;
    if (iVar6 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar6 << 3);
    }
    piVar1 = &(this->UserObjectList).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,(this->UserObjectList).ArrayNum,
               &(this->UserObjectList).ArrayMax);
  }
  return;
}

// Reset @ 14bcc42e0

void __thiscall FDS_EntryBindingEventField::Reset(FDS_EntryBindingEventField *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->UserObjectList).ArrayNum;
  pFVar4 = (this->UserObjectList).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    if ((this->UserObjectList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) {
      (this->UserObjectList).ArrayNum = 0;
      if ((this->UserObjectList).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,&(this->UserObjectList).ArrayMax);
      }
      return;
    }
    pUVar3 = *(UObject **)pFVar4;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar3 != (UObject *)0x0) goto LAB_14bcc433c;
    }
    else if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
LAB_14bcc433c:
      (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3);
    }
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// SetUserObjectList @ 14bcc93f0

void __thiscall
FDS_EntryBindingEventField::SetUserObjectList
          (FDS_EntryBindingEventField *this,
          TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *param_1)

{
  Reset(this);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            (&this->UserObjectList,param_1);
  return;
}


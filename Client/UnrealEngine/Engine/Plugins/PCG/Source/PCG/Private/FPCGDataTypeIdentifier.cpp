// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 43

// FPCGDataTypeIdentifier @ 149737b10

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Ids).ArrayMax;
  iVar2 = (param_1->Ids).ArrayNum;
  pFVar3 = (param_1->Ids).AllocatorInstance.Data;
  (this->Ids).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              ((this->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar3,iVar2);
  }
  this->CustomSubtype = param_1->CustomSubtype;
  return this;
}

// ~FPCGDataTypeIdentifier @ 1497e2a20

void __thiscall FPCGDataTypeIdentifier::~FPCGDataTypeIdentifier(FPCGDataTypeIdentifier *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Ids).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator= @ 1497e3710

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator=(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  if (this != param_1) {
    iVar2 = (this->Ids).ArrayMax;
    piVar1 = &(this->Ids).ArrayMax;
    pFVar4 = (param_1->Ids).AllocatorInstance.Data;
    iVar3 = (param_1->Ids).ArrayNum;
    (this->Ids).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                ((this->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar4,iVar3);
    }
  }
  this->CustomSubtype = param_1->CustomSubtype;
  return this;
}

// StaticStruct @ 1498574c0

UScriptStruct * __cdecl FPCGDataTypeIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeIdentifier,(UObject *)pUVar1,
                         L"PCGDataTypeIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataTypeIdentifier.OuterSingleton;
}

// FPCGDataTypeIdentifier @ 14988c500

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
          (FPCGDataTypeIdentifier *this,FPCGDataTypeBaseId *param_1)

{
  this->CustomSubtype = -1;
  (this->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ids).ArrayNum = 0;
  (this->Ids).ArrayMax = 0;
  ComposeFromBaseId(this,param_1);
  return this;
}

// FPCGDataTypeIdentifier @ 14988c530

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
          (FPCGDataTypeIdentifier *this,TSubclassOf<UPCGData> *param_1)

{
  UClass *local_res8 [4];
  
  this->CustomSubtype = -1;
  (this->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ids).ArrayNum = 0;
  (this->Ids).ArrayMax = 0;
  local_res8[0] = (param_1->Class).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8[0]);
  }
  ComposeFromPCGDataSubclass(this,(TSubclassOf<UPCGData>)local_res8);
  return this;
}

// FPCGDataTypeIdentifier @ 14988c580

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(FPCGDataTypeIdentifier *this,EPCGDataType param_1)

{
  TStaticArray<EPCGDataType,23,4294967295> *pTVar1;
  EPCGDataType EVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPCGDataTypeIdentifier *pFVar7;
  FPCGDataTypeBaseId FVar8;
  EPCGDataType *pEVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_38 [2];
  
  this->CustomSubtype = -1;
  (this->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ids).ArrayNum = 0;
  (this->Ids).ArrayMax = 0;
  FPCGDataTypeBaseId::MakeFromLegacyType((EPCGDataType)local_38);
  if (local_38[0].DebugPtr != (UScriptStruct *)0x0) {
    bVar5 = PrepareForCompose(this,(FPCGDataTypeBaseId *)&local_38[0].ObjectPtr);
    if (bVar5) {
      pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(this->Ids).AllocatorInstance.Data;
      if (((pTVar3 <= local_38) && (local_38 < pTVar3 + (this->Ids).ArrayMax)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FPCGDataTypeIdentifier *)(*pcVar4)();
        return pFVar7;
      }
      iVar6 = (this->Ids).ArrayNum;
      if (iVar6 == (this->Ids).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this,&(this->Ids).ArrayMax);
      }
      (this->Ids).ArrayNum = iVar6 + 1;
      ((TObjectPtr<UScriptStruct_const_>_u_0 *)
      ((this->Ids).AllocatorInstance.Data + (longlong)iVar6 * 8))->DebugPtr =
           (UScriptStruct *)local_38[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_38[0].DebugPtr != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_38[0].DebugPtr);
      }
    }
    return this;
  }
  pTVar1 = PCGDataTypeIdentifier::HierarchyDataType + 1;
  local_38[0].DebugPtr = (UScriptStruct *)0x0;
  pEVar9 = PCGDataTypeIdentifier::HierarchyDataType->Elements;
  do {
    if ((TStaticArray<EPCGDataType,23,4294967295> *)pEVar9 == pTVar1) {
      return this;
    }
    EVar2 = *pEVar9;
    if ((EVar2 & param_1) == EVar2) {
      FVar8 = FPCGDataTypeBaseId::MakeFromLegacyType((EPCGDataType)local_res8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)FVar8.Struct.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)FVar8.Struct.field0_0x0);
      }
      local_38[0].DebugPtr = *(UScriptStruct **)FVar8.Struct.field0_0x0;
      if (local_38[0].DebugPtr != (UScriptStruct *)0x0) {
        bVar5 = PrepareForCompose(this,(FPCGDataTypeBaseId *)&local_38[0].ObjectPtr);
        if (bVar5) {
          pTVar3 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(this->Ids).AllocatorInstance.Data;
          if (((pTVar3 <= local_38) && (local_38 < pTVar3 + (this->Ids).ArrayMax)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FPCGDataTypeIdentifier *)(*pcVar4)();
            return pFVar7;
          }
          iVar6 = (this->Ids).ArrayNum;
          if (iVar6 == (this->Ids).ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,&(this->Ids).ArrayMax);
          }
          (this->Ids).ArrayNum = iVar6 + 1;
          ((TObjectPtr<UScriptStruct_const_>_u_0 *)
          ((this->Ids).AllocatorInstance.Data + (longlong)iVar6 * 8))->DebugPtr =
               (UScriptStruct *)local_38[0];
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38[0].DebugPtr != (UScriptStruct *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_38[0].DebugPtr);
          }
        }
        param_1 = param_1 & ~EVar2;
      }
    }
    if (param_1 == None) {
      return this;
    }
    pEVar9 = pEVar9 + 1;
  } while( true );
}

// operator! @ 149893240

bool __thiscall FPCGDataTypeIdentifier::operator!(FPCGDataTypeIdentifier *this)

{
  bool bVar1;
  
  bVar1 = IsValid(this);
  return !bVar1;
}

// operator_enum_EPCGDataType @ 1498934e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
FPCGDataTypeIdentifier::operator_enum_EPCGDataType(FPCGDataTypeIdentifier *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  EPCGDataType EVar3;
  FScriptContainerElement *this_00;
  EPCGDataType EVar4;
  undefined1 local_res8 [8];
  
  this_00 = (this->Ids).AllocatorInstance.Data;
  iVar2 = (this->Ids).ArrayNum;
  EVar4 = None;
  pFVar1 = this_00 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Ids).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    EVar3 = FPCGDataTypeBaseId::AsLegacyType((FPCGDataTypeBaseId *)this_00);
    EVar4 = EVar4 | EVar3;
    this_00 = this_00 + 8;
  }
  return EVar4;
}

// operator& @ 1498935c0

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator&
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  FPCGDataTypeIdentifier *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FPCGDataTypeIdentifier *local_res10;
  TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> local_48;
  
  pFVar12 = (this->Ids).AllocatorInstance.Data;
  iVar3 = (this->Ids).ArrayNum;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar1 = pFVar12 + (longlong)iVar3 * 8;
  local_res10 = __return_storage_ptr__;
  do {
    if ((this->Ids).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pFVar9 = local_res10;
    if (pFVar12 == pFVar1) {
      (local_res10->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_res10->Ids).ArrayNum = 0;
      (local_res10->Ids).ArrayMax = 0;
      local_res10->CustomSubtype = -1;
      if (local_res10 != (FPCGDataTypeIdentifier *)&local_48) {
        (local_res10->Ids).AllocatorInstance.Data = local_48.AllocatorInstance.Data;
        (local_res10->Ids).ArrayNum = local_48.ArrayNum;
        (local_res10->Ids).ArrayMax = local_48.ArrayMax;
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return pFVar9;
    }
    iVar4 = (param_1->Ids).ArrayNum;
    pFVar11 = (param_1->Ids).AllocatorInstance.Data;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FPCGDataTypeIdentifier *)(*pcVar7)();
      return pFVar9;
    }
    pFVar2 = pFVar11 + (longlong)iVar4 * 8;
    for (; pFVar11 != pFVar2; pFVar11 = pFVar11 + 8) {
      lVar5 = *(longlong *)&pFVar12->field_0x0;
      if ((lVar5 == 0) || (lVar6 = *(longlong *)&pFVar11->field_0x0, lVar6 == 0)) {
LAB_14989368c:
        lVar6 = *(longlong *)&pFVar11->field_0x0;
        if ((lVar6 != 0) && (lVar5 != 0)) {
          if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
              lVar5 + 0x30)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          pFVar10 = pFVar11;
          if (bVar8) goto LAB_1498936bd;
        }
      }
      else {
        if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        pFVar10 = pFVar12;
        if (!bVar8) goto LAB_14989368c;
LAB_1498936bd:
        TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FPCGDataTypeBaseId_const_&>(&local_48,(FPCGDataTypeBaseId *)pFVar10);
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// operator& @ 149893750

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator&
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          EPCGDataType param_1)

{
  FPCGDataTypeIdentifier *pFVar1;
  FPCGDataTypeIdentifier local_28;
  
  pFVar1 = FPCGDataTypeIdentifier(&local_28,param_1);
  operator&(this,__return_storage_ptr__,pFVar1);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator| @ 1498997e0

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator|
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  FPCGDataTypeIdentifier *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  
  FPCGDataTypeIdentifier(__return_storage_ptr__,this);
  bVar12 = IsValid(__return_storage_ptr__);
  if (!bVar12) {
    iVar2 = (param_1->Ids).ArrayNum;
    iVar13 = (param_1->Ids).ArrayMax;
    pFVar6 = (__return_storage_ptr__->Ids).AllocatorInstance.Data;
    iVar8 = (__return_storage_ptr__->Ids).ArrayNum;
    iVar9 = (__return_storage_ptr__->Ids).ArrayMax;
    iVar10 = __return_storage_ptr__->CustomSubtype;
    uVar11 = *(undefined4 *)&__return_storage_ptr__->field_0x14;
    (__return_storage_ptr__->Ids).AllocatorInstance.Data = (param_1->Ids).AllocatorInstance.Data;
    (__return_storage_ptr__->Ids).ArrayNum = iVar2;
    (__return_storage_ptr__->Ids).ArrayMax = iVar13;
    uVar7 = *(undefined4 *)&param_1->field_0x14;
    __return_storage_ptr__->CustomSubtype = param_1->CustomSubtype;
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = uVar7;
    (param_1->Ids).AllocatorInstance.Data = pFVar6;
    (param_1->Ids).ArrayNum = iVar8;
    (param_1->Ids).ArrayMax = iVar9;
    param_1->CustomSubtype = iVar10;
    *(undefined4 *)&param_1->field_0x14 = uVar11;
    return __return_storage_ptr__;
  }
  iVar2 = (param_1->Ids).ArrayNum;
  pFVar15 = (param_1->Ids).AllocatorInstance.Data;
  pFVar6 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Ids).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar15 == pFVar6) break;
    bVar12 = PrepareForCompose(__return_storage_ptr__,(FPCGDataTypeBaseId *)pFVar15);
    if (bVar12) {
      pFVar3 = (__return_storage_ptr__->Ids).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar15) &&
         (pFVar15 < pFVar3 + (longlong)(__return_storage_ptr__->Ids).ArrayMax * 8)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FPCGDataTypeIdentifier *)(*pcVar5)();
          return pFVar14;
        }
      }
      iVar13 = (__return_storage_ptr__->Ids).ArrayNum;
      piVar1 = &(__return_storage_ptr__->Ids).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)__return_storage_ptr__,piVar1);
      }
      pFVar3 = (__return_storage_ptr__->Ids).AllocatorInstance.Data;
      (__return_storage_ptr__->Ids).ArrayNum = iVar13 + 1;
      pUVar4 = *(UObject **)&pFVar15->field_0x0;
      *(UObject **)(pFVar3 + (longlong)iVar13 * 8) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    pFVar15 = pFVar15 + 8;
  }
  return __return_storage_ptr__;
}

// operator| @ 149899950

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator|
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FScriptContainerElement *pFVar6;
  
  FPCGDataTypeIdentifier(__return_storage_ptr__,this);
  bVar4 = IsValid(__return_storage_ptr__);
  if (!bVar4) {
    operator=(__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  pFVar6 = (param_1->Ids).AllocatorInstance.Data;
  iVar2 = (param_1->Ids).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar3)();
    return pFVar5;
  }
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
    ComposeFromBaseId(__return_storage_ptr__,(FPCGDataTypeBaseId *)pFVar6);
  }
  return __return_storage_ptr__;
}

// operator| @ 149899a00

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator|
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          EPCGDataType param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  FPCGDataTypeIdentifier *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  FPCGDataTypeIdentifier local_38;
  
  pFVar14 = FPCGDataTypeIdentifier(&local_38,param_1);
  FPCGDataTypeIdentifier(__return_storage_ptr__,this);
  bVar12 = IsValid(__return_storage_ptr__);
  if (bVar12) {
    pFVar15 = (pFVar14->Ids).AllocatorInstance.Data;
    iVar2 = (pFVar14->Ids).ArrayNum;
    pFVar6 = pFVar15 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pFVar14->Ids).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGDataTypeBaseId,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar15 == pFVar6) break;
      bVar12 = PrepareForCompose(__return_storage_ptr__,(FPCGDataTypeBaseId *)pFVar15);
      if (bVar12) {
        pFVar3 = (__return_storage_ptr__->Ids).AllocatorInstance.Data;
        if (((pFVar3 <= pFVar15) &&
            (pFVar15 < pFVar3 + (longlong)(__return_storage_ptr__->Ids).ArrayMax * 8)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FPCGDataTypeIdentifier *)(*pcVar5)();
          return pFVar14;
        }
        iVar13 = (__return_storage_ptr__->Ids).ArrayNum;
        piVar1 = &(__return_storage_ptr__->Ids).ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)__return_storage_ptr__,piVar1);
        }
        pFVar3 = (__return_storage_ptr__->Ids).AllocatorInstance.Data;
        (__return_storage_ptr__->Ids).ArrayNum = iVar13 + 1;
        pUVar4 = *(UObject **)&pFVar15->field_0x0;
        *(UObject **)(pFVar3 + (longlong)iVar13 * 8) = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
      pFVar15 = pFVar15 + 8;
    }
  }
  else {
    iVar2 = (pFVar14->Ids).ArrayNum;
    iVar13 = (pFVar14->Ids).ArrayMax;
    pFVar6 = (__return_storage_ptr__->Ids).AllocatorInstance.Data;
    iVar8 = (__return_storage_ptr__->Ids).ArrayNum;
    iVar9 = (__return_storage_ptr__->Ids).ArrayMax;
    iVar10 = __return_storage_ptr__->CustomSubtype;
    uVar11 = *(undefined4 *)&__return_storage_ptr__->field_0x14;
    (__return_storage_ptr__->Ids).AllocatorInstance.Data = (pFVar14->Ids).AllocatorInstance.Data;
    (__return_storage_ptr__->Ids).ArrayNum = iVar2;
    (__return_storage_ptr__->Ids).ArrayMax = iVar13;
    uVar7 = *(undefined4 *)&pFVar14->field_0x14;
    __return_storage_ptr__->CustomSubtype = pFVar14->CustomSubtype;
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = uVar7;
    (pFVar14->Ids).AllocatorInstance.Data = pFVar6;
    (pFVar14->Ids).ArrayNum = iVar8;
    (pFVar14->Ids).ArrayMax = iVar9;
    pFVar14->CustomSubtype = iVar10;
    *(undefined4 *)&pFVar14->field_0x14 = uVar11;
  }
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator&= @ 149899ba0

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator&=(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  FPCGDataTypeIdentifier *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar12 = (this->Ids).AllocatorInstance.Data;
  iVar2 = (this->Ids).ArrayNum;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar6 = pFVar12 + (longlong)iVar2 * 8;
  do {
    if ((this->Ids).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar12 == pFVar6) {
      if (this != (FPCGDataTypeIdentifier *)&local_38) {
        pFVar6 = (this->Ids).AllocatorInstance.Data;
        if (pFVar6 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar6);
        }
        (this->Ids).AllocatorInstance.Data = local_38.AllocatorInstance.Data;
        (this->Ids).ArrayNum = local_38.ArrayNum;
        (this->Ids).ArrayMax = local_38.ArrayMax;
        local_38.ArrayNum = 0;
        local_38.ArrayMax = 0;
        local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return this;
    }
    if (*(longlong *)&pFVar12->field_0x0 == 0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3543041294110555894>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                         ,0x10a,"ThisID.IsValid()");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        pFVar9 = (FPCGDataTypeIdentifier *)(*pcVar7)();
        return pFVar9;
      }
    }
    else {
      iVar3 = (param_1->Ids).ArrayNum;
      pFVar11 = (param_1->Ids).AllocatorInstance.Data;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        pFVar9 = (FPCGDataTypeIdentifier *)(*pcVar7)();
        return pFVar9;
      }
      pFVar1 = pFVar11 + (longlong)iVar3 * 8;
      for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 8) {
        lVar4 = *(longlong *)&pFVar11->field_0x0;
        if (lVar4 == 0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_3543041294110555887>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                             ,0x111,"OtherID.IsValid()");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pFVar9 = (FPCGDataTypeIdentifier *)(*pcVar7)();
            return pFVar9;
          }
        }
        else {
          lVar5 = *(longlong *)&pFVar12->field_0x0;
          if (lVar5 != 0) {
            if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (pFVar10 = pFVar12,
               *(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
               lVar4 + 0x30)) {
              if (lVar5 != 0) {
                if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
                   (*(longlong **)
                     (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                    (longlong *)(lVar5 + 0x30))) {
                  bVar8 = false;
                }
                else {
                  bVar8 = true;
                }
                pFVar10 = pFVar11;
                if (bVar8) goto LAB_149899d02;
              }
            }
            else {
LAB_149899d02:
              TArray<FPCGDataTypeBaseId,TSizedDefaultAllocator<32>_>::
              AddUniqueImpl<FPCGDataTypeBaseId_const_&>(&local_38,(FPCGDataTypeBaseId *)pFVar10);
            }
          }
        }
      }
    }
    pFVar12 = pFVar12 + 8;
  } while( true );
}

// operator&= @ 149899da0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator&=(FPCGDataTypeIdentifier *this,EPCGDataType param_1)

{
  FScriptContainerElement *pFVar1;
  FPCGDataTypeIdentifier *pFVar2;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
  pFVar2 = FPCGDataTypeIdentifier(&local_20,param_1);
  operator&(this,&local_38,pFVar2);
  if (local_20.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Ids.AllocatorInstance.Data);
  }
  if (this != &local_38) {
    pFVar1 = (this->Ids).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Ids).AllocatorInstance.Data = local_38.Ids.AllocatorInstance.Data;
    (this->Ids).ArrayNum = local_38.Ids.ArrayNum;
    (this->Ids).ArrayMax = local_38.Ids.ArrayMax;
    local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  this->CustomSubtype = local_38.CustomSubtype;
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  return this;
}

// operator|= @ 149899e30

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator|=(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  FPCGDataTypeIdentifier *pFVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  
  bVar12 = IsValid(this);
  if (!bVar12) {
    iVar2 = (param_1->Ids).ArrayNum;
    iVar13 = (param_1->Ids).ArrayMax;
    pFVar6 = (this->Ids).AllocatorInstance.Data;
    iVar8 = (this->Ids).ArrayNum;
    iVar9 = (this->Ids).ArrayMax;
    iVar10 = this->CustomSubtype;
    uVar11 = *(undefined4 *)&this->field_0x14;
    (this->Ids).AllocatorInstance.Data = (param_1->Ids).AllocatorInstance.Data;
    (this->Ids).ArrayNum = iVar2;
    (this->Ids).ArrayMax = iVar13;
    uVar7 = *(undefined4 *)&param_1->field_0x14;
    this->CustomSubtype = param_1->CustomSubtype;
    *(undefined4 *)&this->field_0x14 = uVar7;
    (param_1->Ids).AllocatorInstance.Data = pFVar6;
    (param_1->Ids).ArrayNum = iVar8;
    (param_1->Ids).ArrayMax = iVar9;
    param_1->CustomSubtype = iVar10;
    *(undefined4 *)&param_1->field_0x14 = uVar11;
    return this;
  }
  iVar2 = (param_1->Ids).ArrayNum;
  pFVar15 = (param_1->Ids).AllocatorInstance.Data;
  pFVar6 = pFVar15 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Ids).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar6) break;
    bVar12 = PrepareForCompose(this,(FPCGDataTypeBaseId *)pFVar15);
    if (bVar12) {
      pFVar3 = (this->Ids).AllocatorInstance.Data;
      if ((pFVar3 <= pFVar15) && (pFVar15 < pFVar3 + (longlong)(this->Ids).ArrayMax * 8)) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          pFVar14 = (FPCGDataTypeIdentifier *)(*pcVar5)();
          return pFVar14;
        }
      }
      iVar13 = (this->Ids).ArrayNum;
      piVar1 = &(this->Ids).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)this,piVar1);
      }
      pFVar3 = (this->Ids).AllocatorInstance.Data;
      (this->Ids).ArrayNum = iVar13 + 1;
      pUVar4 = *(UObject **)&pFVar15->field_0x0;
      *(UObject **)(pFVar3 + (longlong)iVar13 * 8) = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    pFVar15 = pFVar15 + 8;
  }
  return this;
}

// operator|= @ 149899f90

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator|=(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FScriptContainerElement *pFVar6;
  
  bVar4 = IsValid(this);
  if (!bVar4) {
    operator=(this,param_1);
    return this;
  }
  pFVar6 = (param_1->Ids).AllocatorInstance.Data;
  iVar2 = (param_1->Ids).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar3)();
    return pFVar5;
  }
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
    ComposeFromBaseId(this,(FPCGDataTypeBaseId *)pFVar6);
  }
  return this;
}

// operator|= @ 14989a030

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator|=(FPCGDataTypeIdentifier *this,EPCGDataType param_1)

{
  undefined8 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FPCGDataTypeIdentifier *pFVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FPCGDataTypeIdentifier local_58;
  FPCGDataTypeIdentifier local_40;
  
  pFVar9 = FPCGDataTypeIdentifier(&local_40,param_1);
  iVar2 = (this->Ids).ArrayNum;
  pFVar3 = (this->Ids).AllocatorInstance.Data;
  local_58.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Ids.ArrayNum = iVar2;
  if (iVar2 == 0) {
    local_58.Ids.ArrayNum = 0;
    local_58.Ids.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)&local_58,iVar2,&local_58.Ids.ArrayMax);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              (local_58.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar3,iVar2);
  }
  iVar2 = local_58.Ids.ArrayNum;
  local_58.CustomSubtype = this->CustomSubtype;
  if (local_58.Ids.ArrayNum != 0) {
    pFVar3 = local_58.Ids.AllocatorInstance.Data + (longlong)local_58.Ids.ArrayNum * 8;
    FVar10.Data = local_58.Ids.AllocatorInstance.Data;
    while( true ) {
      if (local_58.Ids.ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (FVar10.Data == pFVar3) {
        pFVar11 = (pFVar9->Ids).AllocatorInstance.Data;
        iVar2 = (pFVar9->Ids).ArrayNum;
        pFVar3 = pFVar11 + (longlong)iVar2 * 8;
        while( true ) {
          if ((pFVar9->Ids).ArrayNum != iVar2) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FPCGDataTypeBaseId,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res18);
          }
          if (pFVar11 == pFVar3) break;
          bVar7 = PrepareForCompose(&local_58,(FPCGDataTypeBaseId *)pFVar11);
          if (bVar7) {
            if (((local_58.Ids.AllocatorInstance.Data <= pFVar11) &&
                (pFVar11 < local_58.Ids.AllocatorInstance.Data + (longlong)local_58.Ids.ArrayMax * 8
                )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar7)) {
              pcVar5 = (code *)swi(3);
              pFVar9 = (FPCGDataTypeIdentifier *)(*pcVar5)();
              return pFVar9;
            }
            iVar8 = local_58.Ids.ArrayNum;
            if (local_58.Ids.ArrayNum == local_58.Ids.ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,(ForAnyElementType *)&local_58,&local_58.Ids.ArrayMax);
            }
            local_58.Ids.ArrayNum = iVar8 + 1;
            pUVar4 = *(UObject **)pFVar11;
            *(UObject **)(local_58.Ids.AllocatorInstance.Data + (longlong)iVar8 * 8) = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar4);
            }
          }
          pFVar11 = pFVar11 + 8;
        }
        goto LAB_14989a205;
      }
      if (*(longlong *)FVar10.Data == 0) break;
      FVar10.Data = FVar10.Data + 8;
    }
  }
  pFVar3 = (pFVar9->Ids).AllocatorInstance.Data;
  uVar6._0_4_ = (pFVar9->Ids).ArrayNum;
  uVar6._4_4_ = (pFVar9->Ids).ArrayMax;
  uVar1._0_4_ = pFVar9->CustomSubtype;
  uVar1._4_4_ = *(undefined4 *)&pFVar9->field_0x14;
  (pFVar9->Ids).AllocatorInstance.Data = local_58.Ids.AllocatorInstance.Data;
  (pFVar9->Ids).ArrayNum = local_58.Ids.ArrayNum;
  (pFVar9->Ids).ArrayMax = local_58.Ids.ArrayMax;
  pFVar9->CustomSubtype = local_58.CustomSubtype;
  *(undefined4 *)&pFVar9->field_0x14 = local_58._20_4_;
  local_58.Ids.AllocatorInstance.Data = pFVar3;
  local_58.Ids._8_8_ = uVar6;
  local_58._16_8_ = uVar1;
LAB_14989a205:
  if (local_40.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Ids.AllocatorInstance.Data);
  }
  if (this != &local_58) {
    pFVar3 = (this->Ids).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->Ids).AllocatorInstance.Data = local_58.Ids.AllocatorInstance.Data;
    (this->Ids).ArrayNum = local_58.Ids.ArrayNum;
    (this->Ids).ArrayMax = local_58.Ids.ArrayMax;
    local_58.Ids.ArrayNum = 0;
    local_58.Ids.ArrayMax = 0;
    local_58.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  this->CustomSubtype = local_58.CustomSubtype;
  if (local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Ids.AllocatorInstance.Data);
  }
  return this;
}

// Compose @ 1498a1900

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::Compose
          (FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          FPCGDataTypeIdentifier *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined1 *puVar3;
  FPCGDataTypeRegistry *this_00;
  longlong lVar4;
  TArrayView<FPCGDataTypeIdentifier_const_,int> local_58;
  FPCGDataTypeIdentifier local_48;
  ForAnyElementType local_30;
  int local_28;
  int local_24;
  int local_20;
  
  iVar1 = (this->Ids).ArrayNum;
  pFVar2 = (this->Ids).AllocatorInstance.Data;
  local_48.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Ids.ArrayNum = iVar1;
  if (iVar1 == 0) {
    local_48.Ids.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Ids.ArrayMax);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              (local_48.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)pFVar2,iVar1);
  }
  iVar1 = (param_1->Ids).ArrayNum;
  local_48.CustomSubtype = this->CustomSubtype;
  pFVar2 = (param_1->Ids).AllocatorInstance.Data;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28 = iVar1;
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_30,iVar1,&local_24);
    ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
              (local_30.Data,(FPCGDataTypeBaseId *)pFVar2,iVar1);
  }
  local_20 = param_1->CustomSubtype;
  lVar4 = 2;
  local_58.DataPtr = &local_48;
  local_58.ArrayNum = 2;
  this_00 = FPCGModule::GetConstDataTypeRegistry();
  FPCGDataTypeRegistry::GetIdentifiersComposition(this_00,__return_storage_ptr__,&local_58);
  puVar3 = (undefined1 *)register0x00000020;
  do {
    lVar4 = lVar4 + -1;
    if (*(void **)(puVar3 + -0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(puVar3 + -0x30));
    }
    puVar3 = puVar3 + -0x18;
  } while (lVar4 != 0);
  return __return_storage_ptr__;
}

// Compose @ 1498a1a60

FPCGDataTypeIdentifier * __cdecl
FPCGDataTypeIdentifier::Compose
          (FPCGDataTypeIdentifier *__return_storage_ptr__,
          TArrayView<FPCGDataTypeIdentifier_const_,int> *param_1)

{
  FPCGDataTypeRegistry *this;
  TArrayView<FPCGDataTypeIdentifier_const_,int> local_18;
  
  this = FPCGModule::GetConstDataTypeRegistry();
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FPCGDataTypeRegistry::GetIdentifiersComposition(this,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// ComposeFromBaseId @ 1498a1ab0

void __thiscall
FPCGDataTypeIdentifier::ComposeFromBaseId(FPCGDataTypeIdentifier *this,FPCGDataTypeBaseId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = PrepareForCompose(this,param_1);
  if (bVar5) {
    pFVar2 = (this->Ids).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Ids).ArrayMax * 8)) {
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
    iVar6 = (this->Ids).ArrayNum;
    piVar1 = &(this->Ids).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    pFVar2 = (this->Ids).AllocatorInstance.Data;
    (this->Ids).ArrayNum = iVar6 + 1;
    pUVar3 = (param_1->Struct).field0_0x0.DebugPtr;
    *(UScriptStruct **)(pFVar2 + (longlong)iVar6 * 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  return;
}

// ComposeFromBaseId @ 1498a1b80

void __thiscall
FPCGDataTypeIdentifier::ComposeFromBaseId(FPCGDataTypeIdentifier *this,FPCGDataTypeBaseId *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  bVar5 = PrepareForCompose(this,param_1);
  if (bVar5) {
    pFVar2 = (this->Ids).AllocatorInstance.Data;
    if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->Ids).ArrayMax * 8)) {
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
    iVar6 = (this->Ids).ArrayNum;
    piVar1 = &(this->Ids).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    pFVar2 = (this->Ids).AllocatorInstance.Data;
    (this->Ids).ArrayNum = iVar6 + 1;
    pUVar3 = (param_1->Struct).field0_0x0.DebugPtr;
    *(UScriptStruct **)(pFVar2 + (longlong)iVar6 * 8) = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  return;
}

// ComposeFromLegacyType @ 1498a1c50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

void __thiscall
FPCGDataTypeIdentifier::ComposeFromLegacyType(FPCGDataTypeIdentifier *this,EPCGDataType param_1)

{
  TStaticArray<EPCGDataType,23,4294967295> *pTVar1;
  EPCGDataType EVar2;
  FPCGDataTypeBaseId FVar3;
  EPCGDataType *pEVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_res18;
  undefined1 local_res20 [8];
  
  FPCGDataTypeBaseId::MakeFromLegacyType((EPCGDataType)&local_res18);
  if (local_res18.DebugPtr != (UScriptStruct *)0x0) {
    ComposeFromBaseId(this,(FPCGDataTypeBaseId *)&local_res18.ObjectPtr);
    return;
  }
  pTVar1 = PCGDataTypeIdentifier::HierarchyDataType + 1;
  local_res18.DebugPtr = (UScriptStruct *)0x0;
  pEVar4 = PCGDataTypeIdentifier::HierarchyDataType->Elements;
  while( true ) {
    if ((TStaticArray<EPCGDataType,23,4294967295> *)pEVar4 == pTVar1) {
      return;
    }
    EVar2 = *pEVar4;
    if ((EVar2 & param_1) == EVar2) {
      FVar3 = FPCGDataTypeBaseId::MakeFromLegacyType((EPCGDataType)local_res20);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)FVar3.Struct.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)FVar3.Struct.field0_0x0);
      }
      local_res18.DebugPtr = *(UScriptStruct **)FVar3.Struct.field0_0x0;
      if (local_res18.DebugPtr != (UScriptStruct *)0x0) {
        ComposeFromBaseId(this,(FPCGDataTypeBaseId *)&local_res18.ObjectPtr);
        param_1 = param_1 & ~EVar2;
      }
    }
    if (param_1 == None) break;
    pEVar4 = pEVar4 + 1;
  }
  return;
}

// ComposeFromPCGDataSubclass @ 1498a1d30

void __thiscall
FPCGDataTypeIdentifier::ComposeFromPCGDataSubclass
          (FPCGDataTypeIdentifier *this,TSubclassOf<UPCGData> param_1)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FPCGDataTypeBaseId *pFVar7;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UPCGData_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UPCGData_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
      goto LAB_1498a1dc8;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_1498a1dc8:
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar3 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = Z_Construct_UClass_UPCGData_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = (FPCGDataTypeBaseId *)(**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3);
  ComposeFromBaseId(this,pFVar7);
  return;
}

// Construct @ 1498a2540

FPCGDataTypeIdentifier * __cdecl
FPCGDataTypeIdentifier::Construct
          (FPCGDataTypeIdentifier *__return_storage_ptr__,
          TArrayView<FPCGDataTypeIdentifier_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FScriptContainerElement *pFVar6;
  FPCGDataTypeIdentifier *pFVar7;
  
  pFVar7 = param_1->DataPtr;
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).ArrayNum = 0;
  (__return_storage_ptr__->Ids).ArrayMax = 0;
  iVar2 = param_1->ArrayNum;
  __return_storage_ptr__->CustomSubtype = -1;
  pFVar5 = pFVar7 + iVar2;
  while( true ) {
    if (pFVar7 == pFVar5) {
      return __return_storage_ptr__;
    }
    iVar2 = (pFVar7->Ids).ArrayNum;
    pFVar6 = (pFVar7->Ids).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) break;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      ComposeFromBaseId(__return_storage_ptr__,(FPCGDataTypeBaseId *)pFVar6);
    }
    pFVar7 = pFVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar3)();
  return pFVar5;
}

// Construct @ 1498a2610

FPCGDataTypeIdentifier * __cdecl
FPCGDataTypeIdentifier::Construct
          (FPCGDataTypeIdentifier *__return_storage_ptr__,
          TArrayView<TSubclassOf<UPCGData>_const_,int> *param_1)

{
  TSubclassOf<UPCGData> *pTVar1;
  int iVar2;
  TObjectPtr<UClass>_u_0 TVar3;
  TObjectPtr<UClass>_u_0 *pTVar4;
  TObjectPtr<UClass>_u_0 local_res8;
  
  pTVar4 = (TObjectPtr<UClass>_u_0 *)param_1->DataPtr;
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).ArrayNum = 0;
  (__return_storage_ptr__->Ids).ArrayMax = 0;
  iVar2 = param_1->ArrayNum;
  __return_storage_ptr__->CustomSubtype = -1;
  pTVar1 = (TSubclassOf<UPCGData> *)(pTVar4 + iVar2);
  for (; pTVar4 != (TObjectPtr<UClass>_u_0 *)pTVar1; pTVar4 = pTVar4 + 1) {
    TVar3 = (TObjectPtr<UClass>_u_0)pTVar4->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3 != (TObjectPtr<UClass>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    local_res8 = TVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar3.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    ComposeFromPCGDataSubclass(__return_storage_ptr__,(TSubclassOf<UPCGData>)&local_res8);
  }
  return __return_storage_ptr__;
}

// GetId @ 1498ba1b0

FPCGDataTypeBaseId __thiscall FPCGDataTypeIdentifier::GetId(FPCGDataTypeIdentifier *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGDataTypeBaseId FVar4;
  TObjectPtr<UScriptStruct_const_> in_RDX;
  
  if ((1 < (this->Ids).ArrayNum) || (bVar3 = IsValid(this), !bVar3)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3543041294110555790>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                       ,0x172,"!IsComposition() && IsValid()");
    if (!bVar3) {
      *(undefined8 *)in_RDX.field0_0x0 = 0;
      return (FPCGDataTypeBaseId)in_RDX.field0_0x0.DebugPtr;
    }
    pcVar2 = (code *)swi(3);
    FVar4.Struct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>)(*pcVar2)();
    return (FPCGDataTypeBaseId)FVar4.Struct.field0_0x0;
  }
  if (((this->Ids).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar4.Struct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>)(*pcVar2)();
    return (FPCGDataTypeBaseId)FVar4.Struct.field0_0x0;
  }
  pUVar1 = *(UObject **)(this->Ids).AllocatorInstance.Data;
  *(UObject **)in_RDX.field0_0x0 = pUVar1;
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    return (FPCGDataTypeBaseId)in_RDX.field0_0x0.DebugPtr;
  }
  if (pUVar1 == (UObject *)0x0) {
    return (FPCGDataTypeBaseId)in_RDX.field0_0x0.DebugPtr;
  }
  UE::GC::MarkAsReachable(pUVar1);
  return (FPCGDataTypeBaseId)in_RDX.field0_0x0;
}

// GetIds @ 1498ba370

TArrayView<FPCGDataTypeBaseId_const_,int> * __thiscall
FPCGDataTypeIdentifier::GetIds
          (FPCGDataTypeIdentifier *this,
          TArrayView<FPCGDataTypeBaseId_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FPCGDataTypeBaseId_const_,int> *pTVar4;
  
  iVar1 = (this->Ids).ArrayNum;
  __return_storage_ptr__->DataPtr = (FPCGDataTypeBaseId *)(this->Ids).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FPCGDataTypeBaseId_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Intersects @ 1498d0960

bool __thiscall
FPCGDataTypeIdentifier::Intersects(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  
  pFVar11 = (this->Ids).AllocatorInstance.Data;
  iVar3 = (this->Ids).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 8;
  do {
    if ((this->Ids).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      return false;
    }
    iVar4 = (param_1->Ids).ArrayNum;
    pFVar10 = (param_1->Ids).AllocatorInstance.Data;
    if ((iVar4 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar2 = pFVar10 + (longlong)iVar4 * 8;
    if (pFVar10 != pFVar2) {
      lVar5 = *(longlong *)pFVar11;
      do {
        if (lVar5 == 0) {
LAB_1498d0a13:
          lVar6 = *(longlong *)pFVar10;
          if ((lVar6 != 0) && (lVar5 != 0)) {
            if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              return true;
            }
          }
        }
        else {
          lVar6 = *(longlong *)pFVar10;
          if (lVar6 != 0) {
            if ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
                lVar6 + 0x30)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              return true;
            }
            goto LAB_1498d0a13;
          }
        }
        pFVar10 = pFVar10 + 8;
      } while (pFVar10 != pFVar2);
    }
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// IsChildOf @ 1498d0da0

bool __thiscall
FPCGDataTypeIdentifier::IsChildOf(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  FPCGDataTypeBaseId FVar4;
  FPCGDataTypeBaseId FVar5;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_28;
  
  if (((this->Ids).ArrayNum < 2) && ((param_1->Ids).ArrayNum < 2)) {
    FVar4 = GetId(this);
    FVar5 = GetId(param_1);
    lVar1 = *(longlong *)FVar4.Struct.field0_0x0;
    if ((lVar1 != 0) && (lVar2 = *(longlong *)FVar5.Struct.field0_0x0, lVar2 != 0)) {
      if ((*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return true;
      }
    }
    return false;
  }
  this_00 = operator&(this,&local_28,param_1);
  bVar3 = IsValid(this_00);
  if (bVar3) {
LAB_1498d0e4d:
    if ((this_00->Ids).ArrayNum == (this->Ids).ArrayNum) {
      bVar3 = SupportsType(this_00,this);
      if (bVar3) goto LAB_1498d0e64;
    }
    bVar3 = false;
  }
  else {
    bVar3 = IsValid(this);
    if (bVar3) goto LAB_1498d0e4d;
LAB_1498d0e64:
    bVar3 = true;
  }
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsIdentical @ 1498d0ec0

bool __thiscall
FPCGDataTypeIdentifier::IsIdentical(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  bool bVar1;
  
  bVar1 = IsValid(this);
  if ((bVar1) || (bVar1 = IsValid(param_1), bVar1)) {
    if ((this->Ids).ArrayNum != (param_1->Ids).ArrayNum) {
      return false;
    }
    bVar1 = SupportsType(this,param_1);
    if (!bVar1) {
      return false;
    }
  }
  if (this->CustomSubtype != param_1->CustomSubtype) {
    return false;
  }
  return true;
}

// IsSameType @ 1498d0f30

bool __thiscall
FPCGDataTypeIdentifier::IsSameType(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  bool bVar1;
  
  bVar1 = IsValid(this);
  if ((!bVar1) && (bVar1 = IsValid(param_1), !bVar1)) {
    return true;
  }
  if (((this->Ids).ArrayNum == (param_1->Ids).ArrayNum) &&
     (bVar1 = SupportsType(this,param_1), bVar1)) {
    return true;
  }
  return false;
}

// IsValid @ 1498d1090

bool __thiscall FPCGDataTypeIdentifier::IsValid(FPCGDataTypeIdentifier *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Ids).ArrayNum;
  if (iVar2 != 0) {
    pFVar3 = (this->Ids).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Ids).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if (*(longlong *)pFVar3 == 0) break;
      pFVar3 = pFVar3 + 8;
    }
  }
  return false;
}

// IsWider @ 1498d1190

bool __thiscall
FPCGDataTypeIdentifier::IsWider(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  undefined1 local_res18 [8];
  FPCGDataTypeIdentifier local_28;
  
  bVar2 = IsValid(this);
  if (((!bVar2) && (bVar2 = IsValid(param_1), !bVar2)) ||
     (((this->Ids).ArrayNum == (param_1->Ids).ArrayNum &&
      (bVar2 = SupportsType(this,param_1), bVar2)))) {
    return false;
  }
  operator&(this,&local_28,param_1);
  iVar3 = local_28.Ids.ArrayNum;
  local_28.Ids.ArrayNum = iVar3;
  if (iVar3 != 0) {
    pFVar1 = local_28.Ids.AllocatorInstance.Data + (longlong)iVar3 * 8;
    uVar5 = local_28.Ids._8_8_;
    FVar6.Data = local_28.Ids.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar3) {
        `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        uVar5 = local_28.Ids._8_8_;
      }
      iVar4 = (int)uVar5;
      if (FVar6.Data == pFVar1) goto LAB_1498d123d;
      if (*(longlong *)FVar6.Data == 0) break;
      FVar6.Data = FVar6.Data + 8;
    }
  }
  bVar2 = IsValid(this);
  iVar4 = local_28.Ids.ArrayNum;
  if (bVar2) {
LAB_1498d123d:
    if ((iVar4 != (this->Ids).ArrayNum) || (bVar2 = SupportsType(&local_28,this), !bVar2)) {
      bVar2 = true;
      goto LAB_1498d1259;
    }
  }
  bVar2 = false;
LAB_1498d1259:
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return bVar2;
}

// PrepareForCompose @ 1498d2d50

bool __thiscall
FPCGDataTypeIdentifier::PrepareForCompose(FPCGDataTypeIdentifier *this,FPCGDataTypeBaseId *param_1)

{
  int *piVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FPCGDataTypeBaseId *pFVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  
  if ((param_1->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
LAB_1498d2f55:
    bVar7 = false;
  }
  else {
    pFVar10 = FPCGDataTypeInfo::AsId();
    if ((param_1->Struct).field0_0x0.DebugPtr == (pFVar10->Struct).field0_0x0.DebugPtr) {
      (this->Ids).ArrayNum = 0;
      if ((this->Ids).ArrayMax != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,1,(ForAnyElementType *)this,0,&(this->Ids).ArrayMax);
        return true;
      }
    }
    else {
      uVar12 = (this->Ids).ArrayNum - 1;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 * 8;
        do {
          uVar9 = 0;
          if ((int)uVar12 < (this->Ids).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pUVar3 = (param_1->Struct).field0_0x0.DebugPtr;
          pFVar4 = (this->Ids).AllocatorInstance.Data;
          bVar7 = true;
          if (pUVar3 == (UScriptStruct *)0x0) {
LAB_1498d2e6c:
            lVar5 = *(longlong *)(pFVar4 + lVar13);
            if ((lVar5 != 0) && (pUVar3 != (UScriptStruct *)0x0)) {
              iVar2 = (int)pUVar3->_padding_;
              if ((*(int *)(lVar5 + 0x38) < iVar2) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar3->_padding_)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                uVar9 = 0;
                if ((int)uVar12 < (this->Ids).ArrayNum) {
                  uVar9 = ~uVar12 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  uVar8 = (*pcVar6)();
                  return (bool)uVar8;
                }
                iVar2 = (this->Ids).ArrayNum;
                pFVar4 = (this->Ids).AllocatorInstance.Data;
                iVar11 = ~uVar12 + iVar2;
                if (1 < iVar11) {
                  iVar11 = 1;
                }
                if (iVar11 != 0) {
                  memmove(pFVar4 + (longlong)(int)uVar12 * 8,pFVar4 + (longlong)(iVar2 - iVar11) * 8
                          ,(longlong)iVar11 << 3);
                }
                piVar1 = &(this->Ids).ArrayNum;
                *piVar1 = *piVar1 + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,(ForAnyElementType *)this,(this->Ids).ArrayNum,&(this->Ids).ArrayMax)
                ;
              }
            }
          }
          else {
            lVar5 = *(longlong *)(pFVar4 + lVar13);
            if (lVar5 != 0) {
              if (((int)pUVar3->_padding_ < *(int *)(lVar5 + 0x38)) ||
                 (*(longlong *)(pUVar3->_padding_ + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                  lVar5 + 0x30)) {
                bVar7 = false;
              }
              if (!bVar7) goto LAB_1498d2e6c;
              goto LAB_1498d2f55;
            }
          }
          lVar13 = lVar13 + -8;
          uVar12 = uVar12 - 1;
        } while (-1 < (int)uVar12);
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

// SerializeFromMismatchedTag @ 1498de9a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeIdentifier::SerializeFromMismatchedTag
          (FPCGDataTypeIdentifier *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  undefined1 uVar5;
  UEnum *this_00;
  FString *pFVar6;
  size_t sVar7;
  long64 lVar8;
  int iVar9;
  FPropertyTypeName local_res10 [4];
  FName local_res20;
  FScriptContainerElement *local_68;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  FString local_48;
  FPCGDataTypeIdentifier local_38;
  
  this_00 = StaticEnum<enum_EPCGDataType>();
  if ((this_00 == (UEnum *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Enum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\Registry\\PCGDataTypeIdentifier.cpp"
                         ,0x1ab,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  bVar4 = UE::FPropertyTypeName::IsEnum(local_res10,(FName)this_00->_padding_);
  if (!bVar4) {
    return false;
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_2 + 8),&local_res20);
  if (local_res20 == (FName)0x0) {
    return true;
  }
  pFVar6 = ::FName::ToString(&local_res20,&local_48);
  iVar9 = 0;
  if ((pFVar6->Data).ArrayNum == 0) {
    local_68 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_68 = (pFVar6->Data).AllocatorInstance.Data;
    if (local_68 == (FScriptContainerElement *)0x0) goto LAB_1498dea77;
  }
  sVar7 = wcslen((wchar_t *)local_68);
  iVar9 = (int)sVar7;
LAB_1498dea77:
  local_58._12_4_ = uStack_5c;
  local_58.Size = iVar9;
  local_58.DataPtr = (wchar_t *)local_68;
  lVar8 = UEnum::GetValueOrBitfieldFromString(this_00,&local_58,None);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (lVar8 != -1) {
    FPCGDataTypeIdentifier(&local_38,(EPCGDataType)lVar8);
    FVar3.Data = local_38.Ids.AllocatorInstance.Data;
    if ((local_38.Ids.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar9 = (this->Ids).ArrayMax;
    piVar1 = &(this->Ids).ArrayMax;
    (this->Ids).ArrayNum = local_38.Ids.ArrayNum;
    if ((local_38.Ids.ArrayNum == 0) && (iVar9 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_38.Ids.ArrayNum,iVar9,(ForAnyElementType *)this,local_38.Ids.ArrayNum,
                 piVar1);
      ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                ((this->Ids).AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar3.Data,
                 local_38.Ids.ArrayNum);
    }
    if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Ids.AllocatorInstance.Data);
    }
  }
  return true;
}

// SupportsType @ 1498f6cf0

bool __thiscall
FPCGDataTypeIdentifier::SupportsType(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  
  bVar5 = IsValid(this);
  if (!bVar5) {
    return false;
  }
  pFVar9 = (param_1->Ids).AllocatorInstance.Data;
  iVar2 = (param_1->Ids).ArrayNum;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  if (pFVar9 != pFVar1) {
    pFVar3 = (this->Ids).AllocatorInstance.Data;
    lVar7 = (longlong)(this->Ids).ArrayNum;
    if (pFVar3 == pFVar3 + lVar7 * 8) {
      return false;
    }
    do {
      pFVar8 = pFVar3;
      while (*(longlong *)pFVar8 != *(longlong *)pFVar9) {
        pFVar8 = pFVar8 + 8;
        if (pFVar8 == pFVar3 + lVar7 * 8) {
          return false;
        }
      }
      pFVar9 = pFVar9 + 8;
    } while (pFVar9 != pFVar1);
  }
  return true;
}

// SupportsType @ 1498f6db0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeIdentifier::SupportsType(FPCGDataTypeIdentifier *this,EPCGDataType param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  ForAnyElementType FVar6;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
  FPCGDataTypeIdentifier(&local_38,param_1);
  if (local_38.Ids.ArrayNum < 2) {
    pFVar5 = FPCGDataTypeIdentifier(&local_20,param_1);
    bVar2 = SupportsType(this,pFVar5);
    if (local_20.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Ids.AllocatorInstance.Data);
    }
  }
  else {
    if (local_38.Ids.AllocatorInstance.Data !=
        local_38.Ids.AllocatorInstance.Data + (longlong)local_38.Ids.ArrayNum * 8) {
      pFVar1 = (this->Ids).AllocatorInstance.Data;
      lVar3 = (longlong)(this->Ids).ArrayNum;
      FVar6.Data = local_38.Ids.AllocatorInstance.Data;
      if (pFVar1 == pFVar1 + lVar3 * 8) {
LAB_1498f6e12:
        bVar2 = false;
        goto LAB_1498f6e5a;
      }
      do {
        pFVar4 = pFVar1;
        while (*(longlong *)pFVar4 != *(longlong *)FVar6.Data) {
          pFVar4 = pFVar4 + 8;
          if (pFVar4 == pFVar1 + lVar3 * 8) goto LAB_1498f6e12;
        }
        FVar6.Data = FVar6.Data + 8;
      } while (FVar6.Data !=
               local_38.Ids.AllocatorInstance.Data + (longlong)local_38.Ids.ArrayNum * 8);
    }
    bVar2 = true;
  }
LAB_1498f6e5a:
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Ids.AllocatorInstance.Data);
  }
  return bVar2;
}

// ToDisplayText @ 1498f7a60

FText * __thiscall
FPCGDataTypeIdentifier::ToDisplayText(FPCGDataTypeIdentifier *this,FText *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FScriptContainerElement *this_00;
  int iVar6;
  undefined4 local_res10 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10[0] = 0;
  bVar4 = IsValid(this);
  if (bVar4) {
    this_00 = (this->Ids).AllocatorInstance.Data;
    iVar2 = (this->Ids).ArrayNum;
    bVar4 = true;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = this_00 + (longlong)iVar2 * 8;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    while( true ) {
      if ((this->Ids).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar1) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_68,L" | ",3);
      }
      FPCGDataTypeBaseId::ToString((FPCGDataTypeBaseId *)this_00,&local_48);
      iVar6 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 8;
    }
    pFVar5 = &local_68;
    bVar3 = true;
    bVar4 = false;
  }
  else {
    pFVar5 = ::FString::FString(&local_38,L"None");
    bVar3 = false;
    bVar4 = true;
  }
  local_58.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_58.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  FText::FromString(__return_storage_ptr__,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 1498f8440

FString * __thiscall
FPCGDataTypeIdentifier::ToString(FPCGDataTypeIdentifier *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  FScriptContainerElement *this_00;
  int iVar6;
  undefined4 local_res10 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res10[0] = 0;
  bVar4 = IsValid(this);
  if (bVar4) {
    this_00 = (this->Ids).AllocatorInstance.Data;
    iVar2 = (this->Ids).ArrayNum;
    bVar4 = true;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = this_00 + (longlong)iVar2 * 8;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    while( true ) {
      if ((this->Ids).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (this_00 == pFVar1) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_58,L" | ",3);
      }
      FPCGDataTypeBaseId::ToString((FPCGDataTypeBaseId *)this_00,&local_48);
      iVar6 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      this_00 = this_00 + 8;
    }
    pFVar5 = &local_58;
    bVar3 = true;
    bVar4 = false;
  }
  else {
    pFVar5 = ::FString::FString(&local_38,L"None");
    bVar3 = false;
    bVar4 = true;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator= @ 1499c75c0

FPCGDataTypeIdentifier * __thiscall
FPCGDataTypeIdentifier::operator=(FPCGDataTypeIdentifier *this,FPCGDataTypeIdentifier *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    pFVar1 = (this->Ids).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->Ids).AllocatorInstance.Data = (param_1->Ids).AllocatorInstance.Data;
    (param_1->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Ids).ArrayNum = (param_1->Ids).ArrayNum;
    (this->Ids).ArrayMax = (param_1->Ids).ArrayMax;
    (param_1->Ids).ArrayNum = 0;
    (param_1->Ids).ArrayMax = 0;
  }
  this->CustomSubtype = param_1->CustomSubtype;
  return this;
}

// operator== @ 149f95590

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGDataTypeIdentifier::operator==(FPCGDataTypeIdentifier *this,EPCGDataType param_1)

{
  bool bVar1;
  FPCGDataTypeIdentifier *pFVar2;
  FPCGDataTypeIdentifier local_28;
  
  pFVar2 = FPCGDataTypeIdentifier(&local_28,param_1);
  bVar1 = IsSameType(this,pFVar2);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return bVar1;
}


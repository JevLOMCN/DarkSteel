// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPinTypeScopeHelper @ 149d340e0

FPinTypeScopeHelper * __thiscall
PCGSettingsHelpers::FPinTypeScopeHelper::FPinTypeScopeHelper(FPinTypeScopeHelper *this)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  this->bClearMapOnDestruction = false;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  if (*(char *)(lVar1 + 0x90b0) == '\0') {
    this->bClearMapOnDestruction = true;
    *(undefined1 *)(lVar1 + 0x90b0) = 1;
  }
  return this;
}

// ~FPinTypeScopeHelper @ 149d34e50

void __thiscall
PCGSettingsHelpers::FPinTypeScopeHelper::~FPinTypeScopeHelper(FPinTypeScopeHelper *this)

{
  longlong lVar1;
  TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *this_00;
  
  if (this->bClearMapOnDestruction != false) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    this_00 = (TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
               *)(lVar1 + 0x90b8);
    if (*(int *)(lVar1 + 0x9630) < 0x11) {
      TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::UnhashElements(this_00);
      TSparseArray<TSparseSetElement<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
               *)this_00,0);
    }
    else {
      TSparseArray<TSparseSetElement<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>_>,TInlineSparseArrayAllocator<32,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
               *)this_00,0);
      *(undefined4 *)(lVar1 + 0x9630) = 0x10;
      TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Rehash(this_00);
    }
    *(undefined1 *)(lVar1 + 0x90b0) = 0;
  }
  return;
}

// GetCurrentPinType @ 149d4efb0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
PCGSettingsHelpers::FPinTypeScopeHelper::GetCurrentPinType
          (FPinTypeScopeHelper *this,UPCGPin *param_1)

{
  EPCGDataType EVar1;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier local_28;
  
  this_00 = GetCurrentPinTypeID(this,&local_28,param_1);
  EVar1 = FPCGDataTypeIdentifier::operator_enum_EPCGDataType(this_00);
  if (local_28.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Ids.AllocatorInstance.Data);
  }
  return EVar1;
}

// GetCurrentPinTypeID @ 149d4eff0

FPCGDataTypeIdentifier * __thiscall
PCGSettingsHelpers::FPinTypeScopeHelper::GetCurrentPinTypeID
          (FPinTypeScopeHelper *this,FPCGDataTypeIdentifier *__return_storage_ptr__,UPCGPin *param_1
          )

{
  longlong lVar1;
  code *pcVar2;
  UPCGPin *this_00;
  bool bVar3;
  int iVar4;
  FPCGDataTypeIdentifier *pFVar5;
  uint uVar6;
  TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  *pTVar7;
  FPCGDataTypeIdentifier *pFVar8;
  ulonglong uVar9;
  UPCGPin *local_res18 [2];
  UPCGPin *local_48;
  UPCGPin **local_40;
  FPCGDataTypeIdentifier *local_38;
  FPCGDataTypeIdentifier local_30;
  
  uVar9 = (ulonglong)_tls_index;
  local_res18[0] = param_1;
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x90b0) == '\0')
     && (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_9129684162880470487>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Helpers\\PCGSettingsHelpers.cpp"
                            ,0x229,"bVisitedPinsMapExists"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar5;
  }
  this_00 = local_res18[0];
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8);
  if (*(char *)(lVar1 + 0x90b0) != '\0') {
    uVar6 = ((uint)((ulonglong)local_res18[0] >> 0x14) & 0xffff ^
            (uint)((ulonglong)local_res18[0] >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    local_48 = local_res18[0];
    iVar4 = TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ::FindIndexByHash<UPCGPin_const_*>
                      ((TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                        *)(lVar1 + 0x90b8),uVar6 >> 0x10 ^ uVar6,&local_48);
    pFVar5 = (FPCGDataTypeIdentifier *)0x0;
    if (iVar4 != -1) {
      pTVar7 = *(TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                 **)(lVar1 + 0x95b8);
      if (*(TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            **)(lVar1 + 0x95b8) ==
          (TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
           *)0x0) {
        pTVar7 = (TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *)(lVar1 + 0x90b8);
      }
      pFVar5 = (FPCGDataTypeIdentifier *)(&(pTVar7->Elements).field_0x0 + (longlong)iVar4 * 0x28);
    }
    pFVar8 = (FPCGDataTypeIdentifier *)&(pFVar5->Ids).ArrayNum;
    if (pFVar5 == (FPCGDataTypeIdentifier *)0x0) {
      pFVar8 = (FPCGDataTypeIdentifier *)0x0;
    }
    if (pFVar8 != (FPCGDataTypeIdentifier *)0x0) {
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar8);
      return __return_storage_ptr__;
    }
  }
  if (this_00 == (UPCGPin *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
    (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Ids).ArrayNum = 0;
    (__return_storage_ptr__->Ids).ArrayMax = 0;
    __return_storage_ptr__->CustomSubtype = -1;
  }
  else {
    UPCGPin::GetCurrentTypesID(this_00,&local_30);
    if (*(char *)(lVar1 + 0x90b0) != '\0') {
      local_40 = local_res18;
      local_38 = &local_30;
      TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
      ::Emplace<TPairInitializer<UPCGPin_const_*_const_&,FPCGDataTypeIdentifier_const_&>_>
                ((TSet<TTuple<UPCGPin_const_*,FPCGDataTypeIdentifier>,TDefaultMapHashableKeyFuncs<UPCGPin_const_*,FPCGDataTypeIdentifier,0>,TInlineSetAllocator<32,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                  *)(lVar1 + 0x90b8),
                 (TPairInitializer<UPCGPin_const_*_const_&,FPCGDataTypeIdentifier_const_&> *)
                 (local_res18 + 1),(bool *)&local_40);
    }
    (__return_storage_ptr__->Ids).AllocatorInstance.Data = local_30.Ids.AllocatorInstance.Data;
    (__return_storage_ptr__->Ids).ArrayNum = local_30.Ids.ArrayNum;
    (__return_storage_ptr__->Ids).ArrayMax = local_30.Ids.ArrayMax;
    __return_storage_ptr__->CustomSubtype = local_30.CustomSubtype;
  }
  return __return_storage_ptr__;
}


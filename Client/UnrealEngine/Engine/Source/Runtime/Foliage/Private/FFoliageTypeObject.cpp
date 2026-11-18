// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 8

// StaticStruct @ 145ece840

UScriptStruct * __cdecl FFoliageTypeObject::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFoliageTypeObject.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Foliage();
    Z_Registration_Info_UScriptStruct_FFoliageTypeObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFoliageTypeObject,(UObject *)pUVar1,
                         L"FoliageTypeObject");
  }
  return Z_Registration_Info_UScriptStruct_FFoliageTypeObject.OuterSingleton;
}

// ContainsValidInstance @ 145edf620

bool __thiscall FFoliageTypeObject::ContainsValidInstance(FFoliageTypeObject *this)

{
  return (this->TypeInstance).field0_0x0.DebugPtr != (UFoliageType *)0x0;
}

// GetInstance @ 145ee3750

UFoliageType * __thiscall FFoliageTypeObject::GetInstance(FFoliageTypeObject *this)

{
  if ((this->TypeInstance).field0_0x0.DebugPtr == (UFoliageType *)0x0) {
    RefreshInstance(this);
    return (this->TypeInstance).field0_0x0.DebugPtr;
  }
  return (this->TypeInstance).field0_0x0.DebugPtr;
}

// GetInstance @ 145ee3780

UFoliageType * __thiscall FFoliageTypeObject::GetInstance(FFoliageTypeObject *this)

{
  return (this->TypeInstance).field0_0x0.DebugPtr;
}

// HasFoliageType @ 145ee6a00

bool __thiscall FFoliageTypeObject::HasFoliageType(FFoliageTypeObject *this)

{
  return (this->FoliageTypeObject).field0_0x0.DebugPtr != (UObject *)0x0;
}

// IsDirty @ 145ee7630

bool __thiscall FFoliageTypeObject::IsDirty(FFoliageTypeObject *this)

{
  UFoliageType *pUVar1;
  
  pUVar1 = (this->TypeInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UFoliageType *)0x0) {
    pUVar1 = UClass::GetDefaultObject<UFoliageType>((UClass *)pUVar1->_padding_);
    if (((this->TypeInstance).field0_0x0.DebugPtr)->ChangeCount == pUVar1->ChangeCount) {
      return false;
    }
  }
  return true;
}

// RefreshInstance @ 145ee92b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FFoliageTypeObject::RefreshInstance(FFoliageTypeObject *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UPackage *pUVar6;
  UClass *pUVar7;
  UFoliageType *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar10 = 0;
  (this->TypeInstance).field0_0x0.DebugPtr = (UFoliageType *)0x0;
  if ((this->FoliageTypeObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar5 = UFoliageType::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this,pUVar5);
    if ((bVar4) &&
       (pUVar8 = (UFoliageType *)(this->FoliageTypeObject).field0_0x0.DebugPtr,
       pUVar8 != (UFoliageType *)0x0)) {
      this->bIsAsset = true;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->TypeInstance).field0_0x0.DebugPtr = pUVar8;
      return;
    }
  }
  if ((this->FoliageTypeObject).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UBlueprint_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)this,pUVar5);
    if ((bVar4) &&
       (pUVar2 = (this->FoliageTypeObject).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
      lVar3 = *(longlong *)&pUVar2[2].field_0x8;
      if ((lVar3 != 0) &&
         (pUVar5 = Z_Construct_UClass_UObject_NoRegister(), pUVar5 != (UClass *)0x0)) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar3 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar10 = *(longlong *)&pUVar2[2].field_0x8;
        }
      }
      pUVar5 = UFoliageType_InstancedStaticMesh::StaticClass();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar10 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          this->bIsAsset = false;
          local_b8 = 0;
          pUVar5 = TSubclassOf<UObject>::operator*((TSubclassOf<UObject> *)&pUVar2[1].field_0x8);
          pUVar6 = GetTransientPackage();
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)pUVar6,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar7 = UFoliageType_InstancedStaticMesh::StaticClass();
          CheckIsClassChildOf_Internal(pUVar7,pUVar5);
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_a8,pUVar5);
          local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
          local_a8._56_8_ = (UPackage *)0x0;
          local_a8._16_4_ = 0;
          local_a8._20_4_ = 0;
          local_a8._24_4_ = RF_Transactional;
          local_a8._40_8_ = (UObject *)0x0;
          local_a8[0x20] = false;
          local_a8._8_8_ = pUVar6;
          pUVar8 = (UFoliageType *)
                   StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
          if (local_a8._64_8_ != 0) {
            plVar9 = (longlong *)(local_a8 + 0x50);
            if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
              plVar9 = (longlong *)local_a8._104_8_;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar8 != (UFoliageType *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          (this->TypeInstance).field0_0x0.DebugPtr = pUVar8;
        }
      }
    }
  }
  return;
}

// SetClean @ 145eeb570

void __thiscall FFoliageTypeObject::SetClean(FFoliageTypeObject *this)

{
  UFoliageType *pUVar1;
  
  pUVar1 = (this->TypeInstance).field0_0x0.DebugPtr;
  if (pUVar1 != (UFoliageType *)0x0) {
    pUVar1 = UClass::GetDefaultObject<UFoliageType>((UClass *)pUVar1->_padding_);
    ((this->TypeInstance).field0_0x0.DebugPtr)->ChangeCount = pUVar1->ChangeCount;
  }
  return;
}


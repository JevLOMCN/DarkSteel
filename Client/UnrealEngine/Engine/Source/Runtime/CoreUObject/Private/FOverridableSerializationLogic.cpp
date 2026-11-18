// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 12

// Disable @ 1420f64d0

void __cdecl FOverridableSerializationLogic::Disable(void)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar1 + 0xc98) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUseOverridableSerialization",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverriddenPropertySet.h"
                       ,0x39,L"Expecting overridable serialization to be already enabled");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar1 + 0xca0) = 0;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined1 *)(lVar1 + 0xc98) = 0;
  return;
}

// Enable @ 1420f6a70

void __cdecl FOverridableSerializationLogic::Enable(FOverriddenPropertySet *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(lVar1 + 0xc98) != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bUseOverridableSerialization",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\OverriddenPropertySet.h"
                       ,0x2f,
                       L"Nobody should use this method if overridable serialization is already enabled"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined1 *)(lVar1 + 0xc98) = 1;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(FOverriddenPropertySet **)(lVar1 + 0xca0) = param_1;
  return;
}

// GetOverriddenPortTextPropertyPath @ 1420fb1f0

FPropertyVisitorPath * __cdecl
FOverridableSerializationLogic::GetOverriddenPortTextPropertyPath(void)

{
  return *(FPropertyVisitorPath **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca8);
}

// GetOverriddenPropertiesSlow @ 1420fb240

FOverriddenPropertySet * __cdecl FOverridableSerializationLogic::GetOverriddenPropertiesSlow(void)

{
  return *(FOverriddenPropertySet **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca0);
}

// GetOverriddenPropertyOperation @ 1420fb4a0

EOverriddenPropertyOperation __cdecl
FOverridableSerializationLogic::GetOverriddenPropertyOperation
          (int param_1,FArchiveSerializedPropertyChain *param_2,FProperty *param_3,void *param_4,
          void *param_5)

{
  int iVar1;
  ForElementType<FProperty_*> FVar2;
  FOverriddenPropertySet *this;
  longlong *plVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  EOverriddenPropertyOperation EVar7;
  char cVar8;
  UClass *pUVar9;
  UStruct *pUVar10;
  uint uVar11;
  ForElementType<FProperty_*> FVar12;
  uint uVar13;
  FProperty *this_00;
  undefined8 *puVar14;
  
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc98) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUseOverridableSerialization",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                         ,0x5b,
                         L"Nobody should use this method if it is not setup to use overridable serialization"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca0) == 0
     ) {
    return None;
  }
  this_00 = param_3;
  if (param_3 == (FProperty *)0x0) {
    this_00 = (FProperty *)0x0;
    if (param_2 != (FArchiveSerializedPropertyChain *)0x0) {
      iVar1 = (param_2->SerializedPropertyChain).ArrayNum;
      uVar11 = iVar1 - 1;
      uVar13 = 0;
      if ((int)uVar11 < iVar1) {
        uVar13 = ~uVar11 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      FVar2 = (param_2->SerializedPropertyChain).AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<FProperty_*>)param_2;
      if (FVar2 != (ForElementType<FProperty_*>)0x0) {
        FVar12 = FVar2;
      }
      this_00 = *(FProperty **)
                 ((uint *)((longlong)FVar12 + -8) +
                 (longlong)(param_2->SerializedPropertyChain).ArrayNum * 2);
      if (this_00 != (FProperty *)0x0) goto LAB_1420fb5ce;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                       ,0x62,L"Expecting a property to get OS operation on");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      EVar7 = (*pcVar5)();
      return EVar7;
    }
  }
LAB_1420fb5ce:
  if ((this_00->PropertyFlags & CPF_ExperimentalNeverOverriden) == CPF_None) {
    puVar14 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xca0);
    this = (FOverriddenPropertySet *)*puVar14;
    EVar7 = FOverriddenPropertySet::GetOverriddenPropertyOperation
                      (this,&this->RootNode,param_2,param_3);
    if (EVar7 != None) {
      return EVar7;
    }
    if ((param_4 != (void *)0x0) && (param_5 != (void *)0x0)) {
      plVar3 = (longlong *)*puVar14;
      if ((*plVar3 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Owner",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                             ,0x742,L"Expecting a valid overridable owner"), bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      if ((((*(uint *)(*plVar3 + 8) & 0x10) != 0) &&
          (pUVar9 = FField::GetOwnerClass((FField *)this_00), pUVar9 == *(UClass **)(*plVar3 + 0x10)
          )) && (cVar8 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,param_4,param_5,param_1),
                cVar8 == '\0')) {
        return Replace;
      }
    }
    if (((undefined1)Capabilities & SubObjectsShadowSerialization) != None) {
      if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x1a & 1) != 0) {
        return SubObjectsShadowing;
      }
      pUVar10 = FField::GetOwnerStruct((FField *)this_00);
      if ((pUVar10 == (UStruct *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Property->GetOwnerStruct()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                             ,0x91,L"Expecting an owner struct for this type of property"), bVar6))
      {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      pUVar10 = FField::GetOwnerStruct((FField *)this_00);
      for (pFVar4 = pUVar10->RefLink; pFVar4 != (FProperty *)0x0; pFVar4 = pFVar4->NextRef) {
        if (this_00 == pFVar4) {
          return SubObjectsShadowing;
        }
      }
    }
  }
  return None;
}

// GetOverriddenPropertyOperation @ 1420fb720

EOverriddenPropertyOperation __cdecl
FOverridableSerializationLogic::GetOverriddenPropertyOperation
          (FArchive *param_1,FProperty *param_2,uchar *param_3,uchar *param_4)

{
  EOverriddenPropertyOperation EVar1;
  
  EVar1 = GetOverriddenPropertyOperation
                    (*(int *)&param_1->field_0x34,
                     *(FArchiveSerializedPropertyChain **)&param_1->field_0x78,param_2,param_3,
                     param_4);
  return EVar1;
}

// GetOverriddenPropertyOperationForPortText @ 1420fc590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EOverriddenPropertyOperation __cdecl
FOverridableSerializationLogic::GetOverriddenPropertyOperationForPortText
          (void *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  EOverriddenPropertyOperation EVar3;
  ulonglong uVar4;
  undefined1 auStackY_b8 [32];
  FArchiveSerializedPropertyChain local_88;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  uVar4 = (ulonglong)_tls_index;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xca8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverriddenPortTextPropertyPath",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                       ,0xb4,L"Expecting an overridden port text path");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  FPropertyVisitorPath::ToSerializedPropertyChain
            (*(FPropertyVisitorPath **)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0xca8),&local_88);
  EVar3 = GetOverriddenPropertyOperation(param_3,&local_88,(FProperty *)0x0,param_1,param_2);
  if (local_88.SerializedPropertyChain.AllocatorInstance.SecondaryData !=
      (ForElementType<FProperty_*>)0x0) {
    FMemory::Free((void *)local_88.SerializedPropertyChain.AllocatorInstance.SecondaryData);
  }
  return EVar3;
}

// HasCapabilities @ 1420fe2c0

bool __cdecl FOverridableSerializationLogic::HasCapabilities(ECapabilities param_1)

{
  return (Capabilities & param_1) == param_1;
}

// ResetOverriddenPortTextPropertyPath @ 14210a540

void __cdecl FOverridableSerializationLogic::ResetOverriddenPortTextPropertyPath(void)

{
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca8) = 0;
  return;
}

// SetOverriddenPortTextPropertyPath @ 142110470

void __cdecl
FOverridableSerializationLogic::SetOverriddenPortTextPropertyPath(FPropertyVisitorPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)_tls_index;
  if (*(longlong *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0xca8) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OverriddenPortTextPropertyPath == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                       ,0xc2,L"Should not set a path on top of an existing one");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FPropertyVisitorPath **)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar3 * 8) + 0xca8)
       = param_1;
  return;
}

// ShouldPropertyShadowSerializeSubObject @ 142110680

bool __cdecl
FOverridableSerializationLogic::ShouldPropertyShadowSerializeSubObject
          (TNotNull<FProperty_const_*> param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UStruct *pUVar5;
  
  if (((undefined1)Capabilities & SubObjectsShadowSerialization) != None) {
    if ((param_1.Val != (FProperty *)0x0) &&
       ((*(uint *)((param_1.Val)->_padding_ + 0x18) >> 0x1a & 1) != 0)) {
      return true;
    }
    pUVar5 = FField::GetOwnerStruct((FField *)param_1.Val);
    if ((pUVar5 == (UStruct *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Property->GetOwnerStruct()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\OverriddenPropertySet.cpp"
                           ,0x91,L"Expecting an owner struct for this type of property"), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pUVar5 = FField::GetOwnerStruct((FField *)param_1.Val);
    for (pFVar1 = pUVar5->RefLink; pFVar1 != (FProperty *)0x0; pFVar1 = pFVar1->NextRef) {
      if (param_1.Val == pFVar1) {
        return true;
      }
    }
  }
  return false;
}

// GetOverriddenProperties @ 14213df30

FOverriddenPropertySet * __cdecl FOverridableSerializationLogic::GetOverriddenProperties(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  return *(FOverriddenPropertySet **)(lVar1 + 0xca0);
}


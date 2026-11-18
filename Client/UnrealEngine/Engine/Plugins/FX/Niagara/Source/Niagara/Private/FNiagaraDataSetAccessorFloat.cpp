// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// CreateReader @ 148e619f0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> * __cdecl
FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
          (FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *__return_storage_ptr__,
          FNiagaraDataBuffer *param_1,FName param_2)

{
  FNiagaraDataSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> local_res8;
  
  pFVar1 = param_1->Owner;
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((pFVar1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(pFVar1->CompiledData).StructPtr,param_2);
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[3] = (uchar *)0x0;
  if (local_res8.ComponentIndex != -1) {
    __return_storage_ptr__->bIsValid = true;
    if (local_res8.bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((param_1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * param_1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((param_1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * param_1->HalfStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((param_1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * param_1->HalfStride);
      pFVar5 = (param_1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * param_1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * param_1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * param_1->FloatStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * param_1->FloatStride);
      pFVar5 = (param_1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * param_1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[3] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = param_1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 148e61b40

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> * __cdecl
FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
          (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *__return_storage_ptr__,
          FNiagaraDataBuffer *param_1,FName param_2)

{
  FNiagaraDataSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> local_res8;
  
  pFVar1 = param_1->Owner;
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((pFVar1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(pFVar1->CompiledData).StructPtr,param_2);
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  if (local_res8.ComponentIndex != -1) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((param_1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * param_1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((param_1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * param_1->HalfStride);
      pFVar5 = (param_1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 2) * param_1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * param_1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((param_1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * param_1->FloatStride);
      pFVar5 = (param_1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 2) * param_1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[2] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = param_1->NumInstances;
  }
  return __return_storage_ptr__;
}

// Init @ 148e72c40

void __thiscall
FNiagaraDataSetAccessorFloat<float>::Init
          (FNiagaraDataSetAccessorFloat<float> *this,FNiagaraDataSetCompiledData *param_1,
          FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  this->ComponentIndex = -1;
  local_20.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_20,&FNiagaraTypeDefinition::FloatDef);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
LAB_148e72cc4:
      local_1c = param_2;
      local_14[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::HalfDef);
      pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar2;
      while( true ) {
        if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
          return;
        }
        if ((*pFVar8 == local_1c) &&
           (pFVar8[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 == 0xffffffff) {
        return;
      }
      this->bIsFloat = false;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      uVar1 = *(ushort *)
               ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4)
      ;
LAB_148e72e14:
      this->ComponentIndex = (uint)uVar1;
      return;
    }
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) {
        this->bIsFloat = true;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_148e72e14;
      }
      goto LAB_148e72cc4;
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  } while( true );
}

// Init @ 148e72e40

void __thiscall
FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::Init
          (FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_> *this,
          FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  this->ComponentIndex = -1;
  local_20.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_20,&FNiagaraTypeDefinition::Vec2Def);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
LAB_148e72ec4:
      local_1c = param_2;
      local_14[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::HalfVec2Def);
      pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar2;
      while( true ) {
        if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
          return;
        }
        if ((*pFVar8 == local_1c) &&
           (pFVar8[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 == 0xffffffff) {
        return;
      }
      this->bIsFloat = false;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      uVar1 = *(ushort *)
               ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4)
      ;
LAB_148e73014:
      this->ComponentIndex = (uint)uVar1;
      return;
    }
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) {
        this->bIsFloat = true;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_148e73014;
      }
      goto LAB_148e72ec4;
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  } while( true );
}

// Init @ 148e73040

void __thiscall
FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::Init
          (FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> *this,
          FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  this->ComponentIndex = -1;
  local_20.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_20,&FNiagaraTypeDefinition::Vec4Def);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
LAB_148e730c4:
      local_1c = param_2;
      local_14[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::HalfVec4Def);
      pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar2;
      while( true ) {
        if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
          return;
        }
        if ((*pFVar8 == local_1c) &&
           (pFVar8[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 == 0xffffffff) {
        return;
      }
      this->bIsFloat = false;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      uVar1 = *(ushort *)
               ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4)
      ;
LAB_148e73214:
      this->ComponentIndex = (uint)uVar1;
      return;
    }
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) {
        this->bIsFloat = true;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_148e73214;
      }
      goto LAB_148e730c4;
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  } while( true );
}

// Init @ 148e73240

void __thiscall
FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
          (FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *this,
          FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  this->ComponentIndex = -1;
  local_20.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_20,&FNiagaraTypeDefinition::Vec3Def);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
LAB_148e732c4:
      local_1c = param_2;
      local_14[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::HalfVec3Def);
      pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar2;
      while( true ) {
        if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
          return;
        }
        if ((*pFVar8 == local_1c) &&
           (pFVar8[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 == 0xffffffff) {
        return;
      }
      this->bIsFloat = false;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      uVar1 = *(ushort *)
               ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4)
      ;
LAB_148e73414:
      this->ComponentIndex = (uint)uVar1;
      return;
    }
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) {
        this->bIsFloat = true;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_148e73414;
      }
      goto LAB_148e732c4;
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  } while( true );
}

// CreateReader @ 1491bc6c0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<float> * __cdecl
FNiagaraDataSetAccessorFloat<float>::CreateReader
          (FNiagaraDataSetReaderFloat<float> *__return_storage_ptr__,FNiagaraDataSet *param_1,
          FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<float> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<float> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<float> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat == false) {
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               local_res8.ComponentIndex * pFVar1->HalfStride;
    }
    else {
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               local_res8.ComponentIndex * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[0] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 1491bc7a0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> * __cdecl
FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::CreateReader
          (FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *__return_storage_ptr__,
          FNiagaraDataSet *param_1,FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[3] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (local_res8.bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * pFVar1->HalfStride);
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * pFVar1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * pFVar1->FloatStride);
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[3] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 1491bc900

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> * __cdecl
FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_>::CreateReader
          (FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> *__return_storage_ptr__,
          FNiagaraDataSet *param_1,FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector2<float>_> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<UE::Math::TVector2<float>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (local_res8.bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->HalfStride);
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 1) * pFVar1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->FloatStride);
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 1) * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[1] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 1491bca00

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> * __cdecl
FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::CreateReader
          (FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *__return_storage_ptr__,
          FNiagaraDataSet *param_1,FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<UE::Math::TVector4<float>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[3] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (local_res8.bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * pFVar1->HalfStride);
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * pFVar1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * pFVar1->FloatStride);
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[3] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 1491bcb60

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> * __cdecl
FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::CreateReader
          (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *__return_storage_ptr__,
          FNiagaraDataSet *param_1,FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->HalfStride);
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 2) * pFVar1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->FloatStride);
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 2) * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[2] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 1491bcc90

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<FLinearColor> * __cdecl
FNiagaraDataSetAccessorFloat<FLinearColor>::CreateReader
          (FNiagaraDataSetReaderFloat<FLinearColor> *__return_storage_ptr__,FNiagaraDataSet *param_1
          ,FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<FLinearColor> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<FLinearColor> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<FLinearColor> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[3] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (local_res8.bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * pFVar1->HalfStride);
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * pFVar1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 2) * pFVar1->FloatStride);
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 3) * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[3] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// CreateReader @ 1491bcdf0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<FNiagaraPosition> * __cdecl
FNiagaraDataSetAccessorFloat<FNiagaraPosition>::CreateReader
          (FNiagaraDataSetReaderFloat<FNiagaraPosition> *__return_storage_ptr__,
          FNiagaraDataSet *param_1,FName param_2)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *pFVar4;
  FScriptContainerElement *pFVar5;
  FNiagaraDataSetAccessorFloat<FNiagaraPosition> local_res8;
  
  local_res8.bIsFloat = true;
  local_res8.ComponentIndex = -1;
  if ((param_1->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledData.Get() != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x169,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetReaderFloat<FNiagaraPosition> *)(*pcVar2)();
      return pFVar4;
    }
  }
  Init(&local_res8,(param_1->CompiledData).StructPtr,param_2);
  pFVar1 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = local_res8.bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  if ((pFVar1 != (FNiagaraDataBuffer *)0x0) && (local_res8.ComponentIndex != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat == false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->HalfStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->HalfData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->HalfStride);
      pFVar5 = (pFVar1->HalfData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 2) * pFVar1->HalfStride;
    }
    else {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    local_res8.ComponentIndex * pFVar1->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar1->FloatData).AllocatorInstance.Data +
                    (local_res8.ComponentIndex + 1) * pFVar1->FloatStride);
      pFVar5 = (pFVar1->FloatData).AllocatorInstance.Data +
               (local_res8.ComponentIndex + 2) * pFVar1->FloatStride;
    }
    __return_storage_ptr__->ComponentData[2] = (uchar *)pFVar5;
    __return_storage_ptr__->NumInstances = pFVar1->NumInstances;
  }
  return __return_storage_ptr__;
}

// Init @ 1491d15f0

void __thiscall
FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::Init
          (FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_> *this,
          FNiagaraDataSetCompiledData *param_1,FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  this->ComponentIndex = -1;
  local_20.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_20,&FNiagaraTypeDefinition::QuatDef);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
LAB_1491d1674:
      local_1c = param_2;
      local_14[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::HalfVec4Def);
      pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar2;
      while( true ) {
        if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
          return;
        }
        if ((*pFVar8 == local_1c) &&
           (pFVar8[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 == 0xffffffff) {
        return;
      }
      this->bIsFloat = false;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      uVar1 = *(ushort *)
               ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4)
      ;
LAB_1491d17c4:
      this->ComponentIndex = (uint)uVar1;
      return;
    }
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) {
        this->bIsFloat = true;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_1491d17c4;
      }
      goto LAB_1491d1674;
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  } while( true );
}

// Init @ 1491d17f0

void __thiscall
FNiagaraDataSetAccessorFloat<FLinearColor>::Init
          (FNiagaraDataSetAccessorFloat<FLinearColor> *this,FNiagaraDataSetCompiledData *param_1,
          FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_20;
  FName local_1c;
  FNiagaraTypeDefinitionHandle local_14 [3];
  
  this->ComponentIndex = -1;
  local_20.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_20,&FNiagaraTypeDefinition::ColorDef);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  do {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
LAB_1491d1874:
      local_1c = param_2;
      local_14[0].RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(local_14,&FNiagaraTypeDefinition::HalfVec4Def);
      pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
      pFVar8 = pFVar2;
      while( true ) {
        if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
          return;
        }
        if ((*pFVar8 == local_1c) &&
           (pFVar8[1].ComparisonIndex.Value == local_14[0].RegisteredTypeIndex)) break;
        pFVar8 = (FName *)&pFVar8[1].Number;
      }
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 == 0xffffffff) {
        return;
      }
      this->bIsFloat = false;
      uVar5 = 0;
      if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
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
      uVar1 = *(ushort *)
               ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4)
      ;
LAB_1491d19c4:
      this->ComponentIndex = (uint)uVar1;
      return;
    }
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_20.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) {
        this->bIsFloat = true;
        uVar5 = 0;
        if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(ushort *)
                 ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
        goto LAB_1491d19c4;
      }
      goto LAB_1491d1874;
    }
    pFVar8 = (FName *)&pFVar8[1].Number;
  } while( true );
}

// Init @ 1491d19f0

void __thiscall
FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
          (FNiagaraDataSetAccessorFloat<FNiagaraPosition> *this,FNiagaraDataSetCompiledData *param_1
          ,FName param_2)

{
  ushort uVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FName *pFVar8;
  FNiagaraTypeDefinitionHandle local_30;
  FName local_2c;
  FNiagaraTypeDefinitionHandle local_24;
  FName local_20;
  FNiagaraTypeDefinitionHandle local_18 [4];
  
  this->ComponentIndex = -1;
  local_30.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_30,&FNiagaraTypeDefinition::PositionDef);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  for (pFVar8 = pFVar2;
      pFVar8 != (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc);
      pFVar8 = (FName *)&pFVar8[1].Number) {
    if ((*pFVar8 == param_2) && (pFVar8[1].ComparisonIndex.Value == local_30.RegisteredTypeIndex)) {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) goto LAB_1491d1aeb;
      break;
    }
  }
  local_2c = param_2;
  local_24.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_24,&FNiagaraTypeDefinition::Vec3Def);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  for (pFVar8 = pFVar2;
      pFVar8 != (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc);
      pFVar8 = (FName *)&pFVar8[1].Number) {
    if ((*pFVar8 == local_2c) && (pFVar8[1].ComparisonIndex.Value == local_24.RegisteredTypeIndex))
    {
      lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 +
              ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
      uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
      if (uVar7 != 0xffffffff) goto LAB_1491d1aeb;
      break;
    }
  }
  local_20 = param_2;
  local_18[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_18,&FNiagaraTypeDefinition::HalfVec3Def);
  pFVar2 = (FName *)(param_1->Variables).AllocatorInstance.Data;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == (FName *)((longlong)pFVar2 + (longlong)(param_1->Variables).ArrayNum * 0xc)) {
      return;
    }
    if ((*pFVar8 == local_20) &&
       (pFVar8[1].ComparisonIndex.Value == local_18[0].RegisteredTypeIndex)) break;
    pFVar8 = (FName *)&pFVar8[1].Number;
  }
  lVar6 = ((longlong)pFVar8 - (longlong)pFVar2) / 6 + ((longlong)pFVar8 - (longlong)pFVar2 >> 0x3f);
  uVar7 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
  if (uVar7 == 0xffffffff) {
    return;
  }
  this->bIsFloat = false;
  uVar5 = 0;
  if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
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
  uVar1 = *(ushort *)
           ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 4);
LAB_1491d1c35:
  this->ComponentIndex = (uint)uVar1;
  return;
LAB_1491d1aeb:
  this->bIsFloat = true;
  uVar5 = 0;
  if ((int)uVar7 < (param_1->VariableLayouts).ArrayNum) {
    uVar5 = ~uVar7 >> 0x1f;
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
  uVar1 = *(ushort *)
           ((param_1->VariableLayouts).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20);
  goto LAB_1491d1c35;
}

// GetReader @ 1492a6850

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<FNiagaraPosition> * __thiscall
FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
          (FNiagaraDataSetAccessorFloat<FNiagaraPosition> *this,
          FNiagaraDataSetReaderFloat<FNiagaraPosition> *__return_storage_ptr__,
          FNiagaraDataSet *param_1)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  
  pFVar2 = param_1->CurrentData;
  iVar1 = this->ComponentIndex;
  __return_storage_ptr__->bIsFloat = this->bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  if ((pFVar2 != (FNiagaraDataBuffer *)0x0) && (iVar1 != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat != false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + (iVar1 + 1) * pFVar2->FloatStride)
      ;
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + (iVar1 + 2) * pFVar2->FloatStride)
      ;
      __return_storage_ptr__->NumInstances = pFVar2->NumInstances;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->ComponentData[0] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
    __return_storage_ptr__->ComponentData[1] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + (iVar1 + 1) * pFVar2->HalfStride);
    __return_storage_ptr__->ComponentData[2] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + (iVar1 + 2) * pFVar2->HalfStride);
    __return_storage_ptr__->NumInstances = pFVar2->NumInstances;
  }
  return __return_storage_ptr__;
}

// GetReader @ 1493566e0

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<float> * __thiscall
FNiagaraDataSetAccessorFloat<float>::GetReader
          (FNiagaraDataSetAccessorFloat<float> *this,
          FNiagaraDataSetReaderFloat<float> *__return_storage_ptr__,FNiagaraDataSet *param_1)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  
  iVar1 = this->ComponentIndex;
  pFVar2 = param_1->CurrentData;
  __return_storage_ptr__->bIsFloat = this->bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  if ((pFVar2 != (FNiagaraDataBuffer *)0x0) && (iVar1 != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat != false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
      __return_storage_ptr__->NumInstances = pFVar2->NumInstances;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->ComponentData[0] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
    __return_storage_ptr__->NumInstances = pFVar2->NumInstances;
  }
  return __return_storage_ptr__;
}

// GetReader @ 149356760

/* WARNING: Enum "Type": Some values do not have unique names */

FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> * __thiscall
FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader
          (FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *this,
          FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> *__return_storage_ptr__,
          FNiagaraDataSet *param_1)

{
  int iVar1;
  FNiagaraDataBuffer *pFVar2;
  
  pFVar2 = param_1->CurrentData;
  iVar1 = this->ComponentIndex;
  __return_storage_ptr__->bIsFloat = this->bIsFloat;
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->NumInstances = 0;
  __return_storage_ptr__->ComponentData[0] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[1] = (uchar *)0x0;
  __return_storage_ptr__->ComponentData[2] = (uchar *)0x0;
  if ((pFVar2 != (FNiagaraDataBuffer *)0x0) && (iVar1 != -1)) {
    __return_storage_ptr__->bIsValid = true;
    if (__return_storage_ptr__->bIsFloat != false) {
      __return_storage_ptr__->ComponentData[0] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + iVar1 * pFVar2->FloatStride);
      __return_storage_ptr__->ComponentData[1] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + (iVar1 + 1) * pFVar2->FloatStride)
      ;
      __return_storage_ptr__->ComponentData[2] =
           (uchar *)((pFVar2->FloatData).AllocatorInstance.Data + (iVar1 + 2) * pFVar2->FloatStride)
      ;
      __return_storage_ptr__->NumInstances = pFVar2->NumInstances;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->ComponentData[0] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + iVar1 * pFVar2->HalfStride);
    __return_storage_ptr__->ComponentData[1] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + (iVar1 + 1) * pFVar2->HalfStride);
    __return_storage_ptr__->ComponentData[2] =
         (uchar *)((pFVar2->HalfData).AllocatorInstance.Data + (iVar1 + 2) * pFVar2->HalfStride);
    __return_storage_ptr__->NumInstances = pFVar2->NumInstances;
  }
  return __return_storage_ptr__;
}


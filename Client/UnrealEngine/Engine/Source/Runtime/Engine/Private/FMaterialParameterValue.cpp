// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AsScalar @ 147f32560

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

float __thiscall FMaterialParameterValue::AsScalar(FMaterialParameterValue *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->Type == Scalar) {
    return (this->field0_0x0).Float[0];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type == EMaterialParameterType::Scalar",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                     ,0x176,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  return (this->field0_0x0).Float[0];
}

// FMaterialParameterValue @ 147f64900

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FMaterialParameterValue * __thiscall
FMaterialParameterValue::FMaterialParameterValue
          (FMaterialParameterValue *this,EMaterialParameterType param_1,FValue *param_2)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  FMaterialParameterValue *pFVar8;
  TVector4<double> *pTVar9;
  FLinearColor *pFVar10;
  float fVar11;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  undefined1 local_res13;
  uint uStack_104;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined7 uStack_e7;
  double local_d0;
  double dStack_c8;
  undefined7 uStack_bf;
  undefined7 uStack_b7;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined7 uStack_97;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  double local_80;
  double dStack_78;
  uint7 uStack_6f;
  FLinearColor local_68 [3];
  undefined7 uStack_37;
  TVector4<double> local_28;
  
  if (param_1 == Scalar) {
    fVar11 = UE::Shader::FValue::AsFloatScalar(param_2);
    (this->field0_0x0).Float[0] = fVar11;
    (this->field0_0x0).Float[1] = fStack_8c;
    (this->field0_0x0).Float[2] = fStack_88;
    (this->field0_0x0).Float[3] = fStack_84;
    (this->field0_0x0).Double[2] = local_80;
    (this->field0_0x0).Double[3] = dStack_78;
    *(ulonglong *)&this->Type = (ulonglong)uStack_6f << 8;
  }
  else if (param_1 == Vector) {
    pFVar10 = UE::Shader::FValue::AsLinearColor(param_2,local_68);
    dVar2 = *(double *)((longlong)&pFVar10->field0_0x0 + 8);
    (this->field0_0x0).Double[0] = *(double *)&pFVar10->field0_0x0;
    (this->field0_0x0).Double[1] = dVar2;
    (this->field0_0x0).Double[2] = local_d0;
    (this->field0_0x0).Double[3] = dStack_c8;
    *(ulonglong *)&this->Type = CONCAT71(uStack_bf,1);
  }
  else if (param_1 == DoubleVector) {
    pTVar9 = UE::Shader::FValue::AsVector4d(param_2,&local_28);
    dVar2 = (pTVar9->field0_0x0)._s_0.Y;
    dVar3 = (pTVar9->field0_0x0)._s_0.Z;
    dVar4 = (pTVar9->field0_0x0)._s_0.W;
    (this->field0_0x0).Double[0] = (pTVar9->field0_0x0)._s_0.X;
    (this->field0_0x0).Double[1] = dVar2;
    (this->field0_0x0).Double[2] = dVar3;
    (this->field0_0x0).Double[3] = dVar4;
    *(ulonglong *)&this->Type = CONCAT71(uStack_37,2);
  }
  else if (param_1 == StaticSwitch) {
    bVar7 = UE::Shader::FValue::AsBoolScalar(param_2);
    FVar6._1_7_ = uStack_b7;
    FVar6.ComparisonIndex.Value._0_1_ = bVar7;
    (this->field0_0x0).EnumEntry = FVar6;
    (this->field0_0x0).Double[1] = dStack_b0;
    (this->field0_0x0).Double[2] = local_a8;
    (this->field0_0x0).Double[3] = dStack_a0;
    *(ulonglong *)&this->Type = CONCAT71(uStack_97,8);
  }
  else if (param_1 == NumRuntime) {
    UE::Shader::FValue::AsBool(param_2);
    FVar5.ComparisonIndex.Value._1_1_ = local_res11;
    FVar5.ComparisonIndex.Value._0_1_ = local_res10;
    FVar5.ComparisonIndex.Value._2_1_ = local_res12;
    FVar5.ComparisonIndex.Value._3_1_ = local_res13;
    FVar5.Number = uStack_104;
    (this->field0_0x0).EnumEntry = FVar5;
    (this->field0_0x0).Double[1] = dStack_100;
    (this->field0_0x0).Double[2] = local_f8;
    (this->field0_0x0).Double[3] = dStack_f0;
    *(ulonglong *)&this->Type = CONCAT71(uStack_e7,10);
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2965535971401001497>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x15e7,"false");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FMaterialParameterValue *)(*pcVar1)();
      return pFVar8;
    }
    this->Type = None;
  }
  return this;
}

// AsShaderValue @ 147f6f1e0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

FValue * __thiscall
FMaterialParameterValue::AsShaderValue(FMaterialParameterValue *this,FValue *__return_storage_ptr__)

{
  TArray<UE::Shader::FValueComponent,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FValue *pFVar5;
  ForElementType<UE::Shader::FValueComponent> FVar6;
  ulonglong local_18 [2];
  
  switch(this->Type) {
  case Scalar:
    UE::Shader::FValue::FValue(__return_storage_ptr__,(this->field0_0x0).Float[0]);
    return __return_storage_ptr__;
  case Vector:
    UE::Shader::FValue::FValue
              (__return_storage_ptr__,(this->field0_0x0).Float[0],(this->field0_0x0).Float[1],
               (this->field0_0x0).Float[2],(this->field0_0x0).Float[3]);
    return __return_storage_ptr__;
  case DoubleVector:
    UE::Shader::FValue::FValue
              (__return_storage_ptr__,(this->field0_0x0).Double[0],(this->field0_0x0).Double[1],
               (this->field0_0x0).Double[2],(this->field0_0x0).Double[3]);
    return __return_storage_ptr__;
  case StaticSwitch:
    break;
  case NumRuntime:
    UE::Shader::FValue::FValue
              (__return_storage_ptr__,(this->field0_0x0).Bool[0],(this->field0_0x0).Bool[1],
               (this->field0_0x0).Bool[2],(this->field0_0x0).Bool[3]);
    return __return_storage_ptr__;
  default:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x15fd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FValue *)(*pcVar2)();
      return pFVar5;
    }
  case Texture:
  case TextureCollection:
  case Font:
  case RuntimeVirtualTexture:
  case SparseVolumeTexture:
  case ParameterCollection:
    *(undefined8 *)&(__return_storage_ptr__->Type).field_0x11 = 0;
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[1] = '\0';
    (pTVar1->AllocatorInstance).InlineData[2] = '\0';
    (pTVar1->AllocatorInstance).InlineData[3] = '\0';
    (pTVar1->AllocatorInstance).InlineData[4] = '\0';
    (pTVar1->AllocatorInstance).InlineData[5] = '\0';
    (pTVar1->AllocatorInstance).InlineData[6] = '\0';
    (pTVar1->AllocatorInstance).InlineData[7] = '\0';
    (pTVar1->AllocatorInstance).InlineData[8] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[9] = '\0';
    (pTVar1->AllocatorInstance).InlineData[10] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0xf] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x10] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x11] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x12] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x13] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x14] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x15] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x16] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x17] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x18] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x19] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x1a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x1b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x1c] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x1d] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x1e] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x1f] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x20] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x21] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x22] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x23] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x24] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x25] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x26] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x27] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x28] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x29] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x2a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x2b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x2c] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x2d] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x2e] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x2f] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x30] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x31] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x32] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x33] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x34] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x35] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x36] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x37] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x38] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x39] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x3a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x3b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x3c] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x3d] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x3e] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x3f] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x40] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x41] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x42] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x43] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x44] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x45] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x46] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x47] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x48] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x49] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x4a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x4b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x4c] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x4d] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x4e] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x4f] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x50] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x51] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x52] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x53] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x54] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x55] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x56] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x57] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x58] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x59] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x5a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x5b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x5c] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x5d] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x5e] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x5f] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x60] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x61] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x62] = '\0';
    (pTVar1->AllocatorInstance).InlineData[99] = '\0';
    (pTVar1->AllocatorInstance).InlineData[100] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x65] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x66] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x67] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x68] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x69] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x6a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x6b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x6c] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x6d] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x6e] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x6f] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x70] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x71] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x72] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x73] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x74] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x75] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x76] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x77] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x78] = '\0';
    pTVar1 = &__return_storage_ptr__->Component;
    (pTVar1->AllocatorInstance).InlineData[0x79] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x7a] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x7b] = '\0';
    (pTVar1->AllocatorInstance).InlineData[0x7c] = '\0';
    (__return_storage_ptr__->Component).AllocatorInstance.InlineData[0x7d] = '\0';
    (__return_storage_ptr__->Component).AllocatorInstance.InlineData[0x7e] = '\0';
    (__return_storage_ptr__->Component).AllocatorInstance.InlineData[0x7f] = '\0';
    (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
    (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
    (__return_storage_ptr__->Type).ObjectType.Number = 0;
    (__return_storage_ptr__->Type).ValueType = Void;
    (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Shader::FValueComponent>)0x0;
    (__return_storage_ptr__->Component).ArrayMax = 0x10;
    (__return_storage_ptr__->Component).ArrayNum = 0;
    return __return_storage_ptr__;
  }
  bVar3 = (this->field0_0x0).Bool[0];
  (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
  (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
  (__return_storage_ptr__->Type).ObjectType.Number = 0;
  (__return_storage_ptr__->Type).ValueType = Bool1;
  pTVar1 = &__return_storage_ptr__->Component;
  (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  local_18[0] = (ulonglong)(bVar3 != false);
  (__return_storage_ptr__->Component).ArrayNum = 0;
  (__return_storage_ptr__->Component).ArrayMax = 0x10;
  if (((pTVar1 <= local_18) &&
      (local_18 < &(__return_storage_ptr__->Component).AllocatorInstance.SecondaryData)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FValue *)(*pcVar2)();
    return pFVar5;
  }
  iVar4 = (__return_storage_ptr__->Component).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Component).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                      (0x808,&pTVar1->AllocatorInstance,
                       &(__return_storage_ptr__->Component).ArrayMax);
  }
  (__return_storage_ptr__->Component).ArrayNum = iVar4 + 1;
  FVar6 = (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FVar6 = (ForElementType<UE::Shader::FValueComponent>)pTVar1;
  }
  *(ulonglong *)((longlong)FVar6 + (longlong)iVar4 * 8) = local_18[0];
  return __return_storage_ptr__;
}

// AsTextureObject @ 147f6f460

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

UObject * __thiscall FMaterialParameterValue::AsTextureObject(FMaterialParameterValue *this)

{
  EMaterialParameterType EVar1;
  uint uVar2;
  UTexture *pUVar3;
  code *pcVar4;
  bool bVar5;
  UObject *pUVar6;
  uint uVar7;
  
  EVar1 = this->Type;
  if (EVar1 != Texture) {
    if (EVar1 == Font) {
      pUVar3 = (this->field0_0x0).Texture;
      if (pUVar3 == (UTexture *)0x0) {
        return (UObject *)0x0;
      }
      uVar2 = (this->field0_0x0).Font.Page;
      if ((-1 < (int)uVar2) && ((int)uVar2 < (int)pUVar3->_padding_)) {
        uVar7 = 0;
        if ((int)uVar2 < (int)pUVar3->_padding_) {
          uVar7 = ~uVar2 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pUVar6 = (UObject *)(*pcVar4)();
            return pUVar6;
          }
        }
        return *(UObject **)(pUVar3->_padding_ + (longlong)(int)uVar2 * 8);
      }
      return (UObject *)0x0;
    }
    if ((EVar1 != RuntimeVirtualTexture) && (EVar1 != SparseVolumeTexture)) {
      return (UObject *)0x0;
    }
  }
  return (UObject *)(this->field0_0x0).Double[0];
}


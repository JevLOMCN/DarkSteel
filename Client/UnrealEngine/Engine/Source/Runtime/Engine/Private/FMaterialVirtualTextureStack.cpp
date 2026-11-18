// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FMaterialVirtualTextureStack @ 147f660f0

FMaterialVirtualTextureStack * __thiscall
FMaterialVirtualTextureStack::FMaterialVirtualTextureStack
          (FMaterialVirtualTextureStack *this,int param_1)

{
  this->NumLayers = 0;
  this->PreallocatedStackTextureIndex = param_1;
  this->LayerUniformExpressionIndices[0] = -1;
  this->LayerUniformExpressionIndices[1] = -1;
  this->LayerUniformExpressionIndices[2] = -1;
  this->LayerUniformExpressionIndices[3] = -1;
  this->LayerUniformExpressionIndices[4] = -1;
  this->LayerUniformExpressionIndices[5] = -1;
  this->LayerUniformExpressionIndices[6] = -1;
  this->LayerUniformExpressionIndices[7] = -1;
  return this;
}

// FMaterialVirtualTextureStack @ 147f66130

FMaterialVirtualTextureStack * __thiscall
FMaterialVirtualTextureStack::FMaterialVirtualTextureStack(FMaterialVirtualTextureStack *this)

{
  this->NumLayers = 0;
  *(undefined8 *)(this->LayerUniformExpressionIndices + 7) = 0xffffffffffffffff;
  this->LayerUniformExpressionIndices[0] = -1;
  this->LayerUniformExpressionIndices[1] = -1;
  this->LayerUniformExpressionIndices[2] = -1;
  this->LayerUniformExpressionIndices[3] = -1;
  this->LayerUniformExpressionIndices[4] = -1;
  this->LayerUniformExpressionIndices[5] = -1;
  this->LayerUniformExpressionIndices[6] = -1;
  return this;
}

// AddLayer @ 147f6d5e0

uint __thiscall FMaterialVirtualTextureStack::AddLayer(FMaterialVirtualTextureStack *this)

{
  uint uVar1;
  
  uVar1 = this->NumLayers;
  this->NumLayers = uVar1 + 1;
  return uVar1;
}

// FindLayer @ 147f77c30

int __thiscall
FMaterialVirtualTextureStack::FindLayer(FMaterialVirtualTextureStack *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &this->NumLayers;
  uVar2 = 0;
  if (*puVar1 != 0) {
    do {
      this = (FMaterialVirtualTextureStack *)this->LayerUniformExpressionIndices;
      if (*(int *)this == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar1);
  }
  return -1;
}

// GetTextureValue @ 147f7ca20

void __thiscall
FMaterialVirtualTextureStack::GetTextureValue
          (FMaterialVirtualTextureStack *this,FMaterialRenderContext *param_1,
          FUniformExpressionSet *param_2,URuntimeVirtualTexture **param_3)

{
  uint *puVar1;
  uint uVar2;
  URuntimeVirtualTexture *local_res8;
  
  uVar2 = 0;
  *param_3 = (URuntimeVirtualTexture *)0x0;
  puVar1 = &this->NumLayers;
  if (*puVar1 != 0) {
    while( true ) {
      this = (FMaterialVirtualTextureStack *)this->LayerUniformExpressionIndices;
      if (*(int *)this != -1) break;
      uVar2 = uVar2 + 1;
      if (*puVar1 <= uVar2) {
        return;
      }
    }
    local_res8 = (URuntimeVirtualTexture *)0x0;
    FUniformExpressionSet::GetTextureValue
              (param_2,*(int *)this,param_1,param_1->Material,&local_res8);
    *param_3 = local_res8;
  }
  return;
}

// GetTextureValues @ 147f7caa0

void __thiscall
FMaterialVirtualTextureStack::GetTextureValues
          (FMaterialVirtualTextureStack *this,FMaterialRenderContext *param_1,
          FUniformExpressionSet *param_2,UTexture **param_3)

{
  uint uVar1;
  UTexture *local_res8;
  ulonglong uVar2;
  
  uVar2 = 0;
  *param_3 = (UTexture *)0x0;
  param_3[1] = (UTexture *)0x0;
  param_3[2] = (UTexture *)0x0;
  param_3[3] = (UTexture *)0x0;
  param_3[4] = (UTexture *)0x0;
  param_3[5] = (UTexture *)0x0;
  param_3[6] = (UTexture *)0x0;
  param_3[7] = (UTexture *)0x0;
  if (this->NumLayers != 0) {
    do {
      if (this->LayerUniformExpressionIndices[uVar2] != -1) {
        local_res8 = (UTexture *)0x0;
        FUniformExpressionSet::GetTextureValue
                  (param_2,Virtual,this->LayerUniformExpressionIndices[uVar2],param_1,
                   param_1->Material,&local_res8);
        param_3[uVar2] = local_res8;
      }
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < this->NumLayers);
  }
  return;
}

// GetTypeLayout @ 147f7cd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMaterialVirtualTextureStack::GetTypeLayout(FMaterialVirtualTextureStack *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialVirtua;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialVirtualTextureStack,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PreallocatedStackTextureIndex";
    DAT_155215e72 = Freeze::FindFieldNameLength(L"PreallocatedStackTextureIndex");
    _DAT_155215e50 = StaticGetTypeLayoutDesc<int>();
    DAT_155215e58 = ::TypeBuffer[0x10];
    DAT_155215e58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215e58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215e58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215e58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215e58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215e58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215e58_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215e68 = 0x24;
    _DAT_155215e6c = 1;
    _DAT_155215e70 = 0;
    `public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LayerUniformExpressionIndices";
    DAT_155215e42 = Freeze::FindFieldNameLength(L"LayerUniformExpressionIndices");
    _DAT_155215e20 = StaticGetTypeLayoutDesc<int>();
    DAT_155215e28 = ::TypeBuffer[0x10];
    DAT_155215e28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215e28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215e28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215e28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215e28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215e28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215e28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215e38 = 4;
    _DAT_155215e3c = 8;
    _DAT_155215e40 = 0;
    `public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumLayers";
    DAT_155215e12 = Freeze::FindFieldNameLength(L"NumLayers");
    _DAT_155215df0 = StaticGetTypeLayoutDesc<unsigned_int>();
    _DAT_155215e00 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215df8 = ::TypeBuffer[0x10];
    DAT_155215df8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215df8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215df8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215df8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215df8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215df8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215df8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215e08 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e0c = 1;
    _DAT_155215e10 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMaterialVirtualTextureStack::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  return;
}

// Serialize @ 147f86950

void __thiscall
FMaterialVirtualTextureStack::Serialize(FMaterialVirtualTextureStack *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0] = this->NumLayers;
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  puVar2 = &param_1->field_0x2a;
  uVar6 = 8;
  if (local_res8[0] < 8) {
    uVar6 = local_res8[0];
  }
  uVar7 = 0;
  this->NumLayers = uVar6;
  uVar8 = 0;
  if (uVar6 != 0) {
    do {
      puVar4 = (uint *)**(undefined8 **)&param_1->field_0x8;
      piVar1 = this->LayerUniformExpressionIndices + uVar7;
      if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = *puVar4;
        **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
      }
      uVar8 = this->NumLayers;
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < uVar8);
  }
  if (uVar8 < local_res8[0]) {
    do {
      plVar3 = *(longlong **)&param_1->field_0x8;
      local_res10[0] = 0xffffffff;
      if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
        if ((*puVar2 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res10);
        }
      }
      else {
        local_res10[0] = *(uint *)*plVar3;
        *plVar3 = *plVar3 + 4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < local_res8[0]);
  }
  piVar1 = &this->PreallocatedStackTextureIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  return;
}

// SetLayer @ 147f87c50

uint __thiscall
FMaterialVirtualTextureStack::SetLayer(FMaterialVirtualTextureStack *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformExpressionIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x107e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  if (7 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerIndex >= 0 && LayerIndex < 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x107f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  this->LayerUniformExpressionIndices[param_1] = param_2;
  uVar3 = this->NumLayers;
  if (this->NumLayers < param_1 + 1U) {
    uVar3 = param_1 + 1U;
  }
  this->NumLayers = uVar3;
  return param_1;
}

// StaticGetTypeLayout @ 147f8b2f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMaterialVirtualTextureStack::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialVirtua;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialVirtualTextureStack,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PreallocatedStackTextureIndex";
    DAT_155215e72 = Freeze::FindFieldNameLength(L"PreallocatedStackTextureIndex");
    _DAT_155215e50 = StaticGetTypeLayoutDesc<int>();
    DAT_155215e58 = ::TypeBuffer[0x10];
    DAT_155215e58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215e58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215e58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215e58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215e58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215e58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215e58_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215e68 = 0x24;
    _DAT_155215e6c = 1;
    _DAT_155215e70 = 0;
    `public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LayerUniformExpressionIndices";
    DAT_155215e42 = Freeze::FindFieldNameLength(L"LayerUniformExpressionIndices");
    _DAT_155215e20 = StaticGetTypeLayoutDesc<int>();
    DAT_155215e28 = ::TypeBuffer[0x10];
    DAT_155215e28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215e28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215e28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215e28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215e28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215e28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215e28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215e38 = 4;
    _DAT_155215e3c = 8;
    _DAT_155215e40 = 0;
    `public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "NumLayers";
    DAT_155215e12 = Freeze::FindFieldNameLength(L"NumLayers");
    _DAT_155215df0 = StaticGetTypeLayoutDesc<unsigned_int>();
    _DAT_155215e00 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215df8 = ::TypeBuffer[0x10];
    DAT_155215df8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215df8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215df8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215df8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215df8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215df8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215df8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215e08 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMaterialVirtualTextureStack::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215e0c = 1;
    _DAT_155215e10 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}


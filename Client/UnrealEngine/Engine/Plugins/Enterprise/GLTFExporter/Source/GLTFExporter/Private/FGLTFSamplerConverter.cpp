// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5e9c90

FGLTFJsonSampler * __thiscall
FGLTFSamplerConverter::Convert
          (FGLTFSamplerConverter *this,TextureAddress param_1,TextureAddress param_2,
          TextureFilter param_3,TextureGroup param_4)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  EGLTFJsonTextureFilter EVar5;
  EGLTFJsonTextureWrap EVar6;
  FGLTFJsonSampler *pFVar7;
  ForAnyElementType *pFVar8;
  FGLTFJsonSampler *local_18 [2];
  
  lVar1 = *(longlong *)&this->field_0x58;
  pFVar7 = ::operator_new(0x30);
  if (pFVar7 != (FGLTFJsonSampler *)0x0) {
    *(undefined4 *)&pFVar7->_padding_ = *(undefined4 *)(lVar1 + 0x2e8);
    pFVar7->_padding_ = (longlong)&___7FGLTFJsonSampler__6B_;
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.ArrayNum = 0;
    (pFVar7->Name).Data.ArrayMax = 0;
    pFVar7->MinFilter = None;
    pFVar7->MagFilter = None;
    pFVar7->WrapS = Repeat;
    pFVar7->WrapT = Repeat;
  }
  pFVar8 = (ForAnyElementType *)(lVar1 + 0x2e0);
  local_18[0] = pFVar7;
  if (((pFVar8->Data <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar8->Data + (longlong)*(int *)(lVar1 + 0x2ec) * 8))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FGLTFJsonSampler *)(*pcVar2)();
    return pFVar7;
  }
  iVar4 = *(int *)(lVar1 + 0x2e8);
  if (iVar4 == *(int *)(lVar1 + 0x2ec)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,(int *)(lVar1 + 0x2ec));
  }
  *(int *)(lVar1 + 0x2e8) = iVar4 + 1;
  *(FGLTFJsonSampler **)(pFVar8->Data + (longlong)iVar4 * 8) = local_18[0];
  if (param_3 == TF_Nearest) {
    pFVar7->MinFilter = NearestMipmapNearest;
LAB_14e5e9df7:
    EVar5 = Nearest;
  }
  else {
    if (param_3 == TF_Bilinear) {
      pFVar7->MinFilter = LinearMipmapNearest;
LAB_14e5e9de9:
      EVar5 = Linear;
      goto LAB_14e5e9dfc;
    }
    if (param_3 == TF_Trilinear) {
      pFVar7->MinFilter = LinearMipmapLinear;
    }
    else {
      pFVar7->MinFilter = None;
      if (param_3 == TF_Nearest) goto LAB_14e5e9df7;
      if (param_3 == TF_Bilinear) goto LAB_14e5e9de9;
      if (param_3 != TF_Trilinear) {
        EVar5 = None;
        goto LAB_14e5e9dfc;
      }
    }
    EVar5 = Linear;
  }
LAB_14e5e9dfc:
  pFVar7->MagFilter = EVar5;
  if (param_1 == TA_Wrap) {
    EVar6 = Repeat;
  }
  else if (param_1 == TA_Clamp) {
    EVar6 = ClampToEdge;
  }
  else if (param_1 == TA_Mirror) {
    EVar6 = MirroredRepeat;
  }
  else {
    EVar6 = None;
  }
  pFVar7->WrapS = EVar6;
  if (param_2 == TA_Wrap) {
    pFVar7->WrapT = Repeat;
  }
  else if (param_2 == TA_Clamp) {
    pFVar7->WrapT = ClampToEdge;
  }
  else if (param_2 == TA_Mirror) {
    pFVar7->WrapT = MirroredRepeat;
  }
  else {
    pFVar7->WrapT = None;
  }
  return pFVar7;
}

// Sanitize @ 14e612830

void __thiscall
FGLTFSamplerConverter::Sanitize
          (FGLTFSamplerConverter *this,TextureAddress *param_1,TextureAddress *param_2,
          TextureFilter *param_3,TextureGroup *param_4)

{
  ETextureSamplerFilter EVar1;
  TextureGroup TVar2;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  FTextureLODGroup *pFVar3;
  
  if (*param_3 != TF_Default) {
    *param_4 = TEXTUREGROUP_MAX;
    return;
  }
  TVar2 = *param_4;
  this_00 = UDeviceProfileManager::Get(false);
  this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
  this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
  pFVar3 = UTextureLODSettings::GetTextureLODGroup(this_02,TVar2);
  EVar1 = pFVar3->Filter;
  if (EVar1 == Point) {
    *param_3 = TF_Nearest;
    *param_4 = TEXTUREGROUP_MAX;
    return;
  }
  if (EVar1 == Bilinear) {
    *param_3 = TF_Bilinear;
    *param_4 = TEXTUREGROUP_MAX;
    return;
  }
  if (((EVar1 != Trilinear) && (EVar1 != AnisotropicPoint)) && (EVar1 != AnisotropicLinear)) {
    *param_3 = TF_MAX;
    *param_4 = TEXTUREGROUP_MAX;
    return;
  }
  *param_3 = TF_Trilinear;
  *param_4 = TEXTUREGROUP_MAX;
  return;
}


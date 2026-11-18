// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 12

// GetBaseMaterial @ 14e5f4d60

UMaterial * __cdecl FGLTFProxyMaterialUtilities::GetBaseMaterial(EGLTFJsonShadingModel param_1)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  UMaterial *pUVar5;
  wchar_t *pwVar6;
  int iVar7;
  FScriptContainerElement *local_78;
  undefined4 uStack_6c;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (SpecularGlossiness < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Utilities\\GLTFProxyMaterialUtilities.cpp"
                       ,0x28,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UMaterial *)(*pcVar1)();
      return pUVar5;
    }
    return (UMaterial *)0x0;
  }
  if (Materials[(int)param_1] != (UMaterial *)0x0) {
    return Materials[(int)param_1];
  }
  switch(param_1) {
  case Default:
    pwVar6 = L"Default";
    break;
  case Unlit:
    pwVar6 = L"Unlit";
    break;
  case ClearCoat:
    pwVar6 = L"ClearCoat";
    break;
  case Sheen:
    pwVar6 = L"Sheen";
    break;
  case Transmission:
    pwVar6 = L"Transmission";
    break;
  case SpecularGlossiness:
    pwVar6 = L"SpecularGlossiness";
  }
  ::FString::FString(&local_58,pwVar6);
  ::FString::ConcatCF(&local_38,L"/GLTFExporter/Materials/Proxy/M_GLTF_",&local_58);
  ::FString::ConcatFC(&local_48,&local_38,L".M_GLTF_");
  ::FString::ConcatFF(&local_68,&local_48,&local_58);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  iVar7 = 0;
  if (local_68.Data.ArrayNum == 0) {
    local_78 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_78 = local_68.Data.AllocatorInstance.Data;
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14e5f4ebb;
  }
  sVar3 = wcslen((wchar_t *)local_78);
  iVar7 = (int)sVar3;
LAB_14e5f4ebb:
  pUVar4 = Z_Construct_UClass_UMaterial_NoRegister();
  local_18._12_4_ = uStack_6c;
  local_18.Size = iVar7;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_18.DataPtr = (wchar_t *)local_78;
  pUVar5 = (UMaterial *)
           StaticLoadObject(pUVar4,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                            (FLinkerInstancingContext *)0x0);
  Materials[(int)param_1] = pUVar5;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// GetBlendMode @ 14e5f5190

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __cdecl
FGLTFProxyMaterialUtilities::GetBlendMode
          (UMaterialInterface *param_1,EBlendMode *param_2,bool param_3)

{
  bool bVar1;
  EBlendMode EVar2;
  EBlendMode EVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d0))();
  EVar2 = (**(code **)(*plVar4 + 0x460))(plVar4);
  EVar3 = (**(code **)(param_1->_padding_ + 0x460))(param_1);
  if ((param_3) && (EVar3 == EVar2)) {
    bVar1 = false;
  }
  else {
    *param_2 = EVar3;
    bVar1 = true;
  }
  return bVar1;
}

// GetIsThinSurface @ 14e5f68c0

bool __cdecl
FGLTFProxyMaterialUtilities::GetIsThinSurface
          (UMaterialInterface *param_1,bool *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d0))();
  cVar1 = (**(code **)(*plVar3 + 0x480))(plVar3);
  bVar2 = (bool)(**(code **)(param_1->_padding_ + 0x480))(param_1);
  if ((param_3) && (bVar2 == (bool)cVar1)) {
    bVar2 = false;
  }
  else {
    *param_2 = bVar2;
    bVar2 = true;
  }
  return bVar2;
}

// GetOpacityMaskClipValue @ 14e5f80c0

bool __cdecl
FGLTFProxyMaterialUtilities::GetOpacityMaskClipValue
          (UMaterialInterface *param_1,float *param_2,bool param_3)

{
  bool bVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  
  plVar2 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d0))();
  fVar3 = (float)(**(code **)(*plVar2 + 0x450))(plVar2);
  fVar4 = (float)(**(code **)(param_1->_padding_ + 0x450))(param_1);
  if ((param_3) && (fVar4 == fVar3)) {
    bVar1 = false;
  }
  else {
    *param_2 = fVar4;
    bVar1 = true;
  }
  return bVar1;
}

// GetParameterValue @ 14e5fbaa0

bool __cdecl
FGLTFProxyMaterialUtilities::GetParameterValue
          (UMaterialInterface *param_1,FMemoryImageMaterialParameterInfo *param_2,float *param_3,
          bool param_4)

{
  bool bVar1;
  float local_18;
  float local_14 [3];
  
  bVar1 = UMaterialInterface::GetScalarParameterValue(param_1,param_2,&local_18,param_4);
  if ((!bVar1) ||
     ((param_4 &&
      ((bVar1 = UMaterialInterface::GetScalarParameterDefaultValue(param_1,param_2,local_14), !bVar1
       || (local_14[0] == local_18)))))) {
    bVar1 = false;
  }
  else {
    *param_3 = local_18;
    bVar1 = true;
  }
  return bVar1;
}

// GetParameterValue @ 14e5fbb30

bool __cdecl
FGLTFProxyMaterialUtilities::GetParameterValue
          (UMaterialInterface *param_1,FMemoryImageMaterialParameterInfo *param_2,UTexture **param_3
          ,bool param_4)

{
  char cVar1;
  bool bVar2;
  UTexture *local_res8;
  UTexture *local_18 [2];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x418))(param_1,param_2,&local_res8);
  if ((cVar1 == '\0') ||
     ((param_4 &&
      ((bVar2 = UMaterialInterface::GetTextureParameterDefaultValue(param_1,param_2,local_18),
       !bVar2 || (local_18[0] == local_res8)))))) {
    bVar2 = false;
  }
  else {
    *param_3 = local_res8;
    bVar2 = true;
  }
  return bVar2;
}

// GetParameterValue @ 14e5fbbb0

bool __cdecl
FGLTFProxyMaterialUtilities::GetParameterValue
          (UMaterialInterface *param_1,FMemoryImageMaterialParameterInfo *param_2,
          FLinearColor *param_3,bool param_4)

{
  bool bVar1;
  FLinearColor_u_0 local_28;
  FLinearColor_u_0 local_18;
  
  bVar1 = UMaterialInterface::GetVectorParameterValue
                    (param_1,param_2,(FLinearColor *)&local_28._s_0,param_4);
  if (bVar1) {
    if (param_4) {
      bVar1 = UMaterialInterface::GetVectorParameterDefaultValue
                        (param_1,param_2,(FLinearColor *)&local_18._s_0);
      if ((!bVar1) ||
         ((((local_18._s_0.R == local_28._s_0.R && (local_18._s_0.G == local_28._s_0.G)) &&
           (local_18._s_0.B == local_28._s_0.B)) && (local_18._s_0.A == local_28._s_0.A))))
      goto LAB_14e5fbc38;
    }
    bVar1 = true;
    *(ulonglong *)&param_3->field0_0x0 = CONCAT44(local_28._s_0.G,local_28._s_0.R);
    *(ulonglong *)((longlong)&param_3->field0_0x0 + 8) = CONCAT44(local_28._s_0.A,local_28._s_0.B);
  }
  else {
LAB_14e5fbc38:
    bVar1 = false;
  }
  return bVar1;
}

// GetProxyMaterial @ 14e5fcc10

UMaterialInterface * __cdecl
FGLTFProxyMaterialUtilities::GetProxyMaterial(UMaterialInterface *param_1)

{
  UMaterialInterface *pUVar1;
  UGLTFMaterialExportOptions *pUVar2;
  
  pUVar2 = IInterface_AssetUserData::GetAssetUserData<UGLTFMaterialExportOptions>
                     ((IInterface_AssetUserData *)&param_1->_padding_);
  if (pUVar2 != (UGLTFMaterialExportOptions *)0x0) {
    pUVar1 = (pUVar2->Proxy).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMaterialInterface *)0x0;
}

// GetTwoSided @ 14e5feb90

bool __cdecl
FGLTFProxyMaterialUtilities::GetTwoSided(UMaterialInterface *param_1,bool *param_2,bool param_3)

{
  char cVar1;
  bool bVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x2d0))();
  cVar1 = (**(code **)(*plVar3 + 0x478))(plVar3);
  bVar2 = (bool)(**(code **)(param_1->_padding_ + 0x478))(param_1);
  if ((param_3) && (bVar2 == (bool)cVar1)) {
    bVar2 = false;
  }
  else {
    *param_2 = bVar2;
    bVar2 = true;
  }
  return bVar2;
}

// IsProxyMaterial @ 14e601c20

bool __cdecl FGLTFProxyMaterialUtilities::IsProxyMaterial(UMaterial *param_1)

{
  bool bVar1;
  FString *this;
  bool bVar2;
  FString local_18;
  
  bVar2 = false;
  if (param_1 != (UMaterial *)0x0) {
    this = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
    bVar2 = true;
    bVar1 = ::FString::StartsWith(this,L"/GLTFExporter/Materials/Proxy/M_GLTF_",0x25,IgnoreCase);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14e601c6c;
    }
  }
  bVar1 = false;
LAB_14e601c6c:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsProxyMaterial @ 14e601ca0

bool __cdecl FGLTFProxyMaterialUtilities::IsProxyMaterial(UMaterialInterface *param_1)

{
  bool bVar1;
  UObjectBaseUtility *this;
  FString *this_00;
  bool bVar2;
  FString local_18;
  
  bVar2 = false;
  if (param_1 == (UMaterialInterface *)0x0) {
    return false;
  }
  this = (UObjectBaseUtility *)(**(code **)(param_1->_padding_ + 0x2d0))();
  if (this != (UObjectBaseUtility *)0x0) {
    this_00 = UObjectBaseUtility::GetPathName(this,&local_18,(UObject *)0x0);
    bVar2 = true;
    bVar1 = ::FString::StartsWith(this_00,L"/GLTFExporter/Materials/Proxy/M_GLTF_",0x25,IgnoreCase);
    if (bVar1) {
      bVar1 = true;
      goto LAB_14e601cfd;
    }
  }
  bVar1 = false;
LAB_14e601cfd:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar1) {
    return false;
  }
  return true;
}

// SetProxyMaterial @ 14e613f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
FGLTFProxyMaterialUtilities::SetProxyMaterial
          (UMaterialInterface *param_1,UMaterialInterface *param_2)

{
  FName FVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FVar1 = (FName)IInterface_AssetUserData::GetAssetUserData<UGLTFMaterialExportOptions>
                           ((IInterface_AssetUserData *)&param_1->_padding_);
  if (FVar1 == (FName)0x0) {
    local_b8 = FVar1;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = UGLTFMaterialExportOptions::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar2);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transactional|RF_Public;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = param_1;
    local_a8._16_8_ = FVar1;
    FVar1 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar3 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,FVar1);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UMaterialInterface *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (((TObjectPtr<UMaterialInterface> *)((longlong)FVar1 + 0x28))->field0_0x0).DebugPtr = param_2;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 147a10350

UClass * __cdecl UCurveLinearColorAtlas::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveLinearColorAtlas",
               &Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton,
               StaticRegisterNativesUCurveLinearColorAtlas,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveLinearColorAtlas>,
               InternalVTableHelperCtorCaller<UCurveLinearColorAtlas>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton;
}

// UCurveLinearColorAtlas @ 147a27c30

UCurveLinearColorAtlas * __thiscall
UCurveLinearColorAtlas::UCurveLinearColorAtlas(UCurveLinearColorAtlas *this,FVTableHelper *param_1)

{
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->GradientCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradientCurves).ArrayNum = 0;
  (this->GradientCurves).ArrayMax = 0;
  return this;
}

// UCurveLinearColorAtlas @ 147a27c90

UCurveLinearColorAtlas * __thiscall
UCurveLinearColorAtlas::UCurveLinearColorAtlas
          (UCurveLinearColorAtlas *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UTexture2D::UTexture2D((UTexture2D *)this,param_1);
  this->TextureSize = 0x100;
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  (this->GradientCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GradientCurves).ArrayNum = 0;
  (this->GradientCurves).ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 6);
  *pbVar1 = *pbVar1 & 0xfe;
  *(undefined2 *)&this->_padding_ = 0x106;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x101;
  return this;
}

// ~UCurveLinearColorAtlas @ 147a2a650

void __thiscall UCurveLinearColorAtlas::~UCurveLinearColorAtlas(UCurveLinearColorAtlas *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  pFVar1 = (this->GradientCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UTexture2D::~UTexture2D((UTexture2D *)this);
  return;
}

// GetCurveIndex @ 147a4ed90

bool __thiscall
UCurveLinearColorAtlas::GetCurveIndex
          (UCurveLinearColorAtlas *this,UCurveLinearColor *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCurveLinearColor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (this->GradientCurves).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(this->GradientCurves).ArrayNum * 8) {
      *param_2 = -1;
      return false;
    }
    if (*(UCurveLinearColor **)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 8;
  }
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
  *param_2 = iVar2;
  return iVar2 != -1;
}

// GetCurvePosition @ 147a4ee30

bool __thiscall
UCurveLinearColorAtlas::GetCurvePosition
          (UCurveLinearColorAtlas *this,UCurveLinearColor *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCurveLinearColor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (this->GradientCurves).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(this->GradientCurves).ArrayNum * 8) {
      *param_2 = 0.0;
      return false;
    }
    if (*(UCurveLinearColor **)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 8;
  }
  *param_2 = 0.0;
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
  if (iVar2 == -1) {
    return false;
  }
  *param_2 = (float)iVar2;
  return true;
}

// GetPrivateStaticClass @ 147a570d0

UClass * __cdecl UCurveLinearColorAtlas::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveLinearColorAtlas",
               &Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton,
               StaticRegisterNativesUCurveLinearColorAtlas,0x188,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCurveLinearColorAtlas>,
               InternalVTableHelperCtorCaller<UCurveLinearColorAtlas>,local_res8,
               UTexture2D::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveLinearColorAtlas.InnerSingleton;
}

// PostLoad @ 147a66c00

void __thiscall UCurveLinearColorAtlas::PostLoad(UCurveLinearColorAtlas *this)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  
  UObject::PostLoad((UObject *)this);
  bVar4 = UTexture::IsCookPlatformTilingDisabled((UTexture *)this,(ITargetPlatformSettings *)0x0);
  if (bVar4) {
    pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
    *pbVar1 = *pbVar1 | 2;
  }
  bVar4 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar4) {
    lVar3 = this->_padding_;
    if (lVar3 != 0) {
      pUVar5 = UTextureCube::StaticClass();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(lVar3 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        return;
      }
    }
    (**(code **)(this->_padding_ + 0x328))(this);
  }
  return;
}

// StaticRegisterNativesUCurveLinearColorAtlas @ 147a97590

void __cdecl UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurvePosition @ 147aa2f90

void __cdecl
UCurveLinearColorAtlas::execGetCurvePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  UObject *pUVar3;
  int iVar4;
  longlong *plVar5;
  float *pfVar6;
  float local_res8 [2];
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pUVar3 = local_res10;
  pfVar6 = local_res8;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  plVar2 = *(longlong **)&param_1[9].field_0x10;
  plVar5 = plVar2;
  do {
    if (plVar5 == plVar2 + *(int *)&param_1[9].field_0x18) {
      *pfVar6 = 0.0;
LAB_147aa3097:
      *(undefined1 *)param_3 = 0;
      return;
    }
    if ((UObject *)*plVar5 == pUVar3) {
      *pfVar6 = 0.0;
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
      if (iVar4 != -1) {
        *pfVar6 = (float)iVar4;
        *(undefined1 *)param_3 = 1;
        return;
      }
      goto LAB_147aa3097;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}


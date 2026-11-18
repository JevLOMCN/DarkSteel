// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// UMaterialInstanceConstant @ 147f2e240

UMaterialInstanceConstant * __thiscall
UMaterialInstanceConstant::UMaterialInstanceConstant
          (UMaterialInstanceConstant *this,FVTableHelper *param_1)

{
  UMaterialInstance::UMaterialInstance((UMaterialInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
  return this;
}

// UMaterialInstanceConstant @ 147f2e290

UMaterialInstanceConstant * __thiscall
UMaterialInstanceConstant::UMaterialInstanceConstant
          (UMaterialInstanceConstant *this,FObjectInitializer *param_1)

{
  UMaterialInstance::UMaterialInstance((UMaterialInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->PhysMaterialMask).field0_0x0.DebugPtr = (UPhysicalMaterialMask *)0x0;
  return this;
}

// ~UMaterialInstanceConstant @ 147f2f3f0

void __thiscall
UMaterialInstanceConstant::~UMaterialInstanceConstant(UMaterialInstanceConstant *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IBlendableInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  UMaterialInstance::~UMaterialInstance((UMaterialInstance *)this);
  return;
}

// FinishDestroy @ 147f39330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMaterialInstanceConstant::FinishDestroy(UMaterialInstanceConstant *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  FMaterialCachedExpressionData *this_00;
  code *pcVar5;
  bool bVar6;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStackY_e8 [32];
  undefined1 auStack_b8 [16];
  code *apcStack_a8 [2];
  undefined **ppuStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined ***pppuStack_80;
  undefined1 auStack_78 [16];
  undefined **ppuStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined ***pppuStack_50;
  byte bStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (((this->_padding_ & 0x10) == 0) && (this->_padding_ != 0)) {
    pppuStack_80 = (undefined ***)0x0;
    apcStack_a8[0] =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FMaterialInstanceResource::GameThread_Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
    ppuStack_98 = &UE::Core::Private::Function::
                   TFunction_OwnedObject<`FMaterialInstanceResource::GameThread_Destroy'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
    lStack_90 = this->_padding_;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialInstanceResource::GameThread_Destroy_::__l2::TSTR_FDestroyMaterialInstanceResourceCommand179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      auStack_78._0_8_ = apcStack_a8[0];
      pppuStack_50 = pppuStack_80;
      ppuStack_68 = ppuStack_98;
      lStack_60 = lStack_90;
      uStack_58 = uStack_88;
      apcStack_a8[0] = (code *)0x0;
      bStack_48 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterialInstanceResource::GameThread_Destroy'::__l2::TSTR_FDestroyMaterialInstanceResourceCommand179>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_78,pFVar7);
      uVar9 = (ulonglong)bStack_48;
      if (2 < uVar9) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_78._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(auStack_78 + 0x10);
          if (pppuStack_50 != (undefined ***)0x0) {
            pppuVar8 = pppuStack_50;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(auStack_78);
      }
    }
    if (apcStack_a8[0] != (code *)0x0) {
      pppuVar8 = &ppuStack_98;
      if (pppuStack_80 != (undefined ***)0x0) {
        pppuVar8 = pppuStack_80;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    this->_padding_ = 0;
  }
  plVar10 = (longlong *)this->_padding_;
  iVar3 = (int)this->_padding_;
  plVar2 = plVar10 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<FMaterialResource_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_b8);
    }
    if (plVar10 == plVar2) break;
    puVar4 = (undefined8 *)*plVar10;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    plVar10 = plVar10 + 1;
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  puVar4 = (undefined8 *)this->_padding_;
  if (puVar4 != (undefined8 *)0x0) {
    this->_padding_ = 0;
    if ((void *)*puVar4 != (void *)0x0) {
      FMemory::Free((void *)*puVar4);
    }
    ::operator_delete(puVar4,0x10);
  }
  this_00 = (FMaterialCachedExpressionData *)this->_padding_;
  if (this_00 != (FMaterialCachedExpressionData *)0x0) {
    this->_padding_ = 0;
    FMaterialCachedExpressionData::~FMaterialCachedExpressionData(this_00);
    ::operator_delete(this_00,0x4e0);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetPhysicalMaterialMask @ 147f422d0

UPhysicalMaterialMask * __thiscall
UMaterialInstanceConstant::GetPhysicalMaterialMask(UMaterialInstanceConstant *this)

{
  return (this->PhysMaterialMask).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 147f43680

UClass * __cdecl UMaterialInstanceConstant::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialInstanceConstant.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UMaterialInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MaterialInstanceConstant",
               &Z_Registration_Info_UClass_UMaterialInstanceConstant.InnerSingleton,
               StaticRegisterNativesUMaterialInstanceConstant,0x2e8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMaterialInstanceConstant>,
               InternalVTableHelperCtorCaller<UMaterialInstanceConstant>,local_res8,
               UMaterialInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialInstanceConstant.InnerSingleton;
}

// K2_GetScalarParameterValue @ 147f4b820

float __thiscall
UMaterialInstanceConstant::K2_GetScalarParameterValue(UMaterialInstanceConstant *this,FName param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  float local_40 [8];
  char local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  local_58[2] = param_1.Number;
  local_58[1] = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = -1;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(this->_padding_ + 0x410))(this,0,local_58,local_40,3);
  if (cVar2 == '\0') {
    return 0.0;
  }
  if (local_20 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Scalar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  return local_40[0];
}

// K2_GetTextureCollectionParameterValue @ 147f4ba30

UTextureCollection * __thiscall
UMaterialInstanceConstant::K2_GetTextureCollectionParameterValue
          (UMaterialInstanceConstant *this,FName param_1)

{
  char cVar1;
  UTextureCollection *pUVar2;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  UTextureCollection *local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  local_58[2] = param_1.Number;
  local_58[1] = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))
                    (this,CONCAT71(param_1._1_7_ >> 0x20,4),local_58,local_40,3);
  pUVar2 = (UTextureCollection *)0x0;
  if (cVar1 != '\0') {
    pUVar2 = local_40[0];
  }
  return pUVar2;
}

// K2_GetTextureParameterValue @ 147f4bb90

UTexture * __thiscall
UMaterialInstanceConstant::K2_GetTextureParameterValue
          (UMaterialInstanceConstant *this,FName param_1)

{
  char cVar1;
  UTexture *pUVar2;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  UTexture *local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  local_58[2] = param_1.Number;
  local_58[1] = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar1 = (**(code **)(this->_padding_ + 0x410))
                    (this,CONCAT71(param_1._1_7_ >> 0x20,3),local_58,local_40,3);
  pUVar2 = (UTexture *)0x0;
  if (cVar1 != '\0') {
    pUVar2 = local_40[0];
  }
  return pUVar2;
}

// K2_GetVectorParameterValue @ 147f4bcf0

FLinearColor * __thiscall
UMaterialInstanceConstant::K2_GetVectorParameterValue
          (UMaterialInstanceConstant *this,FLinearColor *__return_storage_ptr__,FName param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FLinearColor *pFVar5;
  uint local_58 [3];
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  char local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_58[0] = (uint)param_1.ComparisonIndex.Value;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  local_58[1] = 0;
  local_14 = 0;
  lVar1 = this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  local_58[2] = param_1.Number;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = -1;
  local_18 = 0xffffffff;
  cVar3 = (**(code **)(lVar1 + 0x410))(this,1,local_58,&local_40,3);
  if (cVar3 != '\0') {
    if (local_20 != '\x01') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EMaterialParameterType::Vector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                         ,0x177,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FLinearColor *)(*pcVar2)();
        return pFVar5;
      }
    }
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = local_40;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uStack_38;
  }
  return __return_storage_ptr__;
}

// PostLoad @ 147f4dbc0

void __thiscall UMaterialInstanceConstant::PostLoad(UMaterialInstanceConstant *this)

{
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,Materials,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Materials,true);
  UMaterialInstance::PostLoad((UMaterialInstance *)this);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// StaticRegisterNativesUMaterialInstanceConstant @ 147f52c70

void __cdecl UMaterialInstanceConstant::StaticRegisterNativesUMaterialInstanceConstant(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMaterialInstanceConstant_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execK2_GetScalarParameterValue @ 147f58500

void __cdecl
UMaterialInstanceConstant::execK2_GetScalarParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 local_res8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_50 [8];
  char local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_64 = 0;
  local_5c = 0xffffffff;
  local_58 = 2;
  local_30 = -1;
  local_28 = 0xffffffff;
  local_68 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_24 = 0;
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,0,&local_68,local_50,3);
  if (cVar3 == '\0') {
    *(undefined4 *)param_3 = 0;
  }
  else {
    if (local_30 != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type == EMaterialParameterType::Scalar",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                         ,0x176,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)param_3 = local_50[0];
  }
  return;
}

// execK2_GetTextureCollectionParameterValue @ 147f58900

void __cdecl
UMaterialInstanceConstant::execK2_GetTextureCollectionParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_54 = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_58 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,4,&local_58,local_40,3);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = local_40[0];
  }
  *(undefined8 *)param_3 = uVar3;
  return;
}

// execK2_GetTextureParameterValue @ 147f58be0

void __cdecl
UMaterialInstanceConstant::execK2_GetTextureParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined8 local_40 [4];
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_54 = 0;
  local_4c = 0xffffffff;
  local_48 = 2;
  local_20 = 0xff;
  local_58 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_18 = 0xffffffff;
  local_14 = 0;
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,3,&local_58,local_40,3);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = local_40[0];
  }
  *(undefined8 *)param_3 = uVar3;
  return;
}

// execK2_GetVectorParameterValue @ 147f58f20

void __cdecl
UMaterialInstanceConstant::execK2_GetVectorParameterValue
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_res8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  char local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  uVar6 = __real_3f800000;
  local_94 = 0;
  local_8c = 0xffffffff;
  local_88 = 2;
  local_60 = -1;
  local_58 = 0xffffffff;
  local_98 = (undefined4)local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_90 = (undefined4)((ulonglong)local_res8 >> 0x20);
  local_54 = 0;
  cVar3 = (**(code **)(*(longlong *)param_1 + 0x410))(param_1,1,&local_98,&local_80,3);
  uVar5 = 0;
  uVar7 = 0;
  uVar8 = 0;
  if (((cVar3 != '\0') &&
      (uVar5 = local_78, uVar6 = local_74, uVar7 = local_7c, uVar8 = local_80, local_60 != '\x01'))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type == EMaterialParameterType::Vector",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                            ,0x177,L""), uVar5 = local_78, uVar6 = local_74, uVar7 = local_7c,
        uVar8 = local_80, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)param_3 = uVar8;
  *(undefined4 *)((longlong)param_3 + 4) = uVar7;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  return;
}


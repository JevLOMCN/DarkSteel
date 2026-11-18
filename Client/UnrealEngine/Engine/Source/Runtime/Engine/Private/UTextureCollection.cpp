// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 148876bc0

UClass * __cdecl UTextureCollection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCollection",
               &Z_Registration_Info_UClass_UTextureCollection.InnerSingleton,
               StaticRegisterNativesUTextureCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureCollection>,
               InternalVTableHelperCtorCaller<UTextureCollection>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCollection.InnerSingleton;
}

// UTextureCollection @ 14887e4a0

UTextureCollection * __thiscall
UTextureCollection::UTextureCollection(UTextureCollection *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UTextureCollection__6B_;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  this->PrivateResource = (FTextureCollectionResource *)0x0;
  this->PrivateResourceRenderThread = (FTextureCollectionResource *)0x0;
  return this;
}

// UTextureCollection @ 14887e4e0

UTextureCollection * __thiscall
UTextureCollection::UTextureCollection(UTextureCollection *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UTextureCollection__6B_;
  (this->Textures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Textures).ArrayNum = 0;
  (this->Textures).ArrayMax = 0;
  this->PrivateResource = (FTextureCollectionResource *)0x0;
  this->PrivateResourceRenderThread = (FTextureCollectionResource *)0x0;
  return this;
}

// ~UTextureCollection @ 14887f020

void __thiscall UTextureCollection::~UTextureCollection(UTextureCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTextureCollection__6B_;
  pFVar1 = (this->Textures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// CreateResource @ 148887f70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

FTextureCollectionResource * __thiscall UTextureCollection::CreateResource(UTextureCollection *this)

{
  ERHIBindlessConfiguration EVar1;
  FBindlessTextureCollectionResource *pFVar2;
  
  EVar1 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
  if ((EVar1 != Disabled) && (GRHIGlobals.bSupportsBindless != false)) {
    pFVar2 = ::operator_new(0x48);
    if (pFVar2 != (FBindlessTextureCollectionResource *)0x0) {
      pFVar2 = FBindlessTextureCollectionResource::FBindlessTextureCollectionResource(pFVar2,this);
      return (FTextureCollectionResource *)pFVar2;
    }
  }
  return (FTextureCollectionResource *)0x0;
}

// GetPrivateStaticClass @ 14888fc20

UClass * __cdecl UTextureCollection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextureCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextureCollection",
               &Z_Registration_Info_UClass_UTextureCollection.InnerSingleton,
               StaticRegisterNativesUTextureCollection,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTextureCollection>,
               InternalVTableHelperCtorCaller<UTextureCollection>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextureCollection.InnerSingleton;
}

// GetResource @ 148890010

FTextureCollectionResource * __thiscall UTextureCollection::GetResource(UTextureCollection *this)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      bVar1 = IsInSlateThread();
      if (!bVar1) {
        bVar1 = (*IsInAsyncLoadingThread)();
        if (!bVar1) {
          bVar1 = IsInParallelRenderingThread();
          if (!bVar1) {
            bVar1 = IsInRHIThread();
            if (!bVar1) {
              `UTextureCollection::GetResource'::__l2::<lambda_1>::operator()(local_res10);
              return (FTextureCollectionResource *)0x0;
            }
          }
          return this->PrivateResourceRenderThread;
        }
      }
    }
  }
  return this->PrivateResource;
}

// GetResource @ 148890080

FTextureCollectionResource * __thiscall UTextureCollection::GetResource(UTextureCollection *this)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  bVar1 = IsInParallelGameThread();
  if (!bVar1) {
    bVar1 = IsInGameThread();
    if (!bVar1) {
      bVar1 = IsInSlateThread();
      if (!bVar1) {
        bVar1 = (*IsInAsyncLoadingThread)();
        if (!bVar1) {
          bVar1 = IsInParallelRenderingThread();
          if (!bVar1) {
            bVar1 = IsInRHIThread();
            if (!bVar1) {
              `UTextureCollection::GetResource'::__l2::<lambda_1>::operator()(local_res10);
              return (FTextureCollectionResource *)0x0;
            }
          }
          return this->PrivateResourceRenderThread;
        }
      }
    }
  }
  return this->PrivateResource;
}

// IsVirtualCollection @ 148895f60

bool __thiscall UTextureCollection::IsVirtualCollection(UTextureCollection *this)

{
  return false;
}

// PostLoad @ 1488966e0

void __thiscall UTextureCollection::PostLoad(UTextureCollection *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  UObject::PostLoad((UObject *)this);
  bVar3 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar3) {
    pFVar4 = (this->Textures).AllocatorInstance.Data;
    iVar2 = (this->Textures).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->Textures).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UTexture>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar4 == pFVar1) break;
      if (*(UObject **)pFVar4 != (UObject *)0x0) {
        UObject::ConditionalPostLoad(*(UObject **)pFVar4);
      }
      pFVar4 = pFVar4 + 8;
    }
    UpdateResource(this);
  }
  return;
}

// ReleaseResource @ 148897530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTextureCollection::ReleaseResource(UTextureCollection *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UTextureCollection *pUStack_70;
  FTextureCollectionResource *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UTextureCollection *pUStack_40;
  FTextureCollectionResource *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->PrivateResource == (FTextureCollectionResource *)0x0) {
    return;
  }
  bVar2 = IsInActualRenderingThread();
  if (((bVar2) || (bVar2 = IsInRHIThread(), bVar2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInActualRenderingThread() && !IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCollection.cpp"
                         ,0xa7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::`5'::<lambda_1>,1,0>::
              _vftable_;
  local_68 = this->PrivateResource;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UTextureCollection::ReleaseResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pUStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UTextureCollection::ReleaseResource_::__l5::TSTR_DeleteResource170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UTextureCollection::ReleaseResource'::__l5::TSTR_DeleteResource170>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  this->PrivateResource = (FTextureCollectionResource *)0x0;
  return;
}

// SetResource @ 14889b910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTextureCollection::SetResource(UTextureCollection *this,FTextureCollectionResource *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UTextureCollection *pUStack_70;
  FTextureCollectionResource *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UTextureCollection *pUStack_40;
  FTextureCollectionResource *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar2 = IsInActualRenderingThread();
  if (!bVar2) {
    bVar2 = IsInRHIThread();
    if (!bVar2) goto LAB_14889b973;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsInActualRenderingThread() && !IsInRHIThread()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCollection.cpp"
                     ,0x6e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14889b973:
  this->PrivateResource = param_1;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UTextureCollection::SetResource'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UTextureCollection::SetResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_60 = (undefined ***)0x0;
  pUStack_70 = this;
  local_68 = param_1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UTextureCollection::SetResource_::__l2::TSTR_SetResourceRenderThread113>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pUStack_40 = pUStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UTextureCollection::SetResource'::__l2::TSTR_SetResourceRenderThread113>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
    if (2 < uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

// StaticRegisterNativesUTextureCollection @ 14889bbd0

void __cdecl UTextureCollection::StaticRegisterNativesUTextureCollection(void)

{
  return;
}

// UpdateResource @ 14889e690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTextureCollection::UpdateResource(UTextureCollection *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *pFVar4;
  FCommandList *pFVar5;
  FRenderCommandTag *pFVar6;
  FTextureCollectionResource *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  wchar_t *pwVar10;
  undefined ***pppuVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStackY_1d8 [32];
  FLLMScope local_1a8 [2];
  FMemScope local_1a0;
  FName local_198;
  FString local_190;
  code *local_178 [2];
  undefined **local_168;
  UTextureCollection *pUStack_160;
  FTextureCollectionResource *local_158;
  undefined ***local_150;
  code *local_148 [2];
  undefined **local_138;
  UTextureCollection *pUStack_130;
  FTextureCollectionResource *local_128;
  undefined ***local_120;
  code *local_118 [2];
  undefined **local_108;
  UTextureCollection *pUStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  undefined1 local_e8 [16];
  undefined **local_d8;
  UTextureCollection *pUStack_d0;
  FTextureCollectionResource *local_c8;
  undefined ***local_c0;
  byte local_b8;
  undefined1 local_a8 [16];
  undefined **local_98;
  UTextureCollection *pUStack_90;
  FTextureCollectionResource *local_88;
  undefined ***local_80;
  byte local_78;
  undefined1 local_68 [16];
  undefined **local_58;
  UTextureCollection *pUStack_50;
  undefined8 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if (this->PrivateResource != (FTextureCollectionResource *)0x0) {
    bVar3 = IsInActualRenderingThread();
    if (((bVar3) || (bVar3 = IsInRHIThread(), bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsInActualRenderingThread() && !IsInRHIThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCollection.cpp"
                           ,0xa7,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_150 = (undefined ***)0x0;
    local_168 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UTextureCollection::ReleaseResource'::`5'::<lambda_1>,1,0>::
                 _vftable_;
    local_158 = this->PrivateResource;
    local_178[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UTextureCollection::ReleaseResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pUStack_160 = this;
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTextureCollection::ReleaseResource_::__l5::TSTR_DeleteResource170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_178);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_e8._0_8_ = local_178[0];
      local_c0 = local_150;
      local_d8 = local_168;
      pUStack_d0 = pUStack_160;
      local_c8 = local_158;
      local_178[0] = (code *)0x0;
      local_b8 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UTextureCollection::ReleaseResource'::__l5::TSTR_DeleteResource170>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_e8,pFVar6);
      uVar13 = (ulonglong)local_b8;
      if ((2 < uVar13) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_e8._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(local_e8 + 0x10);
          if (local_c0 != (undefined ***)0x0) {
            pppuVar11 = local_c0;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_e8);
      }
    }
    if (local_178[0] != (code *)0x0) {
      pppuVar11 = &local_168;
      if (local_150 != (undefined ***)0x0) {
        pppuVar11 = local_150;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    this->PrivateResource = (FTextureCollectionResource *)0x0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar10 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar10,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return;
  }
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  pFVar7 = (FTextureCollectionResource *)(**(code **)(this->_padding_ + 0x2b0))(this);
  if (pFVar7 != (FTextureCollectionResource *)0x0) {
    FLLMScope::FLLMScope(local_1a8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_1a0,Textures,true);
    this->PrivateResource = pFVar7;
    pFVar8 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_190,(UObject *)0x0);
    iVar1 = (pFVar8->Data).ArrayNum;
    iVar12 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar12 = 0;
    }
    pFVar9 = ::FName::FName(&local_198,iVar12,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                            FNAME_Add);
    pFVar7->_padding_ = (longlong)*pFVar9;
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    local_120 = (undefined ***)0x0;
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UTextureCollection::UpdateResource'::`8'::<lambda_1>,1,0>::
                 _vftable_;
    local_148[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UTextureCollection::UpdateResource'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pUStack_130 = this;
    local_128 = pFVar7;
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UTextureCollection::UpdateResource_::__l8::TSTR_SetTextureCollectionResource200>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_148);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_a8._0_8_ = local_148[0];
      local_80 = local_120;
      local_98 = local_138;
      pUStack_90 = pUStack_130;
      local_88 = local_128;
      local_148[0] = (code *)0x0;
      local_78 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UTextureCollection::UpdateResource'::__l8::TSTR_SetTextureCollectionResource200>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_a8,pFVar6);
      uVar13 = (ulonglong)local_78;
      if ((2 < uVar13) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_a8._0_8_ != (code *)0x0) {
          pppuVar11 = (undefined ***)(local_a8 + 0x10);
          if (local_80 != (undefined ***)0x0) {
            pppuVar11 = local_80;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(local_a8);
      }
    }
    if (local_148[0] != (code *)0x0) {
      pppuVar11 = &local_138;
      if (local_120 != (undefined ***)0x0) {
        pppuVar11 = local_120;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    FMemScope::~FMemScope(&local_1a0);
    FLLMScope::~FLLMScope(local_1a8);
    return;
  }
  bVar3 = IsInActualRenderingThread();
  if (((bVar3) || (bVar3 = IsInRHIThread(), bVar3)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInActualRenderingThread() && !IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureCollection.cpp"
                         ,0x6e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->PrivateResource = (FTextureCollectionResource *)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UTextureCollection::SetResource'::`2'::<lambda_1>,1,0>::
               _vftable_;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UTextureCollection::SetResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  local_f0 = (undefined ***)0x0;
  local_f8 = 0;
  pUStack_100 = this;
  pFVar4 = FRenderCommandList::GetInstanceTLS();
  if (pFVar4 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UTextureCollection::SetResource_::__l2::TSTR_SetResourceRenderThread113>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
    local_68._0_8_ = local_118[0];
    local_40 = local_f0;
    local_58 = local_108;
    pUStack_50 = pUStack_100;
    local_48 = local_f8;
    local_118[0] = (code *)0x0;
    local_38 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UTextureCollection::SetResource'::__l2::TSTR_SetResourceRenderThread113>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_68,pFVar6);
    uVar13 = (ulonglong)local_38;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar11 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar11 = local_40;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_68);
    }
  }
  if (local_118[0] != (code *)0x0) {
    pppuVar11 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar11 = local_f0;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  return;
}

// operator() @ 150532630

bool __thiscall `UTextureCollection::GetResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7437876513258602349>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7437876513258602349>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150532670

bool __thiscall `UTextureCollection::GetResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7437876513258602365>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7437876513258602365>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


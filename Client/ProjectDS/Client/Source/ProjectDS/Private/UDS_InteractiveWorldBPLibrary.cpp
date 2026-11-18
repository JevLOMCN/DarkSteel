// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4c9d20

UClass * __cdecl UDS_InteractiveWorldBPLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractiveWorldBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractiveWorldBPLibrary",
               &Z_Registration_Info_UClass_UDS_InteractiveWorldBPLibrary.InnerSingleton,
               StaticRegisterNativesUDS_InteractiveWorldBPLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractiveWorldBPLibrary>,
               InternalVTableHelperCtorCaller<UDS_InteractiveWorldBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractiveWorldBPLibrary.InnerSingleton;
}

// UDS_InteractiveWorldBPLibrary @ 14b4cbb50

UDS_InteractiveWorldBPLibrary * __thiscall
UDS_InteractiveWorldBPLibrary::UDS_InteractiveWorldBPLibrary
          (UDS_InteractiveWorldBPLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_InteractiveWorldBPLibrary__6B_;
  return this;
}

// ~UDS_InteractiveWorldBPLibrary @ 14b4cc1c0

void __thiscall
UDS_InteractiveWorldBPLibrary::~UDS_InteractiveWorldBPLibrary(UDS_InteractiveWorldBPLibrary *this)

{
  *(undefined ***)this = &___7UDS_InteractiveWorldBPLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd3e0

UClass * __cdecl UDS_InteractiveWorldBPLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractiveWorldBPLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractiveWorldBPLibrary",
               &Z_Registration_Info_UClass_UDS_InteractiveWorldBPLibrary.InnerSingleton,
               StaticRegisterNativesUDS_InteractiveWorldBPLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractiveWorldBPLibrary>,
               InternalVTableHelperCtorCaller<UDS_InteractiveWorldBPLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractiveWorldBPLibrary.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractiveWorldBPLibrary @ 14b4cdc50

void __cdecl UDS_InteractiveWorldBPLibrary::StaticRegisterNativesUDS_InteractiveWorldBPLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_InteractiveWorldBPLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIW_AddWarning @ 14b4ced00

void __cdecl
UDS_InteractiveWorldBPLibrary::execIW_AddWarning(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  longlong lVar2;
  void *local_28;
  undefined8 local_20;
  FString local_18;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  _Src = local_28;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar2 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  IW_AddWarning(&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execRefreshInteractVolume @ 14b4cf630

void __cdecl
UDS_InteractiveWorldBPLibrary::execRefreshInteractVolume
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ADS_WorldInteractVolume *local_res10 [3];
  
  local_res10[0] = (ADS_WorldInteractVolume *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RefreshInteractVolume(local_res10[0]);
  return;
}

// execResizeRenderTarget2D @ 14b4cf7d0

void __cdecl
UDS_InteractiveWorldBPLibrary::execResizeRenderTarget2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  int local_res20 [2];
  UTextureRenderTarget2D *local_18 [2];
  
  local_18[0] = (UTextureRenderTarget2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResizeRenderTarget2D(local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execVector3ToVector2 @ 14b4cf9f0

void __cdecl
UDS_InteractiveWorldBPLibrary::execVector3ToVector2(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = local_28;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_20;
  return;
}

// UDS_InteractiveWorldBPLibrary @ 14b999c70

UDS_InteractiveWorldBPLibrary * __thiscall
UDS_InteractiveWorldBPLibrary::UDS_InteractiveWorldBPLibrary
          (UDS_InteractiveWorldBPLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDS_InteractiveWorldBPLibrary__6B_;
  return this;
}

// IW_AddWarning @ 14b9b5c70

void __cdecl UDS_InteractiveWorldBPLibrary::IW_AddWarning(FString *param_1)

{
  FTokenizedMessage *pFVar1;
  FScriptContainerElement *pFVar2;
  FMessageLog *this;
  FText *pFVar3;
  TSharedRef<FTokenizedMessage,1> *pTVar4;
  FString *pFVar5;
  TSharedRef<FTextToken,1> *pTVar6;
  FName local_res8;
  TSharedRef<IMessageToken,1> local_e8;
  TSharedRef<IMessageToken,1> local_d8;
  TSharedRef<FTokenizedMessage,1> local_c8;
  TSharedRef<FTextToken,1> local_b8;
  FText local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FTextToken,1> local_88;
  FText local_78;
  FString local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  FText local_48;
  FMessageLog local_38;
  
  ::FName::FName(&local_res8,"PIE");
  this = FMessageLog::FMessageLog(&local_38,&local_res8);
  pFVar3 = FText::FText(&local_48);
  pTVar4 = FMessageLog::Warning(this,&local_58,pFVar3);
  pFVar1 = pTVar4->Object;
  pFVar5 = ::FString::FString(&local_68,L"Interactive World : ");
  pFVar3 = FText::FromString(&local_78,pFVar5);
  pTVar6 = FTextToken::Create(&local_88,pFVar3,true);
  local_d8.Object = (IMessageToken *)pTVar6->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = FTokenizedMessage::AddToken(pFVar1,&local_98,&local_d8);
  pFVar1 = pTVar4->Object;
  pFVar3 = FText::FromString(&local_a8,param_1);
  pTVar6 = FTextToken::Create(&local_b8,pFVar3,true);
  local_e8.Object = (IMessageToken *)pTVar6->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FTokenizedMessage::AddToken(pFVar1,&local_c8,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  FMessageLog::~FMessageLog(&local_38);
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// RefreshInteractVolume @ 14b9c1690

void __cdecl UDS_InteractiveWorldBPLibrary::RefreshInteractVolume(ADS_WorldInteractVolume *param_1)

{
  return;
}

// ResizeRenderTarget2D @ 14b9c31c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UDS_InteractiveWorldBPLibrary::ResizeRenderTarget2D
          (UTextureRenderTarget2D *param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  FTextureResource *pFVar3;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar4;
  int iVar5;
  code **ppcVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  int iStack_a8;
  FTextureResource *pFStack_a0;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  code *apcStack_88 [2];
  code *apcStack_78 [3];
  code **ppcStack_60;
  undefined1 auStack_58 [40];
  code **ppcStack_30;
  byte bStack_28;
  ulonglong uStack_18;
  
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((param_1->SizeX != param_2) || (param_1->SizeY != param_3)) {
    param_1->SizeX = param_2;
    param_1->SizeY = param_3;
    if (param_1->bAutoGenerateMips != '\0') {
      if (param_3 < param_2) {
        param_3 = param_2;
      }
      iStack_a8 = 0x1f;
      if (param_3 != 0U) {
        for (; (uint)param_3 >> iStack_a8 == 0; iStack_a8 = iStack_a8 + -1) {
        }
      }
      iVar5 = 0;
      if (param_3 != 0U) {
        iVar5 = iStack_a8;
      }
      param_1->NumMips = iVar5 + 1;
    }
    pFVar3 = UTexture::GetResource((UTexture *)param_1);
    if (pFVar3 == (FTextureResource *)0x0) {
      (**(code **)(param_1->_padding_ + 0x328))();
    }
    else {
      pFStack_a0 = UTexture::GetResource((UTexture *)param_1);
      iStack_98 = param_1->SizeX;
      iStack_94 = param_1->SizeY;
      iStack_90 = param_1->NumMips;
      apcStack_88[0] = (code *)0x0;
      ppcStack_60 = FMemory::Malloc(0x20,8);
      *ppcStack_60 = (code *)&UE::Core::Private::Function::
                              TFunction_OwnedObject<`UTextureRenderTarget2D::ResizeTarget'::`11'::<lambda_1>,1,1>
                              ::_vftable_;
      ppcStack_60[1] = (code *)pFStack_a0;
      ppcStack_60[2] = (code *)CONCAT44(iStack_94,iStack_98);
      ppcStack_60[3] = (code *)CONCAT44(uStack_8c,iStack_90);
      if (ppcStack_60 + 1 != (code **)0x0) {
        apcStack_88[0] =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UTextureRenderTarget2D::ResizeTarget'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
             ::Call;
      }
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UTextureRenderTarget2D::ResizeTarget_::__l11::TSTR_ResizeRenderTarget192>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_88);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        auStack_58._0_8_ = apcStack_88[0];
        ppcStack_30 = ppcStack_60;
        ppcStack_60 = (code **)0x0;
        auStack_58._16_8_ = apcStack_78[0];
        auStack_58._24_8_ = apcStack_78[1];
        auStack_58._32_8_ = apcStack_78[2];
        apcStack_88[0] = (code *)0x0;
        bStack_28 = 2;
        pFVar4 = (FRenderCommandTag *)
                 TRenderCommandTag<`UTextureRenderTarget2D::ResizeTarget'::__l11::TSTR_ResizeRenderTarget192>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)auStack_58,pFVar4);
        uVar7 = (ulonglong)bStack_28;
        if (2 < uVar7) {
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
                      ::__l2::Destructors)[uVar7] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)auStack_58._0_8_ != (code *)0x0) {
            ppcVar6 = (code **)(auStack_58 + 0x10);
            if (ppcStack_30 != (code **)0x0) {
              ppcVar6 = ppcStack_30;
            }
            (**(code **)(*ppcVar6 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(auStack_58);
        }
      }
      if (apcStack_88[0] != (code *)0x0) {
        ppcVar6 = apcStack_88 + 2;
        if (ppcStack_60 != (code **)0x0) {
          ppcVar6 = ppcStack_60;
        }
        (**(code **)(*ppcVar6 + 0x10))();
      }
    }
  }
  return;
}


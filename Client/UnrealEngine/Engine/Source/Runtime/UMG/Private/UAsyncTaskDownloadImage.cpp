// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468dd9e0

UClass * __cdecl UAsyncTaskDownloadImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"AsyncTaskDownloadImage",
               &Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton,
               StaticRegisterNativesUAsyncTaskDownloadImage,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAsyncTaskDownloadImage>,
               InternalVTableHelperCtorCaller<UAsyncTaskDownloadImage>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton;
}

// UAsyncTaskDownloadImage @ 146900370

UAsyncTaskDownloadImage * __thiscall
UAsyncTaskDownloadImage::UAsyncTaskDownloadImage
          (UAsyncTaskDownloadImage *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncTaskDownloadImage__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFail = 0;
  *(undefined8 *)&(this->OnFail).field_0x8 = 0;
  *(undefined8 *)&(this->OnFail).field_0x10 = 0;
  return this;
}

// UAsyncTaskDownloadImage @ 1469003c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncTaskDownloadImage * __thiscall
UAsyncTaskDownloadImage::UAsyncTaskDownloadImage
          (UAsyncTaskDownloadImage *this,FObjectInitializer *param_1)

{
  FUObjectItem *this_00;
  
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncTaskDownloadImage__6B_;
  *(undefined8 *)&this->OnSuccess = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x8 = 0;
  *(undefined8 *)&(this->OnSuccess).field_0x10 = 0;
  *(undefined8 *)&this->OnFail = 0;
  *(undefined8 *)&(this->OnFail).field_0x8 = 0;
  *(undefined8 *)&(this->OnFail).field_0x10 = 0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  return this;
}

// ~UAsyncTaskDownloadImage @ 146904420

void __thiscall UAsyncTaskDownloadImage::~UAsyncTaskDownloadImage(UAsyncTaskDownloadImage *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncTaskDownloadImage__6B_;
  pvVar1 = *(void **)&(this->OnFail).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFail);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// DownloadImage @ 146915b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncTaskDownloadImage * __cdecl UAsyncTaskDownloadImage::DownloadImage(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UAsyncTaskDownloadImage *pUVar6;
  FString *pFVar7;
  FHttpModule *pFVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong *plVar11;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  TReferenceControllerBase<1> *local_e0;
  UAsyncTaskDownloadImage *local_d8;
  FString local_d0;
  FString local_c0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar5);
  local_a8._8_8_ = pUVar4;
  pUVar6 = (UAsyncTaskDownloadImage *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar11 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pFVar7 = ::FString::FString(&local_c0,param_1);
  pFVar8 = FHttpModule::Get();
  (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,&local_e8);
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_e8 + 0xf0))();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar6 = (UAsyncTaskDownloadImage *)(*pcVar2)();
      return pUVar6;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncTaskDownloadImage____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UAsyncTaskDownloadImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    puVar9[3] = 0;
    local_d8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UAsyncTaskDownloadImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_d8);
    puVar9[4] = HandleImageRequest;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  (**(code **)(*local_e8 + 0x68))(local_e8,pFVar7);
  plVar11 = local_e8;
  pcVar2 = *(code **)(*local_e8 + 0x60);
  ::FString::FString(&local_d0,L"GET");
  (*pcVar2)(plVar11,&local_d0);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  (**(code **)(*local_e8 + 0xe8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e0);
  pFVar1 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 146921630

UClass * __cdecl UAsyncTaskDownloadImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"AsyncTaskDownloadImage",
               &Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton,
               StaticRegisterNativesUAsyncTaskDownloadImage,0x60,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAsyncTaskDownloadImage>,
               InternalVTableHelperCtorCaller<UAsyncTaskDownloadImage>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncTaskDownloadImage.InnerSingleton;
}

// HandleImageRequest @ 146927d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
UAsyncTaskDownloadImage::HandleImageRequest
          (UAsyncTaskDownloadImage *this,TSharedPtr<IHttpRequest,1> *param_1,
          TSharedPtr<IHttpResponse,1> *param_2,bool param_3)

{
  byte *pbVar1;
  FName FVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  code *pcVar5;
  FCommandList *pFVar6;
  code *pcVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FUObjectItem *this_00;
  IHttpResponse *pIVar14;
  longlong lVar15;
  FName *pFVar16;
  FModuleManager *this_01;
  IModuleInterface *pIVar17;
  undefined8 *puVar18;
  UTexture2DDynamic *this_02;
  FTextureResource *pFVar19;
  FRenderCommandList *this_03;
  FRenderCommandTag *pFVar20;
  code **ppcVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  FTexture2DDynamicCreateInfo local_138;
  code *local_128;
  code *pcStack_120;
  code *local_118;
  TSharedPtr<IHttpRequest,1> *local_110;
  UAsyncTaskDownloadImage *local_108;
  UTexture2DDynamic *local_100;
  undefined8 local_f8;
  FName local_f0;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [40];
  code **local_90;
  byte local_88;
  ulonglong local_78;
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  local_110 = param_1;
  local_108 = this;
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
  FUObjectItem::ClearRootFlags(this_00,RootSet);
  if ((param_3) && (param_2->Object != (IHttpResponse *)0x0)) {
    iVar11 = (**(code **)((longlong)*param_2->Object + 0x58))();
    if (iVar11 - 200U < 7) {
      pIVar14 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
      lVar15 = (**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
      if (lVar15 != 0) {
        pIVar14 = TSharedPtr<IHttpResponse,1>::operator->(param_2);
        lVar15 = (**(code **)((longlong)*pIVar14 + 0x48))(pIVar14);
        if (0 < *(int *)(lVar15 + 8)) {
          pFVar16 = ::FName::FName(&local_f0,"ImageWrapper");
          FVar2 = *pFVar16;
          this_01 = FModuleManager::Get();
          pIVar17 = FModuleManager::LoadModuleChecked(this_01,FVar2);
          (**(code **)((longlong)*pIVar17 + 0x58))(pIVar17,&local_78,0,0);
          (**(code **)((longlong)*pIVar17 + 0x58))(pIVar17,local_68,1,0);
          (**(code **)((longlong)*pIVar17 + 0x58))(pIVar17,local_58,3,0);
          puVar24 = &local_78;
          do {
            pTVar3 = (TReferenceControllerBase<1> *)puVar24[1];
            plVar4 = (longlong *)*puVar24;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (plVar4 != (longlong *)0x0) {
              pcVar5 = *(code **)*plVar4;
              if (param_2->Object == (IHttpResponse *)0x0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L"");
                if (bVar9) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              lVar15 = (**(code **)((longlong)*param_2->Object + 0x48))();
              iVar11 = *(int *)(lVar15 + 8);
              if (param_2->Object == (IHttpResponse *)0x0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L"");
                if (bVar9) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              puVar18 = (undefined8 *)(**(code **)((longlong)*param_2->Object + 0x48))();
              cVar10 = (*pcVar5)(plVar4,*puVar18,(longlong)iVar11);
              if (cVar10 != '\0') {
                lVar15 = (**(code **)(*plVar4 + 0x40))(plVar4);
                if (lVar15 < 0x80000000) {
                  lVar15 = (**(code **)(*plVar4 + 0x48))(plVar4);
                  if (lVar15 < 0x80000000) {
                    local_118 = (code *)0x0;
                    local_128 = (code *)0x0;
                    pcStack_120 = (code *)0x0;
                    cVar10 = (**(code **)(*plVar4 + 0x38))(plVar4,1,8,&local_128);
                    if (cVar10 != '\0') {
                      local_138.Format = PF_B8G8R8A8;
                      local_138.bIsResolveTarget = false;
                      local_138.bSRGB = true;
                      local_138.Filter = TF_Default;
                      local_138.SamplerAddressMode = AM_Wrap;
                      iVar11 = (**(code **)(*plVar4 + 0x48))(plVar4);
                      iVar12 = (**(code **)(*plVar4 + 0x40))(plVar4);
                      this_02 = UTexture2DDynamic::Create(iVar12,iVar11,&local_138);
                      if (this_02 != (UTexture2DDynamic *)0x0) {
                        pbVar1 = (byte *)((longlong)&this_02->_padding_ + 6);
                        *pbVar1 = *pbVar1 | 1;
                        (**(code **)(this_02->_padding_ + 0x328))(this_02);
                        pFVar19 = UTexture::GetResource((UTexture *)this_02);
                        pcVar8 = local_118;
                        pcVar7 = pcStack_120;
                        pcVar5 = local_128;
                        if (pFVar19 != (FTextureResource *)0x0) {
                          local_128 = (code *)0x0;
                          pcStack_120 = (code *)0x0;
                          local_118 = (code *)0x0;
                          local_e8[0] = (code *)0x0;
                          local_c0 = FMemory::Malloc(0x28,8);
                          local_c0[1] = (code *)pFVar19;
                          local_c0[2] = pcVar5;
                          *local_c0 = (code *)&UE::Core::Private::Function::
                                               TFunction_OwnedObject<`UAsyncTaskDownloadImage::HandleImageRequest'::`21'::<lambda_1>,1,1>
                                               ::_vftable_;
                          local_c0[3] = pcVar7;
                          local_c0[4] = pcVar8;
                          if (local_c0 != (code **)&DAT_fffffffffffffff8) {
                            local_e8[0] = UE::Core::Private::Function::
                                          TFunctionRefCaller<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::<lambda_1>,void,FRHICommandListImmediate_&>
                                          ::Call;
                          }
                          this_03 = FRenderCommandList::GetInstanceTLS();
                          if (this_03 == (FRenderCommandList *)0x0) {
                            FRenderThreadCommandPipe::
                            Enqueue<TRenderCommandTag<_UAsyncTaskDownloadImage::HandleImageRequest_::__l21::TSTR_FWriteRawDataToTexture91>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)
                                       local_e8);
                          }
                          else {
                            if (this_03->bInitialized == 0) {
                              FRenderCommandList::Init(this_03);
                            }
                            iVar11 = (this_03->CommandLists).ArrayNum;
                            uVar22 = iVar11 - 1;
                            uVar13 = 0;
                            if ((int)uVar22 < iVar11) {
                              uVar13 = ~uVar22 >> 0x1f;
                            }
                            if (uVar13 == 0) {
                              local_148 = (longlong)(int)uVar22;
                              local_140 = (longlong)iVar11;
                              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                );
                              if (bVar9) {
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                            }
                            iVar11 = (this_03->CommandLists).ArrayNum;
                            local_b8._16_8_ = local_d8[0];
                            local_b8._24_8_ = local_d8[1];
                            local_b8._32_8_ = local_d8[2];
                            local_88 = 2;
                            pFVar6 = (this_03->CommandLists).AllocatorInstance.Data;
                            local_b8._0_8_ = local_e8[0];
                            local_90 = local_c0;
                            local_c0 = (code **)0x0;
                            local_e8[0] = (code *)0x0;
                            pFVar20 = (FRenderCommandTag *)
                                      TRenderCommandTag<`UAsyncTaskDownloadImage::HandleImageRequest'::__l21::TSTR_FWriteRawDataToTexture91>
                                      ::Get();
                            UE::RenderCommandPipe::FCommandList::Enqueue
                                      (pFVar6 + (iVar11 + -1),
                                       (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                        *)local_b8,pFVar20);
                            uVar23 = (ulonglong)local_88;
                            if (2 < uVar23) {
                              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                                 ,0xd4,L"");
                              if (bVar9) {
                                pcVar5 = (code *)swi(3);
                                (*pcVar5)();
                                return;
                              }
                            }
                            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                                          ::__l2::Destructors)[uVar23] ==
                                UE::Core::Private::
                                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                ::Destruct) {
                              if ((code *)local_b8._0_8_ != (code *)0x0) {
                                ppcVar21 = (code **)(local_b8 + 0x10);
                                if (local_90 != (code **)0x0) {
                                  ppcVar21 = local_90;
                                }
                                (**(code **)(*ppcVar21 + 0x10))();
                              }
                            }
                            else {
                              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                                          ::__l2::Destructors)[uVar23])(local_b8);
                            }
                          }
                          if (local_e8[0] != (code *)0x0) {
                            ppcVar21 = local_e8 + 2;
                            if (local_c0 != (code **)0x0) {
                              ppcVar21 = local_c0;
                            }
                            (**(code **)(*ppcVar21 + 0x10))();
                          }
                        }
                        local_100 = this_02;
                        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
                        ProcessMulticastDelegate<UObject>
                                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                                   &local_108->OnSuccess,&local_100);
                        if (local_128 != (code *)0x0) {
                          FMemory::Free(local_128);
                        }
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(pTVar3);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(local_50);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(local_60);
                        SharedPointerInternals::TReferenceControllerBase<1>::
                        ReleaseSharedReferenceNoInline(local_70);
                        goto LAB_146927ffa;
                      }
                    }
                    if (local_128 != (code *)0x0) {
                      FMemory::Free(local_128);
                    }
                  }
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            puVar24 = puVar24 + 2;
          } while (puVar24 != local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_50);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_70);
        }
      }
    }
  }
  local_f8 = 0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnFail,&local_f8);
LAB_146927ffa:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_110->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Start @ 146945320

void __thiscall UAsyncTaskDownloadImage::Start(UAsyncTaskDownloadImage *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  FHttpModule *pFVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar6;
  ulong64 uVar7;
  UAsyncTaskDownloadImage *local_res10;
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  pFVar5 = FHttpModule::Get();
  (**(code **)(pFVar5->_padding_ + 0x40))(pFVar5,&local_38);
  lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_38 + 0xf0))();
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  EnterCriticalSection(lpCriticalSection);
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)(lpCriticalSection + 1));
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUAsyncTaskDownloadImage____A6AXV__TSharedPtr_VIHttpRequest___00__V__TSharedPtr_VIHttpResponse___00___N_ZUFDefaultTSDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAsyncTaskDownloadImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UAsyncTaskDownloadImage *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res10);
    puVar6[4] = HandleImageRequest;
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  (**(code **)(*local_38 + 0x68))(local_38,param_1);
  plVar3 = local_38;
  pcVar2 = *(code **)(*local_38 + 0x60);
  ::FString::FString(&local_28,L"GET");
  (*pcVar2)(plVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (**(code **)(*local_38 + 0xe8))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// StaticRegisterNativesUAsyncTaskDownloadImage @ 146945530

void __cdecl UAsyncTaskDownloadImage::StaticRegisterNativesUAsyncTaskDownloadImage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAsyncTaskDownloadImage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDownloadImage @ 146951560

void __cdecl
UAsyncTaskDownloadImage::execDownloadImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  UAsyncTaskDownloadImage *pUVar2;
  longlong lVar3;
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
  lVar3 = (longlong)(int)local_20;
  local_18.Data.ArrayNum = (int)local_20;
  if ((int)local_20 == 0) {
    local_18.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_20,0,(ForAnyElementType *)&local_18,(int)local_20,
               &local_18.Data.ArrayMax);
    memcpy(local_18.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  pUVar2 = DownloadImage(&local_18);
  *(UAsyncTaskDownloadImage **)param_3 = pUVar2;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}


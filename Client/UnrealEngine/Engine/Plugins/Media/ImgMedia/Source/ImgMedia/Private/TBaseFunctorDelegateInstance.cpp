// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 11

// CreateCopy @ 14ea45f80

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeDelegateMode> *param_1)

{
  undefined8 *puVar1;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_28);
  local_10 = &param_1->field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____AEAV__TMap_HV__TSharedPtr_UFStructuredBufferPoolItem___00__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HV__TSharedPtr_UFStructuredBufferPoolItem___00___0A_____UFSampleConverterParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// CreateCopy @ 14ea46000

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____AEAV__TMap_HV__TSharedPtr_UFStructuredBufferPoolItem___00__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HV__TSharedPtr_UFStructuredBufferPoolItem___00___0A_____UFSampleConverterParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar1 = &TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  return;
}

// CreateCopy @ 14ea46040

void __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::CreateCopy(void *this,TDelegateBase<FThreadSafeDelegateMode> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  if (param_1 == (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)param_1);
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)&param_1->field_0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEAVFRHICommandListImmediate__V__TRefCountPtr_VFRHITexture____AEAV__TMap_HV__TSharedPtr_UFStructuredBufferPoolItem___00__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_HV__TSharedPtr_UFStructuredBufferPoolItem___00___0A_____UFSampleConverterParameters___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[2] = *(undefined8 *)((longlong)this + 0x10);
    *puVar3 = &TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (param_1 != (TDelegateBase<FThreadSafeDelegateMode> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
  }
  return;
}

// Execute @ 14ea48270

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::Execute(void *this,FRHICommandListImmediate *param_1,TRefCountPtr<FRHITexture> param_2,
         TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
         *param_3,FSampleConverterParameters *param_4)

{
  bool bVar1;
  FSampleConverterParameters *pFVar2;
  longlong local_res8;
  FSampleConverterParameters local_c8;
  
  pFVar2 = FSampleConverterParameters::FSampleConverterParameters(&local_c8,param_4);
  local_res8 = (param_2.Reference)->_padding_;
  (param_2.Reference)->_padding_ = 0;
  bVar1 = `FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()
                    ((void *)((longlong)this + 0x18),param_1,(FRHITexture *)&local_res8,param_3,
                     pFVar2);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  FSampleConverterParameters::~FSampleConverterParameters(param_4);
  return bVar1;
}

// ExecuteIfSafe @ 14ea483a0

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::ExecuteIfSafe(void *this,FRHICommandListImmediate *param_1,TRefCountPtr<FRHITexture> param_2,
               TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>
               *param_3,FSampleConverterParameters *param_4)

{
  FSampleConverterParameters *pFVar1;
  longlong local_res8;
  FSampleConverterParameters local_c8;
  
  pFVar1 = FSampleConverterParameters::FSampleConverterParameters(&local_c8,param_4);
  local_res8 = (param_2.Reference)->_padding_;
  (param_2.Reference)->_padding_ = 0;
  `FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),param_1,(FRHITexture *)&local_res8,param_3,pFVar1);
  if ((FRHIResource *)(param_2.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_2.Reference)->_padding_);
  }
  FSampleConverterParameters::~FSampleConverterParameters(param_4);
  return true;
}

// GetBoundProgramCounterForTimerManager @ 14ea4b180

ulong64 __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::GetBoundProgramCounterForTimerManager(void *this)

{
  return 0;
}

// GetObjectForTimerManager @ 14ea4dab0

void * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::GetObjectForTimerManager(void *this)

{
  return (void *)0x0;
}

// GetUObject @ 14ea4efd0

UObject * __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::GetUObject(void *this)

{
  return (UObject *)0x0;
}

// HasSameObject @ 14ea50920

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::HasSameObject(void *this,void *param_1)

{
  return false;
}

// IsSafeToExecute @ 14ea51d90

bool __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::IsSafeToExecute(void *this)

{
  return true;
}

// TryGetBoundFunctionName @ 14ea5d900

FName __thiscall
TBaseFunctorDelegateInstance<bool___cdecl(FRHICommandListImmediate_&,TRefCountPtr<FRHITexture>,TMap<int,TSharedPtr<FStructuredBufferPoolItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FStructuredBufferPoolItem,1>,0>_>_&,FSampleConverterParameters),FDefaultDelegateUserPolicy,`FExrImgMediaReaderGpu::CreateSampleConverterCallback'::__l2::<lambda_1>_>
::TryGetBoundFunctionName(void *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}


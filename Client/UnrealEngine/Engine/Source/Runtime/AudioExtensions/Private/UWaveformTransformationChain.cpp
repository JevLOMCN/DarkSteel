// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 8

// StaticClass @ 14452bf10

UClass * __cdecl UWaveformTransformationChain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"WaveformTransformationChain",
               &Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton,
               StaticRegisterNativesUWaveformTransformationChain,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWaveformTransformationChain>,
               InternalVTableHelperCtorCaller<UWaveformTransformationChain>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton;
}

// UWaveformTransformationChain @ 144530490

UWaveformTransformationChain * __thiscall
UWaveformTransformationChain::UWaveformTransformationChain
          (UWaveformTransformationChain *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWaveformTransformationChain__6B_;
  (this->Transformations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transformations).ArrayNum = 0;
  (this->Transformations).ArrayMax = 0;
  return this;
}

// UWaveformTransformationChain @ 1445304d0

UWaveformTransformationChain * __thiscall
UWaveformTransformationChain::UWaveformTransformationChain
          (UWaveformTransformationChain *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UWaveformTransformationChain__6B_;
  (this->Transformations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transformations).ArrayNum = 0;
  (this->Transformations).ArrayMax = 0;
  return this;
}

// ~UWaveformTransformationChain @ 144530d30

void __thiscall
UWaveformTransformationChain::~UWaveformTransformationChain(UWaveformTransformationChain *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UWaveformTransformationChain__6B_;
  pFVar1 = (this->Transformations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CreateTransformations @ 144532c50

TArray<TUniquePtr<Audio::IWaveTransformation,TDefaultDelete<Audio::IWaveTransformation>_>,TSizedDefaultAllocator<32>_>
* __thiscall
UWaveformTransformationChain::CreateTransformations
          (UWaveformTransformationChain *this,
          TArray<TUniquePtr<Audio::IWaveTransformation,TDefaultDelete<Audio::IWaveTransformation>_>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArray<TUniquePtr<Audio::IWaveTransformation,TDefaultDelete<Audio::IWaveTransformation>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong *local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar10 = (this->Transformations).AllocatorInstance.Data;
  iVar2 = (this->Transformations).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Transformations).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UWaveformTransformationBase>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    plVar3 = *(longlong **)pFVar10;
    if (plVar3 != (longlong *)0x0) {
      pFVar8 = (FScriptContainerElement *)(**(code **)(*plVar3 + 0x2b0))(plVar3,&local_res10);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar4 <= pFVar8) && (pFVar8 < pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8))
      {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<TUniquePtr<Audio::IWaveTransformation,TDefaultDelete<Audio::IWaveTransformation>_>,TSizedDefaultAllocator<32>_>
                    *)(*pcVar5)();
          return pTVar9;
        }
      }
      iVar7 = __return_storage_ptr__->ArrayNum;
      if (iVar7 == __return_storage_ptr__->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar7 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
           *(undefined8 *)pFVar8;
      *(undefined8 *)pFVar8 = 0;
      if (local_res10 != (longlong *)0x0) {
        (**(code **)(*local_res10 + 0x20))(local_res10,1);
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 144535600

UClass * __cdecl UWaveformTransformationChain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioExtensions",L"WaveformTransformationChain",
               &Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton,
               StaticRegisterNativesUWaveformTransformationChain,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWaveformTransformationChain>,
               InternalVTableHelperCtorCaller<UWaveformTransformationChain>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWaveformTransformationChain.InnerSingleton;
}

// IsEditorOnly @ 144535b20

bool __thiscall UWaveformTransformationChain::IsEditorOnly(UWaveformTransformationChain *this)

{
  return true;
}

// StaticRegisterNativesUWaveformTransformationChain @ 144537ba0

void __cdecl UWaveformTransformationChain::StaticRegisterNativesUWaveformTransformationChain(void)

{
  return;
}


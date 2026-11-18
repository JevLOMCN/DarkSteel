// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 19

// ~TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1> @ 146bd8ff0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1>::
~TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1>
          (TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1> *this)

{
  void *pvVar1;
  
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_UFCallPixelHandler_GameThread___00_00_Function_Private_Core_UE__6B_
  ;
  *(undefined4 *)&(this->Obj).StreamID.Identifiers.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Obj).StreamID.Identifiers.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Obj).StreamID);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Obj).Pixels.ImageData.SharedReferenceCount.ReferenceController);
  return;
}

// CloneToEmptyStorage @ 146bdc480

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1>::
CloneToEmptyStorage(TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1> *this,
                   FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 146bdc4c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,1,1>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 146bdc500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 146bdc520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,1,0>::CloneToEmptyStorage
          (void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 146bdc560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_00
  ;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x70,8);
  param_1->HeapAllocation = puVar2;
  this_00 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
             *)(puVar2 + 1);
  *puVar2 = &TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  *(undefined8 *)&this_00->Elements = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0x80;
  *(undefined4 *)(puVar2 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  operator=(this_00,(TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                     *)((longlong)this + 8));
  uVar1 = *(undefined8 *)((longlong)this + 0x60);
  puVar2[0xb] = *(undefined8 *)((longlong)this + 0x58);
  puVar2[0xc] = uVar1;
  puVar2[0xd] = *(undefined8 *)((longlong)this + 0x68);
  return this_00;
}

// CloneToEmptyStorage @ 146bdc5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::`25'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 146bdd070

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1>::Destroy
          (TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1> *this)

{
  (**(code **)(this->_padding_ + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146bdd0a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,1,1>::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146bdd0d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146bdd0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146bdd0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,1,0>::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146bdd0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 146bdd0f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 146bdd120

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146bdd125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 146bdfd30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1>::GetAddress
          (TFunction_OwnedObject<FCallPixelHandler_GameThread,1,1> *this)

{
  return &this->Obj;
}

// GetAddress @ 146bdfd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::CaptureThisFrame'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146bdfd50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FFrameGrabber::OnBackBufferReadyToPresentCallback'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146bdfd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FViewportSurfaceReader::Resize'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146bdfd70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedCaptureProtocol::ResolveBuffer'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 146bdfd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UUserDefinedImageCaptureProtocol::WriteImageToDisk'::__l25::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}


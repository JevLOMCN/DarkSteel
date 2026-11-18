// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FMovieSceneTimeController_Custom @ 146181330

FMovieSceneTimeController_Custom * __thiscall
FMovieSceneTimeController_Custom::FMovieSceneTimeController_Custom
          (FMovieSceneTimeController_Custom *this,FSoftObjectPath *param_1,
          TWeakObjectPtr<UObject,FWeakObjectPtr> param_2)

{
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 60000;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FMovieSceneTimeController_Custom__6B_;
  (this->WeakPlaybackContext).WeakPtr = param_2.WeakPtr;
  (this->WeakObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->InterfacePtr = (IMovieSceneCustomClockSource *)0x0;
  FSoftObjectPath::FSoftObjectPath(&this->ObjectPath,param_1);
  ResolveInterfacePtr(this);
  return this;
}

// OnRequestCurrentTime @ 1461c0290

FFrameTime __thiscall
FMovieSceneTimeController_Custom::OnRequestCurrentTime
          (FMovieSceneTimeController_Custom *this,FQualifiedFrameTime *param_1,float param_2)

{
  bool bVar1;
  FFrameTime *in_R8;
  
  bVar1 = FWeakObjectPtr::IsStale(&(this->WeakObject).WeakPtr,true,false);
  if (bVar1) {
    ResolveInterfacePtr(this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakObject).WeakPtr);
  if (bVar1) {
    (**(code **)((longlong)*this->InterfacePtr + 0x28))(this->InterfacePtr,param_1);
  }
  else {
    param_1->Time = *in_R8;
  }
  return (FFrameTime)param_1;
}

// OnStartPlaying @ 1461c0f90

void __thiscall
FMovieSceneTimeController_Custom::OnStartPlaying
          (FMovieSceneTimeController_Custom *this,FQualifiedFrameTime *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsStale(&(this->WeakObject).WeakPtr,true,false);
  if (bVar1) {
    ResolveInterfacePtr(this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakObject).WeakPtr);
  if (bVar1) {
    (**(code **)((longlong)*this->InterfacePtr + 0x18))(this->InterfacePtr,param_1);
  }
  return;
}

// OnStopPlaying @ 1461c1000

void __thiscall
FMovieSceneTimeController_Custom::OnStopPlaying
          (FMovieSceneTimeController_Custom *this,FQualifiedFrameTime *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsStale(&(this->WeakObject).WeakPtr,true,false);
  if (bVar1) {
    ResolveInterfacePtr(this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakObject).WeakPtr);
  if (bVar1) {
    (**(code **)((longlong)*this->InterfacePtr + 0x20))(this->InterfacePtr,param_1);
  }
  return;
}

// OnTick @ 1461c1490

void __thiscall
FMovieSceneTimeController_Custom::OnTick
          (FMovieSceneTimeController_Custom *this,float param_1,float param_2)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsStale(&(this->WeakObject).WeakPtr,true,false);
  if (bVar1) {
    ResolveInterfacePtr(this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->WeakObject).WeakPtr);
  if (bVar1) {
    (**(code **)((longlong)*this->InterfacePtr + 0x10))(this->InterfacePtr,param_1,param_2);
  }
  return;
}

// ResolveInterfacePtr @ 1461ce0d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FMovieSceneTimeController_Custom::ResolveInterfacePtr(FMovieSceneTimeController_Custom *this)

{
  int iVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  bool bVar3;
  AActor *this_01;
  UClass *pUVar4;
  UClass *pUVar5;
  IMovieSceneCustomClockSource *pIVar6;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  AActor *local_res18;
  UClass *local_res20;
  UObject *local_48;
  TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  (this->WeakObject).WeakPtr = local_res8;
  this->InterfacePtr = (IMovieSceneCustomClockSource *)0x0;
  this_01 = (AActor *)FSoftObjectPath::ResolveObject(&this->ObjectPath);
  if (this_01 != (AActor *)0x0) {
    pUVar5 = (UClass *)this_01->_padding_;
    pUVar4 = UMovieSceneCustomClockSource::StaticClass();
    bVar3 = UClass::ImplementsInterface(pUVar5,pUVar4);
    if (bVar3) {
      local_res18 = this_01;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      FWeakObjectPtr::operator=(&(this->WeakObject).WeakPtr,(FObjectPtr)&local_res18);
      pUVar5 = UMovieSceneCustomClockSource::StaticClass();
      pIVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar5);
      this->InterfacePtr = pIVar6;
      return;
    }
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      local_res20 = UMovieSceneCustomClockSource::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      AActor::GetComponentsByInterface(this_01,&local_40,(TSubclassOf<UInterface>)&local_res20);
      if (local_40.ArrayNum != 0) {
        if ((local_40.ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_48 = *(UObject **)local_40.AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_48);
        }
        FWeakObjectPtr::operator=(&(this->WeakObject).WeakPtr,(FObjectPtr)&local_48);
        if ((local_40.ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(UObjectBaseUtility **)local_40.AllocatorInstance.Data;
        pUVar5 = UMovieSceneCustomClockSource::StaticClass();
        pIVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
        this->InterfacePtr = pIVar6;
      }
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
    }
  }
  return;
}


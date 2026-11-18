// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// ~TPairInitializer<char_const_*,FString> @ 141e86c10

void __thiscall
TPairInitializer<char_const_*,FString>::~TPairInitializer<char_const_*,FString>
          (TPairInitializer<char_const_*,FString> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Value).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// operator<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_> @ 1421f4850

TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
* __thiscall
TPairInitializer<TObjectPtr<UObject>_&&,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_&&>
::
operator<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
          (TPairInitializer<TObjectPtr<UObject>_&&,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_&&>
           *this,TTuple<TObjectPtr<UObject>,TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
                 *__return_storage_ptr__)

{
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *pTVar1;
  TObjectPtr<UObject> TVar2;
  
  pTVar1 = this->Value;
  TVar2.field0_0x0 = (TObjectPtr<UObject>_u_0)(this->Key->field0_0x0).DebugPtr;
  *(TObjectPtr<UObject>_u_0 *)__return_storage_ptr__ = TVar2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.field0_0x0 != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>::
  Move<TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator>_>
            ((TSet<Verse::VCell_*,DefaultKeyFuncs<Verse::VCell_*,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,pTVar1);
  return __return_storage_ptr__;
}

// operator<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_> @ 1421f48d0

TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
* __thiscall
TPairInitializer<TObjectPtr<UObject>_&&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>
::
operator<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>_TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
          (TPairInitializer<TObjectPtr<UObject>_&&,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_&&>
           *this,TTuple<TObjectPtr<UObject>,TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
                 *__return_storage_ptr__)

{
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar1;
  TObjectPtr<UObject> TVar2;
  
  pTVar1 = this->Value;
  TVar2.field0_0x0 = (TObjectPtr<UObject>_u_0)(this->Key->field0_0x0).DebugPtr;
  *(TObjectPtr<UObject>_u_0 *)__return_storage_ptr__ = TVar2.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.field0_0x0 != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)TVar2.field0_0x0);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
  Move<TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>_>
            ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,pTVar1);
  return __return_storage_ptr__;
}


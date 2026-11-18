// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 25

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 146620020

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xd8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xd8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146620197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 1466201b0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001466202a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 1466202c0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FVariantPropertyTypeIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001466203b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 1466203d0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146620499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 1466204b0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146620579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 146620590

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014662062f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_> @ 146620650

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x48;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x50;
    if (*(ulonglong *)&this->field_0x50 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x58 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001466206ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_> @ 146620710

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<unsigned_short>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146620779. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneAudioComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_>_> @ 146769450

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneAudioComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneAudioComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneAudioComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UObject_*>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x80 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x80 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x88 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x80 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x68 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x68 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x70 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x68 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x50 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x50 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x50 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x38 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x38 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x40 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x38 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x20 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x20 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x28 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x20 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x10 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146769527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x8 + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_>_> @ 146769540

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x50;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x58;
    if (*(ulonglong *)&this->field_0x58 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x50 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x60 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x50 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x38 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x38 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x40 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x38 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x20 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x20 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x28 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x20 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x10 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001467695e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x8 + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneObjectBindingID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>_> @ 146769600

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneObjectBindingID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneObjectBindingID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneObjectBindingID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x48;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x50;
    if (*(ulonglong *)&this->field_0x50 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x58 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014676969f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_> @ 1467696c0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x50;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x58;
    if (*(ulonglong *)&this->field_0x58 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x50 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x60 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x50 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x30;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x38;
    if (*(ulonglong *)&this->field_0x38 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x40 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146769774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_> @ 146769790

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<double>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x50;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x58;
    if (*(ulonglong *)&this->field_0x58 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x50 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x60 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x50 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x30;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x38;
    if (*(ulonglong *)&this->field_0x38 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x40 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146769844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_> @ 1467cfaa0

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>_>
           *this,EForwardingConstructor param_1,TAdd<UE::MovieScene::FObjectComponent> *param_2,
          TAdd<FMovieSceneBlendChannelID> *param_3,TAdd<double> *param_4,TAdd<double> *param_5,
          TAdd<double> *param_6,TAdd<double> *param_7,
          TAddConditional<UE::MovieScene::FIntermediateColor> *param_8)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  int iVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.ObjectPtr.field0_0x0.DebugPtr;
    *(UObject **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    iVar4 = (param_2->Payload).TypedValue.ObjectKey.ObjectSerialNumber;
    *(int *)&this->field_0x10 = (param_2->Payload).TypedValue.ObjectKey.ObjectIndex;
    *(int *)&this->field_0x14 = iVar4;
  }
  *(short *)&this->field_0x20 = param_3->_padding_;
  this->field_0x26 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x26 = bVar1;
  if (bVar1 != false) {
    uVar5 = (param_3->Payload).TypedValue.field_0x1;
    uVar6 = (param_3->Payload).TypedValue.ChannelID;
    this->field_0x22 = (param_3->Payload).TypedValue.SystemID.Value;
    this->field_0x23 = uVar5;
    *(ushort *)&this->field_0x24 = uVar6;
  }
  *(short *)&this->field_0x28 = (short)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x30 = (param_4->Payload).TypedValue;
  }
  *(short *)&this->field_0x40 = (short)param_5->_padding_;
  this->field_0x50 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x50 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x48 = (param_5->Payload).TypedValue;
  }
  *(short *)&this->field_0x58 = (short)param_6->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x60 = (param_6->Payload).TypedValue;
  }
  *(short *)&this->field_0x70 = (short)param_7->_padding_;
  this->field_0x80 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x80 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x78 = (param_7->Payload).TypedValue;
  }
  *(int *)&this->field_0x88 = (int)param_8->_padding_;
  this->field_0xb0 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xb0 = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_8->Payload).TypedValue.G;
    *(double *)&this->field_0x90 = (param_8->Payload).TypedValue.R;
    *(double *)&this->field_0x98 = dVar3;
    dVar3 = (param_8->Payload).TypedValue.A;
    *(double *)&this->field_0xa0 = (param_8->Payload).TypedValue.B;
    *(double *)&this->field_0xa8 = dVar3;
  }
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd> @ 1467cfc00

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd>
           *this,EForwardingConstructor param_1,TAdd<UE::MovieScene::FObjectComponent> *param_2,
          TAdd<FMovieSceneBlendChannelID> *param_3,TAdd<double> *param_4,TAdd<double> *param_5,
          TAdd<double> *param_6,TAdd<double> *param_7,
          TAddConditional<UE::MovieScene::FIntermediateColor> *param_8,FAdd *param_9)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  int iVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.ObjectPtr.field0_0x0.DebugPtr;
    *(UObject **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    iVar4 = (param_2->Payload).TypedValue.ObjectKey.ObjectSerialNumber;
    *(int *)&this->field_0x10 = (param_2->Payload).TypedValue.ObjectKey.ObjectIndex;
    *(int *)&this->field_0x14 = iVar4;
  }
  *(short *)&this->field_0x20 = param_3->_padding_;
  this->field_0x26 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x26 = bVar1;
  if (bVar1 != false) {
    uVar5 = (param_3->Payload).TypedValue.field_0x1;
    uVar6 = (param_3->Payload).TypedValue.ChannelID;
    this->field_0x22 = (param_3->Payload).TypedValue.SystemID.Value;
    this->field_0x23 = uVar5;
    *(ushort *)&this->field_0x24 = uVar6;
  }
  *(short *)&this->field_0x28 = (short)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x30 = (param_4->Payload).TypedValue;
  }
  *(short *)&this->field_0x40 = (short)param_5->_padding_;
  this->field_0x50 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x50 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x48 = (param_5->Payload).TypedValue;
  }
  *(short *)&this->field_0x58 = (short)param_6->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x60 = (param_6->Payload).TypedValue;
  }
  *(short *)&this->field_0x70 = (short)param_7->_padding_;
  this->field_0x80 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x80 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x78 = (param_7->Payload).TypedValue;
  }
  *(int *)&this->field_0x88 = (int)param_8->_padding_;
  this->field_0xb0 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xb0 = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_8->Payload).TypedValue.G;
    *(double *)&this->field_0x90 = (param_8->Payload).TypedValue.R;
    *(double *)&this->field_0x98 = dVar3;
    dVar3 = (param_8->Payload).TypedValue.A;
    *(double *)&this->field_0xa0 = (param_8->Payload).TypedValue.B;
    *(double *)&this->field_0xa8 = dVar3;
  }
  *(ushort *)&this->field_0xb8 = (param_9->ComponentTypeID).Value;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd> @ 1467cfd60

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,EForwardingConstructor param_1,TAdd<UE::MovieScene::FObjectComponent> *param_2,
          TAdd<FMovieSceneBlendChannelID> *param_3,TAdd<double> *param_4,TAdd<double> *param_5,
          TAdd<double> *param_6,TAdd<double> *param_7,
          TAddConditional<UE::MovieScene::FIntermediateColor> *param_8,FAdd *param_9,FAdd *param_10)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  int iVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.ObjectPtr.field0_0x0.DebugPtr;
    *(UObject **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    iVar4 = (param_2->Payload).TypedValue.ObjectKey.ObjectSerialNumber;
    *(int *)&this->field_0x10 = (param_2->Payload).TypedValue.ObjectKey.ObjectIndex;
    *(int *)&this->field_0x14 = iVar4;
  }
  *(short *)&this->field_0x20 = param_3->_padding_;
  this->field_0x26 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x26 = bVar1;
  if (bVar1 != false) {
    uVar5 = (param_3->Payload).TypedValue.field_0x1;
    uVar6 = (param_3->Payload).TypedValue.ChannelID;
    this->field_0x22 = (param_3->Payload).TypedValue.SystemID.Value;
    this->field_0x23 = uVar5;
    *(ushort *)&this->field_0x24 = uVar6;
  }
  *(short *)&this->field_0x28 = (short)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x30 = (param_4->Payload).TypedValue;
  }
  *(short *)&this->field_0x40 = (short)param_5->_padding_;
  this->field_0x50 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x50 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x48 = (param_5->Payload).TypedValue;
  }
  *(short *)&this->field_0x58 = (short)param_6->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x60 = (param_6->Payload).TypedValue;
  }
  *(short *)&this->field_0x70 = (short)param_7->_padding_;
  this->field_0x80 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x80 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x78 = (param_7->Payload).TypedValue;
  }
  *(int *)&this->field_0x88 = (int)param_8->_padding_;
  this->field_0xb0 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xb0 = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_8->Payload).TypedValue.G;
    *(double *)&this->field_0x90 = (param_8->Payload).TypedValue.R;
    *(double *)&this->field_0x98 = dVar3;
    dVar3 = (param_8->Payload).TypedValue.A;
    *(double *)&this->field_0xa0 = (param_8->Payload).TypedValue.B;
    *(double *)&this->field_0xa8 = dVar3;
  }
  *(ushort *)&this->field_0xb8 = (param_9->ComponentTypeID).Value;
  *(ushort *)&this->field_0xba = (param_10->ComponentTypeID).Value;
  return this;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd> @ 1467cfee0

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd><UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TAdd<UE::MovieScene::FObjectComponent>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAdd<double>,UE::MovieScene::TAddConditional<UE::MovieScene::FIntermediateColor>,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
           *this,EForwardingConstructor param_1,TAdd<UE::MovieScene::FObjectComponent> *param_2,
          TAdd<FMovieSceneBlendChannelID> *param_3,TAdd<double> *param_4,TAdd<double> *param_5,
          TAdd<double> *param_6,TAdd<double> *param_7,
          TAddConditional<UE::MovieScene::FIntermediateColor> *param_8,FAdd *param_9,FAdd *param_10,
          FAdd *param_11)

{
  bool bVar1;
  UObject *pUVar2;
  double dVar3;
  int iVar4;
  undefined1 uVar5;
  ushort uVar6;
  
  *(short *)this = (short)param_2->_padding_;
  this->field_0x18 = 0;
  bVar1 = (param_2->Payload).bIsSet;
  this->field_0x18 = bVar1;
  if (bVar1 != false) {
    pUVar2 = (param_2->Payload).TypedValue.ObjectPtr.field0_0x0.DebugPtr;
    *(UObject **)&this->field_0x8 = pUVar2;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    iVar4 = (param_2->Payload).TypedValue.ObjectKey.ObjectSerialNumber;
    *(int *)&this->field_0x10 = (param_2->Payload).TypedValue.ObjectKey.ObjectIndex;
    *(int *)&this->field_0x14 = iVar4;
  }
  *(short *)&this->field_0x20 = param_3->_padding_;
  this->field_0x26 = 0;
  bVar1 = (param_3->Payload).bIsSet;
  this->field_0x26 = bVar1;
  if (bVar1 != false) {
    uVar5 = (param_3->Payload).TypedValue.field_0x1;
    uVar6 = (param_3->Payload).TypedValue.ChannelID;
    this->field_0x22 = (param_3->Payload).TypedValue.SystemID.Value;
    this->field_0x23 = uVar5;
    *(ushort *)&this->field_0x24 = uVar6;
  }
  *(short *)&this->field_0x28 = (short)param_4->_padding_;
  this->field_0x38 = 0;
  bVar1 = (param_4->Payload).bIsSet;
  this->field_0x38 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x30 = (param_4->Payload).TypedValue;
  }
  *(short *)&this->field_0x40 = (short)param_5->_padding_;
  this->field_0x50 = 0;
  bVar1 = (param_5->Payload).bIsSet;
  this->field_0x50 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x48 = (param_5->Payload).TypedValue;
  }
  *(short *)&this->field_0x58 = (short)param_6->_padding_;
  this->field_0x68 = 0;
  bVar1 = (param_6->Payload).bIsSet;
  this->field_0x68 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x60 = (param_6->Payload).TypedValue;
  }
  *(short *)&this->field_0x70 = (short)param_7->_padding_;
  this->field_0x80 = 0;
  bVar1 = (param_7->Payload).bIsSet;
  this->field_0x80 = bVar1;
  if (bVar1 != false) {
    *(double *)&this->field_0x78 = (param_7->Payload).TypedValue;
  }
  *(int *)&this->field_0x88 = (int)param_8->_padding_;
  this->field_0xb0 = 0;
  bVar1 = (param_8->Payload).bIsSet;
  this->field_0xb0 = bVar1;
  if (bVar1 != false) {
    dVar3 = (param_8->Payload).TypedValue.G;
    *(double *)&this->field_0x90 = (param_8->Payload).TypedValue.R;
    *(double *)&this->field_0x98 = dVar3;
    dVar3 = (param_8->Payload).TypedValue.A;
    *(double *)&this->field_0xa0 = (param_8->Payload).TypedValue.B;
    *(double *)&this->field_0xa8 = dVar3;
  }
  *(ushort *)&this->field_0xb8 = (param_9->ComponentTypeID).Value;
  *(ushort *)&this->field_0xba = (param_10->ComponentTypeID).Value;
  *(ushort *)&this->field_0xbc = (param_11->ComponentTypeID).Value;
  return this;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 14680e630

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xf0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xf0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xf8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xf0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xd8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xd8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680e7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 14680ea90

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0xd8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xd8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xc0 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xc0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xc0 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0xa8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0xa8 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x90 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x98 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680ec07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_> @ 14680ec20

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UObject_*>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0xd0;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0xd8;
    if (*(ulonglong *)&this->field_0xd8 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xd0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xe0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0xd0 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0xb0;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0xb8;
    if (*(ulonglong *)&this->field_0xb8 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xb0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xc0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0xb0 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x90;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x98;
    if (*(ulonglong *)&this->field_0x98 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x90 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xa0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x90 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x70;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x78;
    if (*(ulonglong *)&this->field_0x78 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x70 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x70 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x50;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x58;
    if (*(ulonglong *)&this->field_0x58 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x50 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x60 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x50 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x30;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x38;
    if (*(ulonglong *)&this->field_0x38 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x40 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680eddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_> @ 14680edf0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x78 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x78 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x80 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x78 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x60 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x68 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680eebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_> @ 14680eee0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,TTuple<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWriteOptional<double>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0xa0;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0xa8;
    if (*(ulonglong *)&this->field_0xa8 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0xa0 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0xb0 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0xa0 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x80;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x88;
    if (*(ulonglong *)&this->field_0x88 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x80 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x90 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x80 + 0x20));
    }
  }
  lVar2 = *(longlong *)&this->field_0x60;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x68;
    if (*(ulonglong *)&this->field_0x68 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x60 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x70 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x60 + 0x20));
    }
  }
  TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
            ((TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
              *)&this->field_0x18);
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680efd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 14680eff0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680f07a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_> @ 14680f090

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMaterialParameterInfo>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FName>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x48 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x50 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680f11a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_> @ 14680f130

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>_>
           *this)

{
  int *piVar1;
  
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014680f199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}


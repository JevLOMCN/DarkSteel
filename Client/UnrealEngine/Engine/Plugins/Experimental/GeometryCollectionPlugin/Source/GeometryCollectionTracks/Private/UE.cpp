// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionTracks
// Functions: 12

// Construct<FMovieSceneGeometryCollectionSectionTemplate> @ 14e7fb7f0

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneGeometryCollectionSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionSectionTemplate__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) =
       &___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FMovieSceneGeometryCollectionSectionTemplate> @ 14e7fb840

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCollectionSectionTemplate>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionSectionTemplate__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) =
       &___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FMovieSceneGeometryCollectionSectionTemplate> @ 14e7fb890

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCollectionSectionTemplate>(void *param_1)

{
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FMovieSceneGeometryCollectionParams__6B_;
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneGeometryCollectionSectionTemplate> @ 14e7fb8d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGeometryCollectionSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  pvVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar2 + 8) = *(undefined1 *)((longlong)pvVar1 + 8);
    *(undefined1 *)((longlong)pvVar2 + 0x10) = *(undefined1 *)((longlong)pvVar1 + 0x10);
    *(undefined8 *)((longlong)pvVar2 + 0x14) = *(undefined8 *)((longlong)pvVar1 + 0x14);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)pvVar2 + 0x28),
               (FSoftObjectPath *)
               ((longlong)pvVar2 + (longlong)param_2 + (0x28 - (longlong)param_1)));
    pvVar1 = (void *)((longlong)pvVar1 + 0x60);
    *(undefined4 *)((longlong)pvVar2 + 0x48) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x4c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x4c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x50) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x58) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar2 + 0x5c) =
         *(undefined4 *)((longlong)pvVar2 + (longlong)param_2 + (0x5c - (longlong)param_1));
    pvVar2 = (void *)((longlong)pvVar2 + 0x60);
  }
  return true;
}

// Construct<FMovieSceneGeometryCollectionSectionTemplateParameters> @ 14e7fb980

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneGeometryCollectionSectionTemplateParameters>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMovieSceneGeometryCollectionSectionTemplateParameters> @ 14e7fb9c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCollectionSectionTemplateParameters>
          (void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionSectionTemplateParameters__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMovieSceneGeometryCollectionSectionTemplateParameters> @ 14e7fba00

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCollectionSectionTemplateParameters>
          (void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionParams__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FMovieSceneGeometryCollectionSectionTemplateParameters> @ 14e7fba20

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGeometryCollectionSectionTemplateParameters>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)pvVar1 + 8),
               (FSoftObjectPath *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar1 + 0x28) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x2c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x30) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x38) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x3c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x3c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x40);
  }
  return true;
}

// Construct<FMovieSceneGeometryCollectionParams> @ 14e7fbac0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneGeometryCollectionParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionParams__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMovieSceneGeometryCollectionParams> @ 14e7fbaf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCollectionParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x3f800000;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionParams__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMovieSceneGeometryCollectionParams> @ 14e7fbb20

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCollectionParams>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCollectionParams__6B_;
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FMovieSceneGeometryCollectionParams> @ 14e7fbb40

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGeometryCollectionParams>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)pvVar1 + 8),
               (FSoftObjectPath *)((longlong)pvVar1 + (longlong)param_2 + (8 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar1 + 0x28) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x2c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x30) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x30 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x38);
  }
  return true;
}


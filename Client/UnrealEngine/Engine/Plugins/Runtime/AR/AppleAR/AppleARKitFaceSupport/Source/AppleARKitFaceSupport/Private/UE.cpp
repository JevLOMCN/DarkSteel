// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKitFaceSupport
// Functions: 11

// Construct<FAppleARKitLiveLinkConnectionSettings> @ 14d2812b0

void __cdecl
UE::CoreUObject::Private::Construct<FAppleARKitLiveLinkConnectionSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x2b67;
  return;
}

// ConstructForTests<FAppleARKitLiveLinkConnectionSettings> @ 14d2812c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAppleARKitLiveLinkConnectionSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x2b67;
  return;
}

// Destruct<FAppleARKitLiveLinkConnectionSettings> @ 14d2812d0

void __cdecl
UE::CoreUObject::Private::Destruct<FAppleARKitLiveLinkConnectionSettings>(void *param_1)

{
  return;
}

// Copy<FAppleARKitLiveLinkConnectionSettings> @ 14d2812e0

bool __cdecl
UE::CoreUObject::Private::Copy<FAppleARKitLiveLinkConnectionSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNetQuantizeFaceCurve> @ 14d2814d0

void __cdecl UE::CoreUObject::Private::Construct<FNetQuantizeFaceCurve>(void *param_1)

{
  return;
}

// ConstructForTests<FNetQuantizeFaceCurve> @ 14d2814e0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNetQuantizeFaceCurve>(void *param_1)

{
  return;
}

// Destruct<FNetQuantizeFaceCurve> @ 14d2814f0

void __cdecl UE::CoreUObject::Private::Destruct<FNetQuantizeFaceCurve>(void *param_1)

{
  return;
}

// NetSerialize<FNetQuantizeFaceCurve> @ 14d281500

bool __cdecl
UE::CoreUObject::Private::NetSerialize<FNetQuantizeFaceCurve>
          (FArchive *param_1,UPackageMap *param_2,bool *param_3,void *param_4)

{
  longlong *plVar1;
  ushort local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 4) == 0) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((ushort *)plVar1[1] < (ushort *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(ushort *)*plVar1;
      *plVar1 = *plVar1 + 2;
    }
    *(char *)((longlong)param_4 + 1) = (char)local_res8[0];
    *(char *)param_4 = (char)(local_res8[0] >> 8);
    *param_3 = true;
    return true;
  }
  local_res8[0] = CONCAT11(*(undefined1 *)param_4,*(undefined1 *)((longlong)param_4 + 1));
  plVar1 = *(longlong **)&param_1->field_0x8;
  if (*plVar1 + 2U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 2;
    *param_3 = true;
    return true;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,2);
    *param_3 = true;
    return true;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res8);
  *param_3 = true;
  return true;
}

// Copy<FNetQuantizeFaceCurve> @ 14d281600

bool __cdecl
UE::CoreUObject::Private::Copy<FNetQuantizeFaceCurve>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FAppleARKitFaceSupportModule,FAppleARKitFaceSupportModule_*_&> @ 14d281ea0

FAppleARKitFaceSupportModule * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FAppleARKitFaceSupportModule,FAppleARKitFaceSupportModule_*_&>
          (FAppleARKitFaceSupportModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UAppleARKitLiveLinkSourceFactory,UAppleARKitLiveLinkSourceFactory_*_&> @ 14d281ec0

UAppleARKitLiveLinkSourceFactory * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UAppleARKitLiveLinkSourceFactory,UAppleARKitLiveLinkSourceFactory_*_&>
          (UAppleARKitLiveLinkSourceFactory **param_1)

{
  return *param_1;
}


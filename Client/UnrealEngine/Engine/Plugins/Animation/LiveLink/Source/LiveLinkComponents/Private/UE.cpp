// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkComponents
// Functions: 4

// Construct<FLiveLinkTransformControllerData> @ 14d090280

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkTransformControllerData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010100;
  *(undefined2 *)((longlong)param_1 + 4) = 0x100;
  return;
}

// ConstructForTests<FLiveLinkTransformControllerData> @ 14d0902a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkTransformControllerData>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1010100;
  *(undefined2 *)((longlong)param_1 + 4) = 0x100;
  return;
}

// Destruct<FLiveLinkTransformControllerData> @ 14d0902c0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkTransformControllerData>(void *param_1)

{
  return;
}

// Copy<FLiveLinkTransformControllerData> @ 14d0902d0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkTransformControllerData>
          (void *param_1,void *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined2 *)(lVar2 + 4 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar2 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar1;
      param_1 = (void *)((longlong)param_1 + 6);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}


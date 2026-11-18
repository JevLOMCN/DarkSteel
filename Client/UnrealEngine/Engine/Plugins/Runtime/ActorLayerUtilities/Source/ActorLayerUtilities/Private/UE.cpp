// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorLayerUtilities
// Functions: 4

// Construct<FActorLayer> @ 14ddb89a0

void __cdecl UE::CoreUObject::Private::Construct<FActorLayer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FActorLayer> @ 14ddb89b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FActorLayer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FActorLayer> @ 14ddb89c0

void __cdecl UE::CoreUObject::Private::Destruct<FActorLayer>(void *param_1)

{
  return;
}

// Copy<FActorLayer> @ 14ddb89d0

bool __cdecl UE::CoreUObject::Private::Copy<FActorLayer>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}


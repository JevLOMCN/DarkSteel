// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldNotification
// Functions: 5

// Construct<FFieldNotificationId> @ 1441bdda0

void __cdecl UE::CoreUObject::Private::Construct<FFieldNotificationId>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FFieldNotificationId> @ 1441bddb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFieldNotificationId>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FFieldNotificationId> @ 1441bddc0

void __cdecl UE::CoreUObject::Private::Destruct<FFieldNotificationId>(void *param_1)

{
  return;
}

// Copy<FFieldNotificationId> @ 1441bddd0

bool __cdecl
UE::CoreUObject::Private::Copy<FFieldNotificationId>(void *param_1,void *param_2,int param_3)

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

// GetStructTypeHash<FFieldNotificationId> @ 1441bde00

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FFieldNotificationId>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 7

// Construct @ 142ca8220

void __cdecl
UE::Core::Private::
TCopyConstructorCaller<UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::Construct
          (void *param_1,void *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(longlong *)param_1 = lVar1;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)((longlong)param_2 + 0x10);
    if (*(undefined8 **)((longlong)param_2 + 0x28) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)((longlong)param_2 + 0x28);
    }
    (**(code **)*puVar3)(puVar3,(longlong)param_1 + 0x10);
  }
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  plVar2 = *(longlong **)((longlong)param_2 + 0x30);
  *(longlong **)((longlong)param_1 + 0x30) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,local_res8);
  }
  *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
  return;
}

// Construct @ 142ca82a0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Editor::DataStorage::Private::TDirectProperty<FText>_>
::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca82b0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<UE::Editor::DataStorage::Private::TEmptyProperty<FText>_>
::Construct(void *param_1,void *param_2)

{
  return;
}

// Construct @ 142ca82c0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<FString>::Construct(void *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)param_1 = 0;
  iVar1 = *(int *)((longlong)param_2 + 8);
  _Src = *(void **)param_2;
  *(int *)((longlong)param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar1,0,param_1,iVar1,(int *)((longlong)param_1 + 0xc));
  memcpy(*(void **)param_1,_Src,(longlong)iVar1 * 2);
  return;
}

// Construct @ 142ca82d0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<__int64>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca82e0

void __cdecl
UE::Core::Private::TCopyConstructorCaller<unsigned___int64>::Construct(void *param_1,void *param_2)

{
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  return;
}

// Construct @ 142ca82f0

void __cdecl UE::Core::Private::TCopyConstructorCaller<bool>::Construct(void *param_1,void *param_2)

{
  *(undefined1 *)param_1 = *(undefined1 *)param_2;
  return;
}


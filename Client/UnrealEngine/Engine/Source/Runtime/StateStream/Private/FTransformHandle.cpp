// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 3

// StaticStruct @ 143124db0

UScriptStruct * __cdecl FTransformHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTransformHandle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateStream();
    Z_Registration_Info_UScriptStruct_FTransformHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTransformHandle,(UObject *)pUVar1,
                         L"TransformHandle");
  }
  return Z_Registration_Info_UScriptStruct_FTransformHandle.OuterSingleton;
}

// operator= @ 1431260a0

FTransformHandle * __thiscall
FTransformHandle::operator=(FTransformHandle *this,FTransformHandle *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(longlong **)this;
  if ((plVar2 != *(longlong **)param_1) || (*(int *)&this->field_0xc != *(int *)&param_1->field_0xc)
     ) {
    if ((plVar2 != (longlong *)0x0) && (*(int *)&this->field_0x8 == 0)) {
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)&this->field_0xc);
    }
    puVar3 = *(undefined8 **)param_1;
    *(undefined8 **)this = puVar3;
    iVar1 = *(int *)&param_1->field_0x8;
    *(int *)&this->field_0x8 = iVar1;
    *(undefined4 *)&this->field_0xc = *(undefined4 *)&param_1->field_0xc;
    if ((puVar3 != (undefined8 *)0x0) && (iVar1 == 0)) {
      (**(code **)*puVar3)();
    }
  }
  return this;
}

// Apply @ 143126850

void __thiscall
FTransformHandle::Apply
          (FTransformHandle *this,FStateStreamCopyContext *param_1,FStateStreamHandle *param_2)

{
  IStateStreamHandleOwner *pIVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  
  if (*(int *)&this->field_0x8 == 0) {
    if (param_2->IsInternal != 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Other.IsInternal",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\StateStreamHandle.cpp"
                         ,0x5a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar1 = param_2->Owner;
    if (pIVar1 != (IStateStreamHandleOwner *)0x0) {
      (**(code **)*pIVar1)(pIVar1,param_2->Id);
    }
    plVar2 = *(longlong **)this;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)&this->field_0xc);
    }
  }
  *(IStateStreamHandleOwner **)this = param_2->Owner;
  *(uint *)&this->field_0xc = param_2->Id;
  return;
}


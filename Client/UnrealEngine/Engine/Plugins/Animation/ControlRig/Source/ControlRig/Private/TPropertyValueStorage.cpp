// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// AddInitialValue @ 14a3de4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInitialValueIndex __thiscall
UE::MovieScene::
TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
::AddInitialValue(TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                  *this,UObject *param_1,FIntermediate3DTransform *param_2,FName *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  undefined8 *in_stack_00000028;
  undefined1 auStackY_b8 [32];
  undefined2 local_88 [4];
  FWeakObjectPtr local_80;
  TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType_const_&,unsigned_short_const_&>
  local_78;
  FSparseArrayAllocationInfo local_68;
  FWeakObjectPtr *local_58;
  undefined2 *local_50;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  if (param_2 != (FIntermediate3DTransform *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    local_80.ObjectIndex = 0;
    local_80.ObjectSerialNumber = 0;
    local_78.Value = (ushort *)param_2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_78.Value);
    local_48 = local_80;
  }
  iVar1 = *(int *)&(this->PropertyValues).field_0x34;
  local_38 = 2;
  local_40 = *in_stack_00000028;
  if (iVar1 == 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)&this->PropertyValues,
                       (int *)&(this->PropertyValues).field_0x8,
                       (int *)&(this->PropertyValues).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PropertyValues).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->PropertyValues).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->PropertyValues;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x48);
    *(int *)&(this->PropertyValues).field_0x30 = iVar2;
    *(int *)&(this->PropertyValues).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<72,8,FDefaultSparseArrayAllocator> *)&this->PropertyValues,&local_68,
             iVar8);
  if (local_68.Pointer != (FName *)0x0) {
    FVar5 = param_3[1];
    *(FName *)local_68.Pointer = *param_3;
    *(FName *)((longlong)local_68.Pointer + 8) = FVar5;
    FVar5 = param_3[3];
    *(FName *)((longlong)local_68.Pointer + 0x10) = param_3[2];
    *(FName *)((longlong)local_68.Pointer + 0x18) = FVar5;
    FVar5 = param_3[5];
    *(FName *)((longlong)local_68.Pointer + 0x20) = param_3[4];
    *(FName *)((longlong)local_68.Pointer + 0x28) = FVar5;
    FVar5 = param_3[7];
    *(FName *)((longlong)local_68.Pointer + 0x30) = param_3[6];
    *(FName *)((longlong)local_68.Pointer + 0x38) = FVar5;
    *(FName *)((longlong)local_68.Pointer + 0x40) = param_3[8];
  }
  if (0xfffe < local_68.Index) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewIndex < int32(uint16(0xFFFF))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                       ,0x184,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FInitialValueIndex)uVar7;
    }
  }
  local_58 = &local_48;
  local_88[0] = (undefined2)local_68.Index;
  local_50 = local_88;
  TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType_const_&,unsigned_short_const_&>_>
            ((TSet<TTuple<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short>,TDefaultMapHashableKeyFuncs<UE::MovieScene::TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>::FKeyType,unsigned_short,0>,FDefaultSetAllocator>
              *)&this->KeyToPropertyIndex,&local_78,(bool *)&local_58);
  *(undefined2 *)param_1 = local_88[0];
  return (FInitialValueIndex)(ushort)param_1;
}


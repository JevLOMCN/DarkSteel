// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// AsShaderValue @ 1485abea0

/* WARNING: Type propagation algorithm not settling */

FValue * __thiscall
UE::Shader::FPreshaderValue::AsShaderValue
          (FPreshaderValue *this,FValue *__return_storage_ptr__,FStructTypeRegistry *param_1)

{
  int *piVar1;
  int *piVar2;
  EValueType EVar3;
  int iVar4;
  ulong64 uVar5;
  FValueComponent *_Src;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FValue *pFVar9;
  FStructType **ppFVar10;
  FStructType *pFVar11;
  ForElementType<UE::Shader::FValueComponent> FVar12;
  undefined7 uStack_37;
  undefined7 uStack_1f;
  
  pFVar11 = (FStructType *)0x0;
  piVar1 = &(__return_storage_ptr__->Component).ArrayNum;
  (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
  piVar2 = &(__return_storage_ptr__->Component).ArrayMax;
  (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
  (__return_storage_ptr__->Type).ObjectType.Number = 0;
  (__return_storage_ptr__->Type).ValueType = Void;
  (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  *piVar1 = 0;
  *piVar2 = 0x10;
  uVar5 = (this->Type).StructTypeHash;
  if (uVar5 == 0) {
    EVar3 = (this->Type).ValueType;
    if (((EVar3 == Struct) || (EVar3 == Object)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InValueType != EValueType::Struct && InValueType != EValueType::Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\ShaderTypes.h"
                           ,0xb7,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FValue *)(*pcVar6)();
      return pFVar9;
    }
    (__return_storage_ptr__->Type).StructType = (FStructType *)0x0;
    (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
    (__return_storage_ptr__->Type).ObjectType.Number = 0;
    *(ulonglong *)&(__return_storage_ptr__->Type).ValueType = CONCAT71(uStack_37,EVar3);
  }
  else {
    if (param_1 == (FStructTypeRegistry *)0x0) {
      bVar7 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7037571731476709163>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                         ,0xd5,"TypeRegistry");
      if (!bVar7) {
        return __return_storage_ptr__;
      }
      pcVar6 = (code *)swi(3);
      pFVar9 = (FValue *)(*pcVar6)();
      return pFVar9;
    }
    ppFVar10 = TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
               ::Find((TMapBase<unsigned___int64,UE::Shader::FStructType_const_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,UE::Shader::FStructType_const_*,0>_>
                       *)&param_1->Types,uVar5);
    if (ppFVar10 != (FStructType **)0x0) {
      pFVar11 = *ppFVar10;
    }
    (__return_storage_ptr__->Type).StructType = pFVar11;
    (__return_storage_ptr__->Type).ObjectType.ComparisonIndex = 0;
    (__return_storage_ptr__->Type).ObjectType.Number = 0;
    *(ulonglong *)&(__return_storage_ptr__->Type).ValueType =
         CONCAT71(uStack_1f,-(pFVar11 != (FStructType *)0x0)) & 0xffffffffffffff19;
    if ((__return_storage_ptr__->Type).ValueType != Struct) {
      return __return_storage_ptr__;
    }
    if (((((__return_storage_ptr__->Type).StructType)->ComponentTypes).ArrayNum !=
         (this->Component).ArrayNum) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.Type.GetNumComponents() == Component.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                           ,0xda,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FValue *)(*pcVar6)();
      return pFVar9;
    }
  }
  _Src = (this->Component).DataPtr;
  iVar4 = (this->Component).ArrayNum;
  if (((_Src == (FValueComponent *)0x0) && (iVar4 != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FValue *)(*pcVar6)();
    return pFVar9;
  }
  iVar8 = Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Shader::FValueComponent>_>
                    (8,8,iVar4,&(__return_storage_ptr__->Component).AllocatorInstance,piVar1,piVar2)
  ;
  FVar12 = (__return_storage_ptr__->Component).AllocatorInstance.SecondaryData;
  if (iVar4 != 0) {
    if (FVar12 == (ForElementType<UE::Shader::FValueComponent>)0x0) {
      FVar12 = (ForElementType<UE::Shader::FValueComponent>)&__return_storage_ptr__->Component;
    }
    memcpy((void *)((longlong)FVar12 + (longlong)iVar8 * 8),_Src,(longlong)iVar4 << 3);
  }
  return __return_storage_ptr__;
}


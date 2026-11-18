// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// Get<FNiagaraStatelessExpression> @ 14941ebd0

FNiagaraStatelessExpression * __thiscall
FInstancedStruct::Get<FNiagaraStatelessExpression>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *this_00;
  code *pcVar2;
  bool bVar3;
  FNiagaraStatelessExpression *pFVar4;
  UScriptStruct *pUVar5;
  FString local_28;
  FString local_18;
  
  pFVar4 = (FNiagaraStatelessExpression *)this->StructMemory;
  this_00 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar4 == (FNiagaraStatelessExpression *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructMemory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNiagaraStatelessExpression *)(*pcVar2)();
    return pFVar4;
  }
  if ((this_00 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ScriptStruct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                         ,0x23,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FNiagaraStatelessExpression *)(*pcVar2)();
    return pFVar4;
  }
  pUVar5 = FNiagaraStatelessExpression::StaticStruct();
  if (this_00 != pUVar5) {
    pUVar5 = FNiagaraStatelessExpression::StaticStruct();
    if (pUVar5 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)this_00->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(this_00->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return pFVar4;
      }
    }
    pUVar5 = FNiagaraStatelessExpression::StaticStruct();
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_18,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct == TBaseStructure<T>::Get() || ScriptStruct->IsChildOf(TBaseStructure<T>::Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructUtils.h"
                       ,0x27,L"Incompatible struct types: Cannot cast \'%s\' to \'%s\'");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraStatelessExpression *)(*pcVar2)();
      return pFVar4;
    }
  }
  return pFVar4;
}

// InitializeAs<FNiagaraStatelessExpressionColorConstant> @ 149420310

FNiagaraStatelessExpressionColorConstant * __thiscall
FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionColorConstant>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNiagaraStatelessExpressionColorConstant *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionColorConstant,
                         (UObject *)pUVar4,L"NiagaraStatelessExpressionColorConstant");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton
  ;
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionColorConstant.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FNiagaraStatelessExpressionColorConstant *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FNiagaraStatelessExpressionColorConstant *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraStatelessExpressionColorConstant *)(*pcVar1)();
      return pFVar5;
    }
  }
  *(undefined8 *)&(pFVar5->A).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar5->A).field0_0x0 + 8) = 0;
  pFVar5->_padding_ = (longlong)&___7FNiagaraStatelessExpressionColorConstant__6B_;
  (pFVar5->A).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Black.field0_0x0;
  return pFVar5;
}

// InitializeAs<FNiagaraStatelessExpressionFloatConstant> @ 149420410

FNiagaraStatelessExpressionFloatConstant * __thiscall
FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionFloatConstant>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNiagaraStatelessExpressionFloatConstant *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionFloatConstant,
                         (UObject *)pUVar4,L"NiagaraStatelessExpressionFloatConstant");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton
  ;
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionFloatConstant.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FNiagaraStatelessExpressionFloatConstant *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FNiagaraStatelessExpressionFloatConstant *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraStatelessExpressionFloatConstant *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->_padding_ = (longlong)&___7FNiagaraStatelessExpressionFloatConstant__6B_;
  *(undefined8 *)&pFVar5->A = 0;
  return pFVar5;
}

// InitializeAs<FNiagaraStatelessExpressionVec2Constant> @ 149420500

FNiagaraStatelessExpressionVec2Constant * __thiscall
FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec2Constant>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNiagaraStatelessExpressionVec2Constant *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec2Constant,
                         (UObject *)pUVar4,L"NiagaraStatelessExpressionVec2Constant");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec2Constant.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FNiagaraStatelessExpressionVec2Constant *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FNiagaraStatelessExpressionVec2Constant *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraStatelessExpressionVec2Constant *)(*pcVar1)();
      return pFVar5;
    }
  }
  (pFVar5->A).field0_0x0 = (TVector2<float>_u_0)0x0;
  pFVar5->_padding_ = (longlong)&___7FNiagaraStatelessExpressionVec2Constant__6B_;
  (pFVar5->A).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return pFVar5;
}

// InitializeAs<FNiagaraStatelessExpressionVec3Constant> @ 149420600

FNiagaraStatelessExpressionVec3Constant * __thiscall
FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec3Constant>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNiagaraStatelessExpressionVec3Constant *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec3Constant,
                         (UObject *)pUVar4,L"NiagaraStatelessExpressionVec3Constant");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec3Constant.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FNiagaraStatelessExpressionVec3Constant *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FNiagaraStatelessExpressionVec3Constant *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraStatelessExpressionVec3Constant *)(*pcVar1)();
      return pFVar5;
    }
  }
  *(undefined8 *)&(pFVar5->A).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar5->A).field0_0x0 + 8) = 0;
  pFVar5->_padding_ = (longlong)&___7FNiagaraStatelessExpressionVec3Constant__6B_;
  *(undefined8 *)&(pFVar5->A).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (pFVar5->A).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return pFVar5;
}

// InitializeAs<FNiagaraStatelessExpressionVec4Constant> @ 149420710

FNiagaraStatelessExpressionVec4Constant * __thiscall
FInstancedStruct::InitializeAs<FNiagaraStatelessExpressionVec4Constant>(FInstancedStruct *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  FNiagaraStatelessExpressionVec4Constant *pFVar5;
  uint uVar6;
  uint uVar7;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatelessExpressionVec4Constant,
                         (UObject *)pUVar4,L"NiagaraStatelessExpressionVec4Constant");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FNiagaraStatelessExpressionVec4Constant.OuterSingleton ==
      (this->ScriptStruct).field0_0x0.DebugPtr) {
    pFVar5 = (FNiagaraStatelessExpressionVec4Constant *)this->StructMemory;
  }
  else {
    Reset(this);
    uVar7 = (uint)*(short *)((longlong)&pUVar2->_padding_ + 4);
    uVar6 = (int)pUVar2->_padding_ + -1 + uVar7 & -uVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 1;
    }
    pFVar5 = FMemory::Malloc((longlong)(int)uVar6,uVar7);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->StructMemory = (uchar *)pFVar5;
  }
  if (pFVar5 == (FNiagaraStatelessExpressionVec4Constant *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FNiagaraStatelessExpressionVec4Constant *)(*pcVar1)();
      return pFVar5;
    }
  }
  pFVar5->_padding_ = 0;
  pFVar5->_padding_ = (longlong)&___7FNiagaraStatelessExpressionVec4Constant__6B_;
  *(undefined8 *)&(pFVar5->A).field0_0x0 = 0;
  *(undefined8 *)((longlong)&(pFVar5->A).field0_0x0 + 8) = 0;
  return pFVar5;
}


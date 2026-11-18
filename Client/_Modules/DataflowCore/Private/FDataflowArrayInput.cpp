// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 5

// StaticStruct @ 1443e4010

UScriptStruct * __cdecl FDataflowArrayInput::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowArrayInput.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowArrayInput.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowArrayInput,(UObject *)pUVar1,
                         L"DataflowArrayInput");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowArrayInput.OuterSingleton;
}

// FDataflowArrayInput @ 14442bb70

FDataflowArrayInput * __thiscall
FDataflowArrayInput::FDataflowArrayInput
          (FDataflowArrayInput *this,int param_1,FArrayInputParameters *param_2)

{
  FDataflowConnection::FDataflowConnection
            ((FDataflowConnection *)this,INPUT,(FConnectionParameters *)param_2);
  this->Index = param_1;
  this->_padding_ = (longlong)&___7FDataflowArrayInput__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->ElementOffset = param_2->InnerOffset;
  this->ArrayProperty = param_2->ArrayProperty;
  return this;
}

// GetContainerElementOffset @ 14444b370

uint __thiscall FDataflowArrayInput::GetContainerElementOffset(FDataflowArrayInput *this)

{
  return this->ElementOffset;
}

// GetContainerIndex @ 14444b390

int __thiscall FDataflowArrayInput::GetContainerIndex(FDataflowArrayInput *this)

{
  return this->Index;
}

// RealAddress @ 144453980

void * __thiscall FDataflowArrayInput::RealAddress(FDataflowArrayInput *this)

{
  FArrayProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong lVar5;
  
  if (this->_padding_ == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3708378250603397373>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowConnection.h"
                       ,0xfd,"OwningNode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  lVar5 = (ulonglong)(uint)this->_padding_ + this->_padding_;
  if ((lVar5 != 0) && (pFVar1 = this->ArrayProperty, pFVar1 != (FArrayProperty *)0x0)) {
    lVar5 = (**(code **)(pFVar1->_padding_ + 0xd8))(pFVar1,pFVar1->Inner,lVar5,this->Index);
    if (lVar5 != 0) {
      return (void *)((ulonglong)this->ElementOffset + lVar5);
    }
  }
  return (void *)0x0;
}


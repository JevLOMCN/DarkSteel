// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FEngineStatFuncs @ 148b1d2b0

FEngineStatFuncs * __thiscall
UEngine::FEngineStatFuncs::FEngineStatFuncs(FEngineStatFuncs *this,FEngineStatFuncs *param_1)

{
  this->CommandName = param_1->CommandName;
  (this->CommandNameString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandNameString).Data.AllocatorInstance.Data =
       (param_1->CommandNameString).Data.AllocatorInstance.Data;
  (param_1->CommandNameString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CommandNameString).Data.ArrayNum = (param_1->CommandNameString).Data.ArrayNum;
  (this->CommandNameString).Data.ArrayMax = (param_1->CommandNameString).Data.ArrayMax;
  (param_1->CommandNameString).Data.ArrayNum = 0;
  (param_1->CommandNameString).Data.ArrayMax = 0;
  this->CategoryName = param_1->CategoryName;
  FText::FText(&this->DescriptionString,&param_1->DescriptionString);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RenderFunc,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->RenderFunc);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ToggleFunc,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->ToggleFunc);
  this->bIsRHS = param_1->bIsRHS;
  return this;
}

// FEngineStatFuncs @ 148b1d340

FEngineStatFuncs * __thiscall
UEngine::FEngineStatFuncs::FEngineStatFuncs
          (FEngineStatFuncs *this,FName *param_1,FName *param_2,FText *param_3,
          TDelegate<int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
          *param_4,TDelegate<bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
                   *param_5,bool param_6)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this->CommandName = *param_1;
  ::FName::ToString(param_1,&this->CommandNameString);
  this->CategoryName = *param_2;
  (this->DescriptionString).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_3->TextData).Reference;
  (this->DescriptionString).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DescriptionString).Flags = param_3->Flags;
  TDelegate<int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
  ::
  TDelegate<int___cdecl(UWorld_*,FViewport_*,FCanvas_*,int,int,UE::Math::TVector<double>_const_*,UE::Math::TRotator<double>_const_*),FDefaultDelegateUserPolicy>
            (&this->RenderFunc,param_4);
  TDelegate<bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
  ::
  TDelegate<bool___cdecl(UWorld_*,FCommonViewportClient_*,wchar_t_const_*),FDefaultDelegateUserPolicy>
            (&this->ToggleFunc,param_5);
  this->bIsRHS = param_6;
  ::FString::RemoveFromStart(&this->CommandNameString,L"STAT_",5,IgnoreCase);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return this;
}


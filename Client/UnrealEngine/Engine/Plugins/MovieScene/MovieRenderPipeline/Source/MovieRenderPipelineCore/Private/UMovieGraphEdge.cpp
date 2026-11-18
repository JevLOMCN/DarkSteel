// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// StaticClass @ 14dc98560

UClass * __cdecl UMovieGraphEdge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEdge",
               &Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton,
               StaticRegisterNativesUMovieGraphEdge,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEdge>,InternalVTableHelperCtorCaller<UMovieGraphEdge>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton;
}

// UMovieGraphEdge @ 14dcafe00

UMovieGraphEdge * __thiscall
UMovieGraphEdge::UMovieGraphEdge(UMovieGraphEdge *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphEdge__6B_;
  (this->InputPin).field0_0x0.DebugPtr = (UMovieGraphPin *)0x0;
  (this->OutputPin).field0_0x0.DebugPtr = (UMovieGraphPin *)0x0;
  return this;
}

// UMovieGraphEdge @ 14dcafe40

UMovieGraphEdge * __thiscall
UMovieGraphEdge::UMovieGraphEdge(UMovieGraphEdge *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphEdge__6B_;
  (this->InputPin).field0_0x0.DebugPtr = (UMovieGraphPin *)0x0;
  (this->OutputPin).field0_0x0.DebugPtr = (UMovieGraphPin *)0x0;
  return this;
}

// ~UMovieGraphEdge @ 14dcb2dc0

void __thiscall UMovieGraphEdge::~UMovieGraphEdge(UMovieGraphEdge *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphEdge__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetOtherPin @ 14dccfdb0

UMovieGraphPin * __thiscall
UMovieGraphEdge::GetOtherPin(UMovieGraphEdge *this,UMovieGraphPin *param_1,bool param_2)

{
  int iVar1;
  UMovieGraphNode *pUVar2;
  code *pcVar3;
  UMovieGraphPin *pUVar4;
  UClass *pUVar5;
  UMovieGraphPin *pUVar6;
  bool bVar7;
  
  pUVar4 = (this->InputPin).field0_0x0.DebugPtr;
  if (pUVar4 == (UMovieGraphPin *)0x0) {
    bVar7 = param_1 == (UMovieGraphPin *)0x0;
  }
  else {
    bVar7 = pUVar4 == param_1;
  }
  if (!bVar7) {
    pUVar4 = (this->OutputPin).field0_0x0.DebugPtr;
    if (pUVar4 == (UMovieGraphPin *)0x0) {
      bVar7 = param_1 == (UMovieGraphPin *)0x0;
    }
    else {
      bVar7 = pUVar4 == param_1;
    }
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFirstPin == InputPin || InFirstPin == OutputPin",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphEdge.cpp"
                           ,0x10,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pUVar4 = (UMovieGraphPin *)(*pcVar3)();
      return pUVar4;
    }
  }
  pUVar4 = (this->InputPin).field0_0x0.DebugPtr;
  if (pUVar4 == (UMovieGraphPin *)0x0) {
    bVar7 = param_1 == (UMovieGraphPin *)0x0;
  }
  else {
    bVar7 = pUVar4 == param_1;
  }
  if (bVar7) {
    pUVar4 = (this->OutputPin).field0_0x0.DebugPtr;
  }
  if (pUVar4 == (UMovieGraphPin *)0x0) {
    pUVar4 = (UMovieGraphPin *)0x0;
  }
  else if ((param_2) && ((pUVar4->Node).field0_0x0.DebugPtr != (UMovieGraphNode *)0x0)) {
    pUVar5 = Z_Construct_UClass_UMovieGraphRerouteNode_NoRegister();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)&pUVar4->Node,pUVar5);
    if ((bVar7) &&
       (((pUVar2 = (pUVar4->Node).field0_0x0.DebugPtr, pUVar2 != (UMovieGraphNode *)0x0 &&
         (pUVar6 = (UMovieGraphPin *)(**(code **)(pUVar2->_padding_ + 0x380))(pUVar2,pUVar4),
         pUVar6 != (UMovieGraphPin *)0x0)) && (iVar1 = (pUVar6->Edges).ArrayNum, iVar1 != 0)))) {
      if ((iVar1 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        pUVar4 = (UMovieGraphPin *)(*pcVar3)();
        return pUVar4;
      }
      pUVar4 = GetOtherPin(*(UMovieGraphEdge **)(pUVar6->Edges).AllocatorInstance.Data,pUVar6,true);
    }
  }
  return pUVar4;
}

// GetPrivateStaticClass @ 14dcd25f0

UClass * __cdecl UMovieGraphEdge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphEdge",
               &Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton,
               StaticRegisterNativesUMovieGraphEdge,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphEdge>,InternalVTableHelperCtorCaller<UMovieGraphEdge>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphEdge.InnerSingleton;
}

// IsValid @ 14dcd7760

bool __thiscall UMovieGraphEdge::IsValid(UMovieGraphEdge *this)

{
  if (((this->InputPin).field0_0x0.DebugPtr != (UMovieGraphPin *)0x0) &&
     ((this->OutputPin).field0_0x0.DebugPtr != (UMovieGraphPin *)0x0)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUMovieGraphEdge @ 14dce6510

void __cdecl UMovieGraphEdge::StaticRegisterNativesUMovieGraphEdge(void)

{
  return;
}


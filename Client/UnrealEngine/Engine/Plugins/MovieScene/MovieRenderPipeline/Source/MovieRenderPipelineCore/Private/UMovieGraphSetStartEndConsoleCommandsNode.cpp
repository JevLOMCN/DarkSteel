// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// StaticClass @ 14dcf6230

UClass * __cdecl UMovieGraphSetStartEndConsoleCommandsNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSetStartEndConsoleCommandsNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSetStartEndConsoleCommandsNode",
               &Z_Registration_Info_UClass_UMovieGraphSetStartEndConsoleCommandsNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSetStartEndConsoleCommandsNode,0xc0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphSetStartEndConsoleCommandsNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSetStartEndConsoleCommandsNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSetStartEndConsoleCommandsNode.InnerSingleton;
}

// UMovieGraphSetStartEndConsoleCommandsNode @ 14dd0b560

UMovieGraphSetStartEndConsoleCommandsNode * __thiscall
UMovieGraphSetStartEndConsoleCommandsNode::UMovieGraphSetStartEndConsoleCommandsNode
          (UMovieGraphSetStartEndConsoleCommandsNode *this,FVTableHelper *param_1)

{
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this,param_1);
  this->bOverride_ConsoleCommands = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphSetStartEndConsoleCommandsNode__6B_;
  (this->ConsoleCommands).field0_0x0.DebugPtr = (UMovieGraphStartEndConsoleCommands *)0x0;
  return this;
}

// UMovieGraphSetStartEndConsoleCommandsNode @ 14dd0b5a0

UMovieGraphSetStartEndConsoleCommandsNode * __thiscall
UMovieGraphSetStartEndConsoleCommandsNode::UMovieGraphSetStartEndConsoleCommandsNode
          (UMovieGraphSetStartEndConsoleCommandsNode *this)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  UMovieGraphStartEndConsoleCommands *pUVar4;
  FName local_res8;
  
  UMovieGraphSettingNode::UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  this->bOverride_ConsoleCommands = '\x01';
  this->_padding_ = (longlong)&___7UMovieGraphSetStartEndConsoleCommandsNode__6B_;
  (this->ConsoleCommands).field0_0x0.DebugPtr = (UMovieGraphStartEndConsoleCommands *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"Console Commands");
  FVar1 = *pFVar2;
  pUVar3 = UMovieGraphStartEndConsoleCommands::StaticClass();
  pUVar4 = (UMovieGraphStartEndConsoleCommands *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMovieGraphStartEndConsoleCommands *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->ConsoleCommands).field0_0x0.DebugPtr = pUVar4;
  return this;
}

// ~UMovieGraphSetStartEndConsoleCommandsNode @ 14dd0de50

void __thiscall
UMovieGraphSetStartEndConsoleCommandsNode::~UMovieGraphSetStartEndConsoleCommandsNode
          (UMovieGraphSetStartEndConsoleCommandsNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphSetStartEndConsoleCommandsNode__6B_;
  UMovieGraphSettingNode::~UMovieGraphSettingNode((UMovieGraphSettingNode *)this);
  return;
}

// GetBranchRestriction @ 14dd23ed0

EMovieGraphBranchRestriction __thiscall
UMovieGraphSetStartEndConsoleCommandsNode::GetBranchRestriction
          (UMovieGraphSetStartEndConsoleCommandsNode *this)

{
  return Globals;
}

// GetPrivateStaticClass @ 14dd2d3e0

UClass * __cdecl UMovieGraphSetStartEndConsoleCommandsNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphSetStartEndConsoleCommandsNode.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphSetStartEndConsoleCommandsNode",
               &Z_Registration_Info_UClass_UMovieGraphSetStartEndConsoleCommandsNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphSetStartEndConsoleCommandsNode,0xc0,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieGraphSetStartEndConsoleCommandsNode>,
               InternalVTableHelperCtorCaller<UMovieGraphSetStartEndConsoleCommandsNode>,local_res8,
               UMovieGraphSettingNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphSetStartEndConsoleCommandsNode.InnerSingleton;
}

// StaticRegisterNativesUMovieGraphSetStartEndConsoleCommandsNode @ 14dd453e0

void __cdecl
UMovieGraphSetStartEndConsoleCommandsNode::
StaticRegisterNativesUMovieGraphSetStartEndConsoleCommandsNode(void)

{
  return;
}


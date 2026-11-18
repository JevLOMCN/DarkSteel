// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FAnimationAttributeIdentifier @ 147433910

FAnimationAttributeIdentifier * __thiscall
FAnimationAttributeIdentifier::FAnimationAttributeIdentifier
          (FAnimationAttributeIdentifier *this,FAnimationAttributeIdentifier *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  int iVar3;
  UScriptStruct *pUVar4;
  FScriptContainerElement *_Src;
  FName FVar5;
  
  this->Name = param_1->Name;
  this->BoneName = param_1->BoneName;
  this->BoneIndex = param_1->BoneIndex;
  pUVar4 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  (this->ScriptStruct).field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FVar5 = (param_1->ScriptStructPath).AssetPath.AssetName;
  pFVar1 = &(this->ScriptStructPath).SubPathString;
  piVar2 = &(this->ScriptStructPath).SubPathString.Data.ArrayMax;
  (this->ScriptStructPath).AssetPath.PackageName = (param_1->ScriptStructPath).AssetPath.PackageName
  ;
  (this->ScriptStructPath).AssetPath.AssetName = FVar5;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ScriptStructPath).SubPathString.Data.ArrayNum;
  _Src = (param_1->ScriptStructPath).SubPathString.Data.AllocatorInstance.Data;
  (this->ScriptStructPath).SubPathString.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  return this;
}

// StaticStruct @ 147511240

UScriptStruct * __cdecl FAnimationAttributeIdentifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationAttributeIdentifier,(UObject *)pUVar1,
                         L"AnimationAttributeIdentifier");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationAttributeIdentifier.OuterSingleton;
}


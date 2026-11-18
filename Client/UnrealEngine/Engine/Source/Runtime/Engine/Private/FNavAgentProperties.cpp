// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147366220

UScriptStruct * __cdecl FNavAgentProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavAgentProperties.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavAgentProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavAgentProperties,(UObject *)pUVar1,
                         L"NavAgentProperties");
  }
  return Z_Registration_Info_UScriptStruct_FNavAgentProperties.OuterSingleton;
}

// FNavAgentProperties @ 14737a9d0

FNavAgentProperties * __thiscall
FNavAgentProperties::FNavAgentProperties(FNavAgentProperties *this,FNavAgentProperties *param_1)

{
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->AgentRadius = param_1->AgentRadius;
  this->AgentHeight = param_1->AgentHeight;
  this->AgentStepHeight = param_1->AgentStepHeight;
  this->NavWalkingSearchHeightScale = param_1->NavWalkingSearchHeightScale;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&this->PreferredNavData,
             (FSoftObjectPath *)&param_1->PreferredNavData);
  return this;
}

// operator= @ 14737e1d0

FNavAgentProperties * __thiscall
FNavAgentProperties::operator=(FNavAgentProperties *this,FNavAgentProperties *param_1)

{
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->AgentRadius = param_1->AgentRadius;
  this->AgentHeight = param_1->AgentHeight;
  this->AgentStepHeight = param_1->AgentStepHeight;
  this->NavWalkingSearchHeightScale = param_1->NavWalkingSearchHeightScale;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&this->PreferredNavData,
             (FSoftObjectPath *)&param_1->PreferredNavData);
  return this;
}

// IsNavDataMatching @ 1473a6e40

bool __thiscall
FNavAgentProperties::IsNavDataMatching(FNavAgentProperties *this,FNavAgentProperties *param_1)

{
  bool bVar1;
  
  bVar1 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&this->PreferredNavData,
                     (FSoftObjectPath *)&param_1->PreferredNavData);
  if (((!bVar1) && (*(longlong *)&(this->PreferredNavData).field_0x0 != 0)) &&
     (*(longlong *)&(param_1->PreferredNavData).field_0x0 != 0)) {
    return false;
  }
  return true;
}

// SetPreferredNavData @ 1473b7d90

void __thiscall
FNavAgentProperties::SetPreferredNavData(FNavAgentProperties *this,TSubclassOf<AActor> param_1)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FSoftObjectPath local_28;
  
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UObject *)0x0;
  if ((lVar3 != 0) && (pUVar5 = AActor::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar6 = *(UObject **)param_1.Class.field0_0x0;
    }
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,pUVar6);
  puVar1 = &(this->PreferredNavData).field_0x10;
  *(uint *)&(this->PreferredNavData).field_0x0 =
       local_28.AssetPath.PackageName.ComparisonIndex.Value;
  *(uint *)&(this->PreferredNavData).field_0x4 = local_28.AssetPath.PackageName.Number;
  *(uint *)&(this->PreferredNavData).field_0x8 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
  *(uint *)&(this->PreferredNavData).field_0xc = local_28.AssetPath.AssetName.Number;
  if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
    *(int *)&(this->PreferredNavData).field_0x18 = local_28.SubPathString.Data.ArrayNum;
    *(int *)&(this->PreferredNavData).field_0x1c = local_28.SubPathString.Data.ArrayMax;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateWithCollisionComponent @ 1473bcda0

void __thiscall
FNavAgentProperties::UpdateWithCollisionComponent
          (FNavAgentProperties *this,UShapeComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  float fVar4;
  
  if (param_1 == (UShapeComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CollisionComponent != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\Navigation\\NavigationTypes.cpp"
                       ,0x1da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar4 = (float)*(double *)&param_1->field_0x140;
  dVar3 = (double)fVar4 - *(double *)&param_1->field_0x140;
  if (__real_3fb0000000000000 <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FloatFitsIn<OutType>(In, Precision)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xc0,L"Loss of data caused by narrowing conversion");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->AgentRadius = fVar4;
  return;
}


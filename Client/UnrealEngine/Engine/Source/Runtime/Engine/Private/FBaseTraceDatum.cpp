// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FBaseTraceDatum @ 1477eb570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FBaseTraceDatum * __thiscall FBaseTraceDatum::FBaseTraceDatum(FBaseTraceDatum *this)

{
  TStatId local_res10;
  
  (this->PhysWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res10.StatIdPtr = &TStatId::TStatId_NAME_None;
  FCollisionQueryParams::FCollisionQueryParams
            (&(this->CollisionParams).CollisionQueryParam,(FName)0x0,&local_res10,false,
             (AActor *)0x0);
  FCollisionResponseContainer::FCollisionResponseContainer
            (&(this->CollisionParams).ResponseParam.CollisionResponse);
  FCollisionResponseContainer::SetAllChannels
            (&(this->CollisionParams).ResponseParam.CollisionResponse,ECR_Block);
  (this->CollisionParams).ObjectQueryParam.ObjectTypesToQuery = 0;
  (this->CollisionParams).ObjectQueryParam.IgnoreMask = '\0';
  (this->CollisionParams).CollisionShape.ShapeType = Line;
  return this;
}

// operator= @ 1477f51f0

FBaseTraceDatum * __thiscall
FBaseTraceDatum::operator=(FBaseTraceDatum *this,FBaseTraceDatum *param_1)

{
  undefined8 uVar1;
  
  (this->PhysWorld).WeakPtr = (param_1->PhysWorld).WeakPtr;
  FCollisionQueryParams::operator=
            (&(this->CollisionParams).CollisionQueryParam,
             &(param_1->CollisionParams).CollisionQueryParam);
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 8);
  *(undefined8 *)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 =
       *(undefined8 *)&(param_1->CollisionParams).ResponseParam.CollisionResponse.field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 8)
       = uVar1;
  uVar1 = *(undefined8 *)
           ((longlong)&(param_1->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 0x18)
  ;
  *(undefined8 *)
   ((longlong)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 0x10) =
       *(undefined8 *)
        ((longlong)&(param_1->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 0x10);
  *(undefined8 *)
   ((longlong)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 0x18) = uVar1;
  (this->CollisionParams).ObjectQueryParam = (param_1->CollisionParams).ObjectQueryParam;
  uVar1 = *(undefined8 *)((longlong)&(param_1->CollisionParams).CollisionShape.field1_0x4 + 4);
  *(undefined8 *)&(this->CollisionParams).CollisionShape =
       *(undefined8 *)&(param_1->CollisionParams).CollisionShape;
  *(undefined8 *)((longlong)&(this->CollisionParams).CollisionShape.field1_0x4 + 4) = uVar1;
  this->TraceChannel = param_1->TraceChannel;
  this->FrameNumber = param_1->FrameNumber;
  this->UserData = param_1->UserData;
  return this;
}

// Set @ 147869010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FBaseTraceDatum::Set
          (FBaseTraceDatum *this,UWorld *param_1,FCollisionShape *param_2,
          FCollisionQueryParams *param_3,FCollisionResponseParams *param_4,
          FCollisionObjectQueryParams *param_5,ECollisionChannel param_6,uint param_7,int param_8)

{
  FCollisionObjectQueryParams FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  UWorld *local_res8;
  
  if (param_1 == (UWorld *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6125059968996474942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Collision\\WorldCollision.cpp"
                       ,0x3e,"World");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = *(undefined8 *)((longlong)&param_2->field1_0x4 + 4);
  *(undefined8 *)&(this->CollisionParams).CollisionShape = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)&(this->CollisionParams).CollisionShape.field1_0x4 + 4) = uVar3;
  FCollisionQueryParams::operator=(&(this->CollisionParams).CollisionQueryParam,param_3);
  uVar3 = *(undefined8 *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 8);
  *(undefined8 *)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 =
       *(undefined8 *)&(param_4->CollisionResponse).field0_0x0;
  *(undefined8 *)((longlong)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 8)
       = uVar3;
  uVar3 = *(undefined8 *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 0x18);
  *(undefined8 *)
   ((longlong)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 0x10) =
       *(undefined8 *)((longlong)&(param_4->CollisionResponse).field0_0x0 + 0x10);
  *(undefined8 *)
   ((longlong)&(this->CollisionParams).ResponseParam.CollisionResponse.field0_0x0 + 0x18) = uVar3;
  FVar1 = *param_5;
  this->TraceChannel = param_6;
  this->UserData = param_7;
  this->FrameNumber = param_8;
  (this->CollisionParams).ObjectQueryParam = FVar1;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  return;
}


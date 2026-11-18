// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 1

// Connect @ 14e6626e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Interchange::FNetworkClientNode::Connect
          (FNetworkClientNode *this,FString *param_1,int param_2,double param_3)

{
  double dVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  ISocketSubsystem *pIVar5;
  FSocket *pFVar6;
  LARGE_INTEGER local_res8;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  
  if (*(longlong **)&this->field_0x8 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x8 + 0x10))();
    local_res8.QuadPart = 0;
    pIVar5 = ISocketSubsystem::Get((FName *)&local_res8.s);
    (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5,*(undefined8 *)&this->field_0x8);
    *(undefined8 *)&this->field_0x8 = 0;
  }
  pFVar6 = FNetworkNode::CreateInternalSocket((FNetworkNode *)this,param_1);
  *(FSocket **)&this->field_0x8 = pFVar6;
  if (pFVar6 == (FSocket *)0x0) {
    *(undefined4 *)&this->field_0x10 = 1;
    bVar4 = false;
  }
  else {
    local_res8.QuadPart = 0;
    pIVar5 = ISocketSubsystem::Get((FName *)&local_res8.s);
    (**(code **)(pIVar5->_padding_ + 0x90))(pIVar5,&local_48);
    (**(code **)(*local_48 + 0x78))();
    (**(code **)(*local_48 + 0x28))(local_48,param_2);
    QueryPerformanceCounter(&local_res8);
    dVar2 = __real_4170000000000000;
    dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    (**(code **)(**(longlong **)&this->field_0x8 + 0xa0))(*(longlong **)&this->field_0x8,1);
    do {
      cVar3 = (**(code **)(**(longlong **)&this->field_0x8 + 0x28))
                        (*(longlong **)&this->field_0x8,local_48);
      if (cVar3 != '\0') {
        if (5 < (byte)LogInterchangeDispatcher._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher)
          ;
        }
        bVar4 = true;
        goto LAB_14e66289b;
      }
      QueryPerformanceCounter(&local_res8);
    } while ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar2 <
             dVar1 + param_3);
    if (3 < (byte)LogInterchangeDispatcher._0_1_) {
      Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangeDispatcher);
    }
    if (*(longlong **)&this->field_0x8 != (longlong *)0x0) {
      (**(code **)(**(longlong **)&this->field_0x8 + 0x10))();
      local_res8.QuadPart = 0;
      pIVar5 = ISocketSubsystem::Get((FName *)&local_res8.s);
      (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5,*(undefined8 *)&this->field_0x8);
      *(undefined8 *)&this->field_0x8 = 0;
    }
    bVar4 = false;
LAB_14e66289b:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  return bVar4;
}


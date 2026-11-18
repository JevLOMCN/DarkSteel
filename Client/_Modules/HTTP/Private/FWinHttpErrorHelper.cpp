// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 14

// LogWinHttpAddRequestHeadersFailure @ 14316e6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpAddRequestHeadersFailure(uint param_1)

{
  if (param_1 == 8) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ee4) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ef2) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ef3) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (1 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
  return;
}

// LogWinHttpCloseHandleFailure @ 14316e760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpCloseHandleFailure(uint param_1)

{
  if (param_1 == 8) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ee4) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2eec) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (1 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
  return;
}

// LogWinHttpConnectFailure @ 14316e7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpConnectFailure(uint param_1)

{
  if (param_1 < 0x2ee7) {
    if (param_1 == 0x2ee6) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee5) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2eec) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef1) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>
            ((FStaticBasicLogRecord *)&PTR_u_WinHttpConnect__150a5d188,
             (FLogCategoryBase *)&LogWinHttp);
  return;
}

// LogWinHttpOpenFailure @ 14316e930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpOpenFailure(uint param_1)

{
  if (param_1 == 8) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ee4) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (1 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
  return;
}

// LogWinHttpOpenRequestFailure @ 14316e9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpOpenRequestFailure(uint param_1)

{
  if (param_1 < 0x2ee7) {
    if (param_1 == 0x2ee6) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee5) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2ef1) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  return;
}

// LogWinHttpQueryDataAvailableFailure @ 14316eab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpQueryDataAvailableFailure(uint param_1)

{
  if (param_1 < 0x2ef2) {
    if (param_1 == 0x2ef1) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef3) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2efe) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>
            ((FStaticBasicLogRecord *)&PTR_u_WinHttpQueryDat_150a60430,
             (FLogCategoryBase *)&LogWinHttp);
  return;
}

// LogWinHttpQueryHeadersFailure @ 14316ebf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpQueryHeadersFailure(uint param_1)

{
  if (param_1 < 0x2ef3) {
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x7a) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2ef3) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2f76) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  return;
}

// LogWinHttpReadDataFailure @ 14316ed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpReadDataFailure(uint param_1)

{
  if (param_1 < 0x2ef3) {
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_WinHttpReadData_150a608d0,
                 (FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef1) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2ef3) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2efe) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2f98) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
  return;
}

// LogWinHttpReceiveResponseFailure @ 14316ee60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpReceiveResponseFailure(uint param_1)

{
  if (param_1 < 0x2ee3) {
    if (param_1 == 0x2ee2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
switchD_14316eee0_caseD_2ee8:
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    switch(param_1) {
    case 0x2ee4:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ee5:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ee6:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ee7:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    default:
      goto switchD_14316eee0_caseD_2ee8;
    case 0x2eef:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ef1:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ef2:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_WinHttpReceiveR_150a5f1f0,
                   (FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ef3:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2efd:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2efe:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f00:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f0c:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f78:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f7c:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f8f:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f95:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f96:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f97:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f98:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
    }
  }
  return;
}

// LogWinHttpSendRequestFailure @ 14316f260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpSendRequestFailure(uint param_1)

{
  if (param_1 < 0x2ee3) {
    if (param_1 == 0x2ee2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x57) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
switchD_14316f305_caseD_2ee8:
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    switch(param_1) {
    case 0x2ee4:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ee5:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ee6:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ee7:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    default:
      goto switchD_14316f305_caseD_2ee8;
    case 0x2eec:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2eef:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_WinHttpSendRequ_150a5e570,
                   (FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ef1:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ef2:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2ef3:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2efd:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2efe:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f00:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f0c:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f8f:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
      break;
    case 0x2f98:
      if (1 < (byte)LogWinHttp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
        return;
      }
    }
  }
  return;
}

// LogWinHttpSetOptionFailure @ 14316f600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpSetOptionFailure(uint param_1)

{
  if (param_1 < 0x2eea) {
    if (param_1 == 0x2ee9) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x57) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2eeb) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef3) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>
            ((FStaticBasicLogRecord *)&PTR_u_WinHttpSetOptio_150a5da78,
             (FLogCategoryBase *)&LogWinHttp);
  return;
}

// LogWinHttpSetStatusCallbackFailure @ 14316f740

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpSetStatusCallbackFailure(uint param_1)

{
  if (param_1 == 8) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ee4) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ef2) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (1 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
  return;
}

// LogWinHttpSetTimeoutsFailure @ 14316f7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpSetTimeoutsFailure(uint param_1)

{
  if (param_1 == 8) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x57) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ee4) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ef2) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (param_1 == 0x2ef3) {
    if (1 < (byte)LogWinHttp._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else if (1 < (byte)LogWinHttp._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
    return;
  }
  return;
}

// LogWinHttpWriteDataFailure @ 14316f8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FWinHttpErrorHelper::LogWinHttpWriteDataFailure(uint param_1)

{
  if (param_1 < 0x2ef2) {
    if (param_1 == 0x2ef1) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 8) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ee4) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  else {
    if (param_1 == 0x2ef2) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2ef3) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
    if (param_1 == 0x2efe) {
      if ((byte)LogWinHttp._0_1_ < 2) {
        return;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWinHttp);
      return;
    }
  }
  if ((byte)LogWinHttp._0_1_ < 2) {
    return;
  }
  UE::Logging::Private::BasicLog<2>
            ((FStaticBasicLogRecord *)&PTR_u_WinHttpWriteDat_150a60e08,
             (FLogCategoryBase *)&LogWinHttp);
  return;
}

